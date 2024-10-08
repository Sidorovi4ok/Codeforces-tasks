/*
  Мышка
  (Время: 1 сек. Память: 16 Мб Сложность: 9%)
  
  Однажды компьютерная мышка подумала, что стоит взять про запас еще один коврик. Чтобы никто не заметил запасного коврика, мышка решила его спрятать под свой прямоугольный коврик. 
  Пробравшись ночью на склад, мышка обнаружила там только круглые коврики. Удастся ли мышке спрятать круглый коврик под прямоугольным ковриком?
  
  Входные данные
  Первая строка входного файла INPUT.TXT содержит три натуральных числа через пробел: W, H и R, 
  где W и H - ширина и высота прямоугольного коврика, а R – радиус запасного коврика. Все числа не превосходят значения 109.
  
  Выходные данные
  В выходной файл OUTPUT.TXT выведите «YES», если новый коврик можно спрятать под старым, и слово «NO», если этого сделать нельзя. 
*/

#include <stdio.h>

int main()
{
    int W, H, R;
    scanf("%d %d %d", &W, &H, &R);
    printf("%s", ( (R*2 > W) || (R*2 > H) ? "NO" : "YES"));
}
