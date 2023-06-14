#ifndef SMS_NOTIFICATION_H
#define SMS_NOTIFICATION_H

#include "Notification.h"

class SMSNotification : public Notification
{
public:
    void NotifyUser() override;
};

#endif