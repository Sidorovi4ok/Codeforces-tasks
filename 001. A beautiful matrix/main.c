/*
  A. Красивая матрица

  Перед Вами матрица размера 5 × 5, состоящая из 24-x нулей и единственной единицы. 
  Строки матрицы пронумеруем числами от 1 до 5 сверху вниз, столбцы матрицы пронумеруем числами от 1 до 5 слева направо. 
  
  За один ход разрешается применить к матрице одно из двух следующих преобразований:
    Поменять местами две соседние строки матрицы, то есть строки с номерами i и i + 1 для некоторого целого i (1 ≤ i < 5).
    Поменять местами два соседних столбца матрицы, то есть столбцы с номерами j и j + 1 для некоторого целого j (1 ≤ j < 5). 
  
  Вы считаете, что матрица будет выглядеть красиво, если единственная единица этой матрицы будет находиться в ее центре 
  (в клетке, которая находится на пересечении третьей строки и третьего столбца). 
  Посчитайте, какое минимальное количество ходов потребуется, чтобы сделать матрицу красивой.
  
  Входные данные
  Входные данные состоят из пяти строк, в каждой из которых записаны пять целых чисел: j-ое число в i-ой строке входных данных обозначает элемент матрицы, 
  стоящий на пересечении i-ой строки и j-ого столбца. Гарантируется, что матрица состоит из 24-x нулей и единственной единицы.
  
  Выходные данные
  Выведите единственное целое число — минимальное количество действий, которое требуется, чтобы сделать матрицу красивой.
*/

#include <stdio.h>

int main()
{
    int array[5][5], one_row, one_column, res = 0;
    
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int tmp; scanf("%d", &tmp);
            array[i][j] = tmp;
            
            if (tmp == 1) {
                one_row = i; one_column = j;
            }
                
        }
    }
    
    while (one_row != 2 || one_column != 2)
    {
        if (one_row < 2)
        {
            one_row++; 
            res++;
        }
        
        if (one_row > 2)
        {
            one_row--; 
            res++;
        }
            
        if (one_column < 2)
        {
            one_column++; 
            res++;
        }
        
        if (one_column > 2)
        {
            one_column--; 
            res++;
        }
    }
    
    printf("%d\n", res);
    return 0;
}
