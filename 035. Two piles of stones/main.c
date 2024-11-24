/*
  Две кучки камней
  (Время: 1 сек. Память: 16 Мб Сложность: 43%)
  
  У Вас есть N камней с массами W1, W2 , … WN. Требуется разложить камни на 2 кучки так, чтобы разница масс этих кучек была минимальной.
  
  Входные данные
    В первой строке входного файла INPUT.TXT записано число N – количество камней (1 ≤ N ≤ 18). 
    Во второй строке через пробел перечислены массы камней W1, W2 , … WN (1 ≤ Wi ≤ 105).
  
  Выходные данные
    В единственную строку выходного файла OUTPUT.TXT нужно вывести одно 
    неотрицательное целое число – минимально возможную разницу между массами двух кучек
*/



#include <stdio.h>
#include <stdlib.h>

#define MAX_STONES 18


void findMinDifference(int current, int sumGroup1, int sumGroup2, int* minDiff, int weights[], int n)
{
    if (current == n)
    {  
        int diff = abs(sumGroup1 - sumGroup2);
        
        if (diff < *minDiff) 
            *minDiff = diff;
            
        return;
    }

    findMinDifference(current + 1, sumGroup1 + weights[current], sumGroup2, minDiff, weights, n);
    findMinDifference(current + 1, sumGroup1, sumGroup2 + weights[current], minDiff, weights, n);
}

int main() 
{
    int n;
    int weights[MAX_STONES];
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &weights[i]);
    
    int minDiff = 2000000;
    findMinDifference(0, 0, 0, &minDiff, weights, n);

    printf("%d\n", minDiff);
    return 0;
}
