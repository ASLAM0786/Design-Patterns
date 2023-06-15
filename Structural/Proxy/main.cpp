
/**
**Intent:
The intent of this pattern is to provide a �Placeholder� for an object to control references to it.
**Problem:

**Solution:

**Statements:

**Applicability:
1-Lazy initialization (virtual proxy). This is when you have a heavyweight service object that wastes system resources by being always up, even though you only need it from time to time.
2- Access control (protection proxy). This is when you want only specific clients to be able to use the service object; for instance, when your objects are crucial parts of an operating system and clients are various launched applications (including malicious ones).
3-Local execution of a remote service (remote proxy). This is when the service object is located on a remote server.
4-Logging requests (logging proxy). This is when you want to keep a history of requests to the service object.
5- Caching request results (caching proxy). This is when you need to cache results of client requests and manage the life cycle of this cache, especially if results are quite large.
6-Smart reference. This is when you need to be able to dismiss a heavyweight object once there are no clients that use it.

**Pros:
1-You can control the service object without clients knowing about it.
2-You can manage the lifecycle of the service object when clients don’t care about it.
3-The proxy works even if the service object isn’t ready or is not available.
4-Open/Closed Principle. You can introduce new proxies without changing the service or clients.
**Cons:
1-The code may become more complicated since you need to introduce a lot of new classes.
2-The response from the service might get delayed.
*/
#include <iostream>
// #include "Internet.h"
#include "ProxyInternet.h"
int main()
{

    std::cout << "<!------Proxy Design pattern---------!>\n";
    Internet *internet = new ProxyInternet();
    try
    {
        internet->connectTo("geeksforgeeks.com");
        internet->connectTo("abc.com");
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (...)
    {
        std::cout << "Default Catch Block!\n";
    }

    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";

    return 0;
}
