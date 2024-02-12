#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    /* std::cout << "----> The first argument: '" << argv[1] << "'" << std::endl; */
    std::string argument = argv[1];
    if(argument == "FirstArgument") {
        return 0;
    } else {
        return -1;
    }
}
