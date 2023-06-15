#ifndef VEG_RESTAURANT_H
#define VEG_RESTAURANT_H

#include "Hotel.h"
class VegRestaurant : public Hotel
{
public:
    VegRestaurant();
    ~VegRestaurant();
    Constant::Menu getMenus() override;
};

#endif