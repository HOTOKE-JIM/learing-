#include <iostream>
using namespace std;

int main (){

    int nums= 10;
    cout << "ENter number" << endl;
    cout << "Hello, World!!" << endl; 
    cout << "My Name is Mohammed " << endl;
    cout << "My Name is Mohammed " << endl;
    cout << "My Name is Mohammed " << endl;
    cout << "My Name is Mohammed " << endl;
    cout << "that's me \n";
    return 0;
}
/*#include <iostream>
#include <cstdlib>
#include <ctime>

std::string generatePassword(int length) {
    const std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const std::string lower = "abcdefghijklmnopqrstuvwxyz";
    const std::string digits = "0123456789";
    const std::string symbols = "!@#$%^&*()-_=+[{]}|;:',<.>/?";

    const std::string all = upper + lower + digits + symbols;
    std::string password;

    std::srand(std::time(0));

    for (int i = 0; i < length; ++i) {
        password += all[std::rand() % all.length()];
    }

    return password;
}

int main() {
    int length;

    std::cout << "Enter desired password length: ";
    std::cin >> length;

    if (length < 6) {
        std::cout << "Password length should be at least 6 characters." << std::endl;
        return 1;
    }

    std::string password = generatePassword(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}*/