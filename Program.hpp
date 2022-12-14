#ifndef Program_hpp
#define Program_hpp

#include <iostream>


class Program {

    private:

    bool program;
    std::string username;
    std::string uResponse;

    public:

    Program();

    virtual ~Program();

    //functions

    void startup();
    void mainMenu();
    void menu_Start();
    void menu_Options();
    void menu_Quit();

    //accessors

    inline const bool& getProgram() const { return this -> program; };
    inline const std::string& getUsername() const { return this -> username; };

};


#endif