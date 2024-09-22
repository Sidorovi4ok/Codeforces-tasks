#include <iostream> 
#include <vector>  

int main()
{
    short int n, res = 0;
    std::cin >> n;  

    if (!(n >= 1) && !(n <= 1000))
        return 0;

    std::vector < std::vector <short int> > a(n, std::vector <short int>(3));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
        {
            short int tmp;
            std::cin >> tmp;

            if ((tmp == 1) || (tmp == 0))
            {
                a[i][j] = tmp;
            }
            else {
                return 0;
            }
        }

        short int tmp = 0;
        for (int j = 0; j < 3; j++)
        {
            tmp = tmp + a[i][j];

            if (tmp >= 2 && j == 2)
                res++;
        }
    }

    std::cout << res << std::endl;

    return 0;
}
