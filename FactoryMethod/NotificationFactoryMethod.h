#ifndef NOTIFICATION_FACTORY_H
#define NOTIFICATION_FACTORY_H

#include "Notification.h"
#include "Constant.h"
class NotificationFactoryMethod
{
private:
    Notification *notification;

public:
    NotificationFactoryMethod();
    ~NotificationFactoryMethod();
    Notification *createNotification(Constant::NotificationType channel); //*notification creation function.
};

#endif