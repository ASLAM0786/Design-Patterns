#ifndef PUSH_NOTIFICATION_H
#define PUSH_NOTIFICATION_H

#include "Notification.h"

class PushNotification : public Notification
{
public:
    void NotifyUser() override;
};

#endif