#include <iostream>
#include <fstream>
#include <string>

int replaceString(char** argv, std::string str) {
    
    std::ofstream outputfile;
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    // size_t pos = 0;

    // Open the output file
    outputfile.open(argv[1] + std::string(".replace"));
    if (outputfile.fail()) {
        std::cerr << "Error creating output file: " << argv[1] << ".replace" << std::endl;
        return 1;
    }
    // Replace all occurrences of s1 with s2 without using default replace function
    size_t pos = 0;
    while ((pos = str.find(s1, pos)) != std::string::npos) {
        str.erase(pos, s1.length());
        str.insert(pos, s2);
        pos += s2.length(); // Move past the new string
    }
    // Write the modified string to the output file
    outputfile << str;
    outputfile.close();
    return 0;
}

int main(int argc, char* argv[]) {
    // Check if the correct number of arguments is provided
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    char c;
    std::string str;
    std::ifstream filename(argv[1]);
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Check if the file was opened successfully
    if (filename.fail()) {
        std::cerr << "Error opening file: " << argv[1] << std::endl;
        return 1;
    }
    while (filename >> std::noskipws >> c)
    str += c;

    filename.close();

    return (replaceString(argv, str));
}
