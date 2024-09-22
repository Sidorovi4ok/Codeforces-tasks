#include <iostream>
#include <string>

int main()
{
    short int x = 0;
    std::string plus;

    short int count;  
    std::cin >> count;

    if ( !(count >= 1) && !(count <= 150) )
        return 0;

    for (short int i = 1; i <= count; i++) {
        std::cin >> plus;

        if ((plus.compare("++X") == 0) || (plus.compare("X++") == 0)) {
            x++;
        }

        if ((plus.compare("--X") == 0) || (plus.compare("X--") == 0)) {
            x--;
        }
    }

    std::cout << x;
    
    return 0;
}
