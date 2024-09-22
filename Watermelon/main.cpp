#include <iostream>

int main()
{
    unsigned short int weight;
    std::cin >> weight;

    if (!(weight >= 1) & !(weight <= 100))
        return 0;

    if ((weight % 2) == 1 || weight == 2) {
        std::cout << "NO";
    }else {
        
        std::cout << "YES";
    }
    return 0;
}
