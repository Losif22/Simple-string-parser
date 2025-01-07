#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string Text{ "Name: Losif; Surname: Zaretskov;" };
    std::string Name, Surname;

    std::stringstream ss(Text);
    std::string temp;

    while (std::getline(ss, temp, ';')) {
        if (temp.find("Name: ") != std::string::npos) {
            Name = temp.substr(6);
        }
        if (temp.find("Surname: ") != std::string::npos) {
            Surname = temp.substr(10);
        }
    }

    std::cout << Name << "\n";
    std::cout << Surname << "\n";
    return 0;
}