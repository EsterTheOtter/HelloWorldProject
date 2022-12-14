#include <windows.h>
#include <string>

#include "Program.hpp"

Program::Program() {

    bool program= 1;
    this -> username;
    this -> uResponse;

}

Program::~Program() {

}

//functions

void Program::startup() {

    bool startup= 1;

    //title
    system("CLS");
    std::cout << "Hello World"
            << "\nThe Program\n";
    Sleep(2000);

    //user creation
    do {
        std::cout << "\n\nPlease enter your username...: ";
        std::cout << "\n\nUser: ";
        std::cin >> uResponse;
        username= uResponse;

        //user creation finalization
        std::cout << "Your user name is " << uResponse << " ... is this correct?\n\nY/N\n";
        std::cin >> uResponse;
        if (uResponse == "Y" || uResponse == "y") {
            startup = 0;
        } else if (uResponse == "N" || uResponse == "n") {
            system("CLS");
        } else {
            std::cout << "Error";
        }
    } while (startup != 0);

    this -> mainMenu();

}

void Program::mainMenu() {

    std::cout << username << ": ...says \"Hello World!\"";

}

//accessors