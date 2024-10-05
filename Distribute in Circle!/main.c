/*
  Distribute in Circle!
  
  A items are to be delivered in a circle of size B.
  Find the position where the Ath item will be delivered if we start from a given position C.
  
  NOTE: Items are distributed at adjacent positions starting from C.
  
  Problem Constraints
  1 <= A, B, C <= 108
  
  Input Format
    First argument is an integer A.
    Second argument is an integer B.
    Third argument is an integer C.
  
  Output Format
    Return an integer denoting the position where the Ath item will be delivered if we start from a given position C.
*/



#include <stdio.h>


int solve(int A, int B, int C) {
    int temp = B - C + 1;
    
    if( A <= temp)
    {
        return C - 1 + A;
    }
    
    A = A - temp;
    return A % B;
}

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d", solve(A, B, C));
}
