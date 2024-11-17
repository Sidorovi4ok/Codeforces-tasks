/*
  Судоку
  (Время: 1 сек. Память: 16 Мб Сложность: 27%)
  
  Судоку размера n называется квадрат со стороной n2, разделенный на n2 средних квадратов со стороной n, 
  каждый из которых разделен на n2 маленьких квадратов. В каждом маленьком квадрате записано число от 1 до n2.
  
  Судоку называется правильным, если в каждом столбце, каждой строке и каждом среднем квадрате встречаются все числа от 1 до n2.
  Недавно Вася нарисовал Судоку размера n. Ваша задача – помочь ему определить правильный ли он.
  
  Входные данные
  В первой строке входного файла INPUT.TXT содержится число n (1 ≤ n ≤ 10). 
  В следующих n2 строчках содержится по n2 чисел, задающих нарисованный Васей Судоку.
  
  Все числа во входном файле натуральные и не превосходят 100 по модулю.
  
  Выходные данные
  Если Судоку правильный, то выведите в выходной файл OUTPUT.TXT слово «Correct», иначе выведите «Incorrect». 
*/




#include <stdio.h>

#define MAX 101


/*
    Функция для проверки корректности строки
    Входные параметры:
        src   - указатель на исходный массив
        n     - размер блока Судоку
        row   - индекс строки для проверки
    Возвращает:
        - 1, если строка корректна
        - 0, если строка некорректна
*/
int valid_Row(int (*)[MAX], int, int);


int valid_Row(int src[MAX][MAX], int n, int row) 
{
    int size = n * n, 
        visited[MAX] = {0};

    for (int col = 0; col < size; ++col) 
    {
        int num = src[row][col];
        
        if (num < 1 || num > size || visited[num]) 
            return 0;
            
        visited[num] = 1;
    }
    
    return 1;
}



/*
    Функция для проверки корректности столбца
    Входные параметры:
        src  - указатель на исходный массив
        n    - размер блока Судоку
        col  - индекс столбца для проверки
    Возвращает:
        - 1, если столбец корректен
        - 0, если столбец некорректен
*/
int valid_Col(int (*)[MAX], int, int);


int valid_Col(int src[MAX][MAX], int n, int col) 
{
    int size = n * n,
        visited[MAX] = {0};  

    for (int row = 0; row < size; ++row) 
    {
        int num = src[row][col];
        
        if (num < 1 || num > size || visited[num]) 
            return 0;
        
        visited[num] = 1;
    }
    
    return 1;
}





/*
    Функция для проверки корректности квадрата
    Входные параметры:
        src        - указатель на исходный массив
        n          - размер блока Судоку
        row_start  - начальный индекс строки
        col_start  - начальный индекс столбца
    Возвращает:
        - 1, если квадрат корректен
        - 0, если квадрат некорректен
*/
int valid_Square(int (*)[MAX], int, int, int);


int valid_Square(int src[MAX][MAX], int n, int row_start, int col_start) 
{
    int size = n * n,
        visited[MAX] = {0};  

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            int num = src[row_start + i][col_start + j];
            
            if (num < 1 || num > size || visited[num]) 
                return 0;
                
            visited[num] = 1;
        }
    }
    
    return 1;
}





int main() 
{
    int n;
    scanf("%d", &n);

    int size = n * n;
    int src[MAX][MAX];
    

    for (int i = 0; i < size; ++i) 
        for (int j = 0; j < size; ++j) 
            scanf("%d", &src[i][j]);
            

    for (int i = 0; i < size; ++i) 
        if (!valid_Row(src, n, i) ||
            !valid_Col(src, n, i)) 
        {
            printf("Incorrect\n");
            return 0;
        }
    

    for (int i = 0; i < size; i += n) 
        for (int j = 0; j < size; j += n) 
            if (!valid_Square(src, n, i, j)) 
            {
                printf("Incorrect\n");
                return 0;
            }


    printf("Correct\n");
    return 0;
}
