#include <iostream>
#include <string>
#include <vector>


int main()
{
    int countString;
    std::vector<std::string> enterString;
    std::vector<std::string> resString;
    
    std::cin >> countString;
    
    if (!(countString >= 1) && !(countString <= 100))
        return 0;
    
    for (int i = 0; i < countString; i++) {
        std::string tmp; 
        std::cin >> tmp;
        
        if (!(tmp.size() >= 1) && !(tmp.size() <= 100)) 
            return 0;
        
        enterString.push_back(tmp);
    }
    
    for (int i = 0; i < enterString.size(); i++) {
        if (enterString.at(i).size() > 10) {
            std::cout << enterString.at(i)[0] << enterString.at(i).size() - 2 <enterString.at(i).back() << std::endl; 
        }
        else {
            std::cout << enterString.at(i) << std::endl;
        }
    }
    
    return 0;
}
