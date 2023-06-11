
#include "NotificationFactoryMethod.h"
#include "SMSNotification.h"
#include "EmailNotification.h"
#include "PushNotification.h"

#include <iostream>
NotificationFactoryMethod::NotificationFactoryMethod()
{
    std::cout << "NotificationFactoryMethod constructor called!\n";
}

NotificationFactoryMethod::~NotificationFactoryMethod()
{
    std::cout << "NotificationFactoryMethod Destructor Called!\n";
    if (notification)
    {
        delete notification;
        notification = nullptr;
    }
}

Notification *NotificationFactoryMethod::createNotification(Constant::NotificationType channel)
{
    switch (channel)
    {
    case Constant::NotificationType::SMS:
        notification = new SMSNotification();
        break;
    case Constant::NotificationType::EMAIL:
        notification = new EmailNotification();
        break;
    case Constant::NotificationType::PUSH:
        notification = new PushNotification();
    default:
        // todo logic to handle default case;
        break;
    }
    return notification;
}