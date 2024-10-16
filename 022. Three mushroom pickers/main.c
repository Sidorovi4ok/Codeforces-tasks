/*
  Три грибника
  
  Три грибника Петя, Вася и Коля, возвращаясь из лесу домой, решили устроить привал, а заодно и перекусить. 
  Как это у нас принято, через некоторое время каждый начал хвастаться своими сегодняшними успехами, а потом делиться найденными грибами со своими товарищами. 
  Изначально у каждого из них было некоторое целое количество грибов. Сначала Петя дал Васе и Коле по столько грибов, сколько у них уже было. Коля быстро понял, 
  что так будет не по-братски, и дал Васе и Пете по столько грибов, сколько у них стало. Вася не мог отстать от сотоварищей и тоже дал каждому из друзей по столько грибов, 
  сколько у них к этому моменту имелось. И тут друзья с удивлением обнаружили, что у всех стало грибов поровну.
  
  Известно, что все вместе они собрали N грибов. Сколько грибов было у каждого из них перед привалом?
  
  Входные данные
  Входной файл INPUT.TXT содержит натуральное число N (N ≤ 30000).
  
  Выходные данные
  В выходной файл OUTPUT.TXT выведите три числа через пробел - первоначальное количество грибов у Пети, Васи и Коли соответственно. Предполагается, что ответ для данного N существует. 
*/

#include "stdio.h"

int main() 
{
    int N, Petya, Vasya, Kolya;
    scanf("%d", &N);

    Petya = N / 3;
    Vasya = N / 3;
    Kolya = N / 3;

    Petya /= 2;
    Kolya /= 2;
    Vasya += Kolya + Petya;

    Vasya /= 2;
    Petya /= 2;
    Kolya += Vasya + Petya;

    Vasya /= 2;
    Kolya /= 2;
    Petya = N - (Vasya + Kolya);

    printf("%d %d %d", Petya, Vasya, Kolya);

    return 0;
}
