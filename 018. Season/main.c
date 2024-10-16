/*
  Время года
  (Время: 1 сек. Память: 16 Мб Сложность: 10%)
  
  По заданному номеру месяца в году требуется определить время года.
  
  Входные данные
  Входной файл INPUT.TXT содержит натуральное число N (N≤100) – номер месяца.
  
  Выходные данные
  В выходной файл OUTPUT.TXT выведите для летних месяцев значение «Summer», для зимних – «Winter», для весенних – «Spring», для осенних – «Autumn». 
  Если число не соответствует возможному значению месяца, то в этом случае следует вывести «Error». 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);

    switch(N)
    {
        case  1:
        case  2:
        case 12:
            printf("Winter");
            break;
            
        case 3:
        case 4:
        case 5:
            printf("Spring");
            break;
            
        case 6:
        case 7:
        case 8:
            printf("Summer");
            break;
            
        case  9:
        case 10:
        case 11:
            printf("Autumn");
            break;
            
        default:
            printf("Error");
    }
    return 0;
}
