#ifndef CONTEXT_H
#define CONTEXT_H
#include <string>
class Context
{
private:
    std::string input;
    int output;

public:
    Context(std::string input);
    ~Context();
    std::string getInput();
    int getOutput();
    void setInput(std::string input);
    void setOuput(int output);
};

#endif