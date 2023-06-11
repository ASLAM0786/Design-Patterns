/**
 **Intent
Define an interface for creating an object, but let subclasses decide which class to instantiate.
    Factory Method lets a class defer instantiation to subclasses.
 **Problem
A framework needs to standardize the architectural model for a range of applications, but allow
for individual applications to define their own domain objects and provide for their instantiation.
 **Pros:
1-You avoid tight coupling between the creator and the concrete products.
2-Single Responsibility Principle. You can move the product creation code into one place in the
  program, making the code easier to support.
3-Open/Closed Principle. You can introduce new types of products into the program without
 breaking existing client code.
 **Cons:
The code may become more complicated since you need to introduce a lot of new subclasses to
 implement the pattern. The best case scenario is when you’re introducing the pattern into an
  existing hierarchy of creator classes.
  **Applicability:
1-Use the Factory Method when you don’t know beforehand the exact types and dependencies of the
    objects your code should work with.
2-Use the Factory Method when you want to provide users of your library or framework with a way
    to extend its internal components.
3-Use the Factory Method when you want to save system resources by reusing existing objects
    instead of rebuilding them each time.
 */
#include <iostream>
#include "NotificationFactoryMethod.h"
#include "Constant.h"

class NotificationService
{
private:
    std::string channel;

public:
    NotificationService(std::string channel);
    ~NotificationService();
    void LaunchService(Constant::NotificationType NotificationType);
};

NotificationService::NotificationService(std::string channel)
{
    std::cout << "NotificationService Constructor called!\n";
    this->channel = channel;
}

NotificationService::~NotificationService()
{
    std::cout << "NotificationService Destructor Called!\n";
}

void NotificationService::LaunchService(Constant::NotificationType NotificationType)
{

    NotificationFactoryMethod *notificationFactoryMethod = new NotificationFactoryMethod();
    Notification *notification = notificationFactoryMethod->createNotification(NotificationType);
    notification->NotifyUser();
    delete notification;
}
int main()
{

    NotificationService notificationService = NotificationService("SMS");
    notificationService.LaunchService(Constant::NotificationType::EMAIL);
    return 0;
}