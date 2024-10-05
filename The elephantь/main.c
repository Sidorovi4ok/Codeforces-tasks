#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    
    if ( (n >= 1) && (n <= 1000000) )
    {
        printf("%d", (n + 4) / 5);
    }
  
    return 0;
}
