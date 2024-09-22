#include <iostream> 
#include <cmath>

int main()
{
    long long n, m, a, sum = 1;
    std::cin >> n >> m >> a;

      

    if ( !(n >= 1 && n <= pow(10, 9)) && 
         !(m >= 1 && m <= pow(10, 9)) && 
         !(a >= 1 && a <= pow(10, 9)) )
        return 0;

    if (n > a)
        sum *= (n + a - 1) / a;
    if (m > a)
        sum *= (m + a - 1) / a;

    std::cout << sum;

    return 0;
}
