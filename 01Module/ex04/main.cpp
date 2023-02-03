#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {

    if (argc != 4) {
        std::cerr << "./replace <file> <s1> <s2>" << std::endl;
        return (-1);
    }

    std::ifstream   input_file(argv[1]);
    if (!input_file.is_open()) {
        std::cerr << "failed" << std::endl;
        return (-1);
    }

	std::string		outfile(argv[1]);
    std::ofstream	output_file(outfile + ".replace");
    if (!output_file.is_open()) {
        std::cerr << "failed" << std::endl;
        input_file.close();
        return (-1);
    }

	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
    std::string	line;
	std::size_t	found;
    while (getline(input_file, line)) {  
        while ((found = line.find(s1)) != std::string::npos) {
			output_file << line.substr(0, found) << s2;
            line = line.substr(found + s1.size(), line.size());
		}
	    output_file << line << std::endl;
    }
    input_file.close();
    output_file.close();
}
