#ifndef EMAIL_NOTIFICATION_H
#define EMAIL_NOTIFICATION_H

#include "Notification.h"

class EmailNotification : public Notification
{
public:
    void NotifyUser() override;
};

#endif