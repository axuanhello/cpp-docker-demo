// main.cpp
#include <iostream>
#include <string>

int main() {
    std::string message = "Hello from C++ Docker Container!";
    std::cout << message << std::endl;
    
    std::cout << "\nContainer Environment Info:" << std::endl;
    std::cout << "=========================" << std::endl;
    
    if(const char* env_p = std::getenv("HOSTNAME"))
        std::cout << "Hostname: " << env_p << std::endl;
    
    return 0;
}
