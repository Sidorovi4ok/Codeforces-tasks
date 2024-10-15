#include <stdio.h>

int main()
{
    int hh, mm, t;
    scanf("%d", &t);
    
    for(int i = 0; i < t; i++)
    {
        scanf("%d %d", &hh, &mm);
        printf("%d \n", (23 - hh) * 60 + 60 - mm );
    }
    return 0;
}
