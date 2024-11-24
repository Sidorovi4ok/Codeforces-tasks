/*
  Задача №1602.
  
  Дана строка, являющаяся параграфом в тексте. Текст необходимо отформатировать так, чтобы длина каждой строки не превосходила числа m, слова при этом не разрывать.
  
  Входные данные
    На вход программе сначала подается число m,0<m≤255. 
    В следующей строке находится исходный текст. 
    Длина слов в нем не превышает m, слова разделены ровно одним пробелом.
    
  Выходные данные
    Выведите разбиение этого текста на строки длиной не более чем m символов 
    (слово переносится на следующую строку только если в текущей строке его разместить уже невозможно). 
    Новая строка не должна начинаться с пробела.
    
  Примеры
    Входные данные
      7
      НДХМ ДБЮ РПХ
    
    Выходные данные
    НДХМ
    ДБЮ РПХ
*/


#include <stdio.h>
#include <string.h>


/*
    Функция для форматирования текста, разбивая его на строки длиной не более m
    Входные данные:
        m - максимальная длина строки
        text - строка, которую нужно отформатировать
*/
void format_text(int, char*);


void format_text(int m, char* text) 
{
    char* word = strtok(text, " "); 
    int current_line_length = 0;

    while (word != NULL) 
    {
        int word_len = strlen(word);

        if (current_line_length + word_len + (current_line_length > 0 ? 1 : 0) <= m) 
        {
            if (current_line_length > 0) 
            {
                printf(" "); 
                current_line_length++; 
            }
            
            printf("%s", word);
            current_line_length += word_len;
        } 
        else 
        {
            printf("\n%s", word);
            current_line_length = word_len;
        }

        word = strtok(NULL, " ");
    }
}


int main() 
{
    int m; 
    scanf("%d", &m); getchar();
    
    char text[256]; 
    fgets(text, 256, stdin); 

    int len = strlen(text);
    if (text[len - 1] == '\n') 
        text[len - 1] = '\0';
    
    format_text(m, text);
    return 0;
}
