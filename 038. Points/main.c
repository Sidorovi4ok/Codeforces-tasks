
/*
  Баллы
  (Время: 2 сек. Память: 64 Мб Сложность: 45%)
  
  Мир наш развивается, строятся города, люди улетают в космос, изменяется система аттестации студентов в СФУ. Но вот проблема - систему аттестации студентов изменили, 
  а программное обеспечение, которое поставлено в деканатах для контроля успеваемости, оставили прежним. Поэтому Вам срочно требуется внедрить во всех деканатах новую программу поиска студентов с заданным баллом!
  
  Входные данные
  В первой строке входного файла INPUT.TXT содержатся натуральные числа N и K (N, K ≤ 200 000) – соответственно количество студентов, подлежащих аттестации, и число запросов декана об успеваемости студентов.
  Во второй строке находятся N целых чисел ai, упорядоченных по возрастанию. Эти числа - аттестационные баллы студентов. В третьей строке располагаются K целых чисел bi, определяющие искомый балл. (0 ≤ ai, bi ≤ 232)
  
  Выходные данные
  В выходной файл OUTPUT.TXT выведите для каждого из K запросов через пробел слово «YES», если студент с таким баллом есть, и «NO» в противном случае. 
*/
 
 
#include <stdio.h>


/*
*   Функция для бинарного поиска элмента в массиве
*   Входные параметры: 
*       src      - исходный массив
*       size     - размер массива
*       target   - текущий элемент
*   Возвращает: 
*       1 - элемент существует
*       0 - элемент отсутствует
*/
int binary_search(const long long[], int, long long);



int binary_search(const long long arr[], int size, long long target) 
{
    if (size <= 0 || arr == NULL) 
        return 0;

    int start = 0, 
        end   = size - 1;

    while (start <= end) 
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            return 1;
        } 
        else if (arr[mid] < target) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }

    return 0;
}



int main() 
{
    freopen("INPUT.TXT", "r", stdin);
    freopen("OUTPUT.TXT", "w", stdout);


    int student_count, query_count;
    scanf("%d %d", &student_count, &query_count);


    long long scores[student_count];
    long long queries[query_count];


    for (int i = 0; i < student_count; ++i) 
        scanf("%lld", &scores[i]);
    
    for (int i = 0; i < query_count; ++i) 
        scanf("%lld", &queries[i]);
    

    for (int i = 0; i < query_count; ++i) 
    {
        if (binary_search(scores, student_count, queries[i])) 
            printf("YES");
        else 
            printf("NO");
            
        if (i < query_count - 1) 
            printf(" ");
    }
    printf("\n");

    return 0;
}
