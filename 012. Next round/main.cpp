#include <iostream>
#include <vector>


int main() 
{
    unsigned short int n;
    unsigned short int k;

    unsigned short int curBalls;
    unsigned short int countWinner = 0;

    std::cin >> n >> k;

    if ( !((k >= 1) && (k <= n) && (n <= 50)) )
        return 0;


    std::vector<unsigned short int> balls;

    for (int i = 0; i < n; i++) 
    {
        int temp; std::cin >> temp;

        if (i+1 == k)
            curBalls = temp;

        balls.push_back(temp);
    }

        
    for (int i = 0; i < n; i++)
    {
        if ( (balls[i] >= curBalls) && (balls[i] > 0) )
            countWinner++;
    }

    std::cout << countWinner;

    return 0;
}
