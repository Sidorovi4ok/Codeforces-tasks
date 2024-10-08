/*
  Счастливый билет
  (Время: 1 сек. Память: 16 Мб Сложность: 12%)
  
  Вы пользуетесь общественным транспортом? Вероятно, вы расплачивались за проезд и получали билет с номером. 
  Счастливым билетом называют такой билет с шестизначным номером, где сумма первых трех цифр равна сумме последних трех. 
  Т.е. билет с номером 385916 – счастливый, т.к. 3+8+5=9+1+6. Вам требуется написать программу, которая проверяет счастливость билета.
  
  Входные данные
  В единственной строке входного файла INPUT.TXT записано шесть десятичных цифр без пробелов.
  
  Выходные данные
  В выходной файл OUTPUT.TXT нужно вывести «YES», если билет с номером N счастливый и «NO» в противном случае. 
*/


int main()
{
    int N = 385916;
    scanf("%d", &N);
    
    int firstPart = N / 1000, sumFirst;
    int secondPart = N % 1000, sumSecond;
    
    sumFirst = (firstPart / 100) + (firstPart % 10);
    sumFirst += (firstPart - (firstPart / 100) * 100) / 10;
    
    sumSecond = (secondPart / 100) + (secondPart % 10);
    sumSecond += (secondPart - (secondPart / 100) * 100) / 10;
    
    printf("%s\n", (sumFirst ==  sumSecond ? "YES" : "NO"));
}
