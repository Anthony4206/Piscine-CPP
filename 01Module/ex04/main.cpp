#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    std::ifstream   input_file(argv[1]);
    std::ofstream   output_file;
    std::string     line;

    std::cout << "lol" << std::endl;

    if (argc != 4) {
        std::cerr << "./replace <file> <s1> <s2>" << std::endl;
        return (-1);
    }
    if (!input_file.is_open()) {
        std::cerr << "failed" << std::endl;
        return (-1);
    }
    if (!output_file.is_open()) {
        std::cerr << "failed" << std::endl;
        input_file.close();
        return (-1);
    }
    while (getline(input_file, line)) {
        std::cout << line << std::endl;
        line.find(argv[2]);
    }
}
