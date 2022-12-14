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

    //accessors

    inline const bool& getProgram() const { return this -> program; };

};


#endif