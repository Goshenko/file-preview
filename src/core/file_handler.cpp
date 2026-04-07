#include <iostream>
#include <string>
#include <unordered_set>
#include <filesystem>

namespace ft = std::filesystem;

bool is_supported(const std::string& filename) {
    static const std::unordered_set<std::string> valid_extensions = {".txt", ".mp4", ".mp3", ".jpeg", ".png", ".pdf"};
    
    std::string file_type = ft::path(filename).extension();
    
    // O(n) Build Time, O(1) Lookup
    if (valid_extensions.find(file_type) != valid_extensions.end()) {
        std::cout << "[VALID FILE TYPE]" << std::endl;
        return true;
    } else {
        std::cout << "[ERROR]: INVALID FILE TYPE" << std::endl;
        return false;
    }
}

bool is_valid_input(const int &argc, char** const &argv) {
    if ((std::string(argv[1]) == "preview" && is_supported(argv[2]))) {
        std::cout << "[VALID INPUT] \n[EXECUTING PROGRAM]" << std::endl;    
        return true;
    } else {
        std::cout << "Silent Fail" << std::endl;
        return false;
    }
}

int main(int argc, char *argv[]) {
    std::cout << "[STATUS] Supported File: " << is_supported(argv[2]) << std::endl;
    std::cout << "[STATUS] Supported Input: " << is_valid_input(argc, argv) << std::endl;
    //is_valid_input(argc, argv);
    return 0;
}