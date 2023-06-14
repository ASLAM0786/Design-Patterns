/**
 ** This is singleton design pattern implementation
 **Intent:
 1-Ensure a class has only one instance, and provide a global point of access to it.
 2-Encapsulated "just-in-time initialization" or "initialization on first use".
 **Problem:
 1-Application needs one, and only one, instance of an object. Additionally, lazy initialization and global access are necessary.
 **Pros:
 1.You can be sure that a class has only a single instance.
 2.You gain a global access point to that instance.
 3.The singleton object is initialized only when it’s requested for the first time.
 **Cons:
 1.It can lead to tight coupling between classes.
 2.It can make it difficult to test code that uses Singletons.
3.It can lead to performance problems in multithreaded applications.
4.It can make it difficult to change the implementation of the Singleton class.

**This is a thread safe singleton class instantiation.
 */
#include <iostream>
#include <mutex>
using namespace std;
class Singleton
{
private:
    Singleton() {}
    ~Singleton() {}
    static mutex mutex;
    static Singleton *theInstance;

public:
    static Singleton *getInstance()
    {
        lock_guard<std::mutex> lock(mutex);
        if (theInstance == nullptr)
        {
            theInstance = new Singleton();
        }
        return theInstance;
    }

    void print()
    {
        cout << "Singleton class created with threadId/adders";
        cout << &(this->theInstance) << "\n";
    }
};

std::mutex Singleton::mutex;
Singleton *Singleton::theInstance = nullptr;

int main()
{
    cout << "Hello World!";
    Singleton *theInstance1 = Singleton::getInstance();
    Singleton *theInstance2 = Singleton::getInstance();
    theInstance1->print();
    theInstance2->print();
    return 0;
}