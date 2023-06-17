#ifndef COMMAND_H
#define COMMAND_H

class Command
{

public:
    virtual ~Command(){};
    virtual void land() = 0;
};

#endif