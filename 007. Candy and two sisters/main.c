#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    
    for(int i = 0; i < n; i++)
    {
        int t; 
        scanf("%d", &t);
        
        if(t % 2)
            t++;
            
        printf("%d\n", t / 2 - 1 );
    }
    return 0;
}
