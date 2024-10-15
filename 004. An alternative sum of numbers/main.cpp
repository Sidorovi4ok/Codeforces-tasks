#include <iostream>
#include <vector>

int main()
{
    short int t;
    
    std::cin >> t;
    
    if (!(t >= 1) && !(t <= 1000))
        return 0;
    
    for (short int i = 0; i < t; i++) {
        std::vector<int> enterData;
        short int n;
        
        std::cin >> n;
        
        if (!(n >= 1) && !(n <= 50))
            return 0;
 
        for (short int j = 0; j < n; j++) {
            int tmp;
            std::cin >> tmp;
            
            if (!(tmp >= 1) && !(tmp <= 100))
                return 0;
            
            enterData.push_back(tmp);
        }
        
        int res = 0;
        for (short int j = 0; j < enterData.size(); j++) {
            
            if ((j % 2 == 0)) {
                res += enterData.at(j);
            }
            else {
                res -= enterData.at(j);
            }
        }
        std::cout << res << std::endl;
    }
    
    return 0;
}
