#include <iostream>
#include <string>

int main(void) {
    
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "brain address: " << &brain << std::endl;
    std::cout << "address stored in stringPTR: " << stringPTR << std::endl;
    std::cout << "address stored in stringREF: " << &stringREF << std::endl;

    std::cout << "brain value: " << brain << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return (0);
}