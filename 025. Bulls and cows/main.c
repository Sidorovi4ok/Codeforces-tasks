/*
  Быки и коровы
  (Время: 1 сек. Память: 16 Мб Сложность: 20%)
  
  Петя и Вася часто играют в различные логические игры. Недавно Петя поведал Васе о новой игре «Быки и коровы» и теперь они играют в эту игру сутками. 
  Суть игры очень проста: Петя загадывает четырехзначное число, состоящее из различных цифр. Вася отгадывает задуманное Петей число, перебирая возможные варианты. 
  Каждый раз Вася предлагает вариант своего четырёхзначного числа, состоящего из различных цифр, а Петя делает Васе подсказку: сообщает количество быков и коров, после чего Вася с учетом подсказки продолжает отгадывание числа до тех пор, пока не отгадает. 
  Быки – это количество цифр в предложенном Васей числе, совпадающих по значению и стоящих в правильной позиции в задуманном Петей числе. Коровы – количество цифр, совпадающих по значению, но находящихся в неверной позиции. 
  Например, если Петя задумал число 5671, а Вася предложил вариант 7251, то число быков равно 1 (только цифра 1 на своем месте), а число коров равно 2 (только цифры 7 и 5 не на своих местах). 
  Петя силен в математике, но даже он может ошибаться. Помогите Пете написать программу, которая бы по загаданному Петей и предложенному Васей числам сообщала количество быков и коров.
  
  Входные данные
  В единственной строке входного файла INPUT.TXT записано два четырехзначных натуральных числа A и B через пробел, где А – загаданное Петей число, а В – предложенный Васей вариант.
  
  Выходные данные
  В выходной файл OUTPUT.TXT нужно вывести два целых числа через пробел — количество быков и коров. 
*/



#include <stdio.h>

#define N 4

int main()
{
    char A[N], B[N];
    scanf("%s %s", &A, &B);
  
    int resBik = 0, resKorov = 0;

    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            if (i == j && A[i] == B[j])
                resBik++;
            else if (A[i] == B[j])
                resKorov++;
        
    printf("%d %d", resBik, resKorov);
    return 0;
}
