#include <iostream>


int main() 
{
    int M, N;
    int res = 0;
    std::cin >> M >> N;

    if ( !(M >= 1) || !(N >= M) || !(N <= 16) )
        return 0;

    int doska = M * N;
    while (doska >= 2)
    {
        doska = doska - 2;
        res++;
    }

    std::cout << res;
    return 0;
}
