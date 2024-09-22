#include <iostream>

int main()
{
    short int a;   
    short int b;
    
    std::cin >> a >> b;
    
    if (!(a >= 1) && !(b <= 3) && !(a != b))
        return 0;
        
    if ((a == 1 && b == 2) || (a == 2 && b == 1)) {
        std::cout << 3;
    } else if ((a == 2 && b == 3) || (a == 3 && b == 2)) {
        std::cout << 1;
    }
    else {
        std::cout << 2;
    }
    
    return 0;
}
