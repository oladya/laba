#ifndef WIRELESS_MOUSE_H 
#define WIRELESS_MOUSE_H 
#include "mouse.h"  

class wireless_mouse : public mouse
{ 

private: 
    int battery_capacity; 
    string connection_type;

public: 
    wireless_mouse() 
    { 
        battery_capacity = 0; 
        connection_type = string("Unknown");
    } 
    wireless_mouse(string& brand, float& price, int& dpi, int& number_of_extrabuttons, int& weight, int& battery_capacity, string& connection_type) : mouse(brand, price, dpi, number_of_extrabuttons, weight)
    { 
        this->battery_capacity = battery_capacity; 
        this->connection_type = connection_type; 
    }
    int get_battey_capacity() const
    { 
        return battery_capacity; 
    } 
    string get_connection_type() const
    { 
        return connection_type; 
    }
    void set_battery_capacity(int& battery_capacity) 
    { 
        this->battery_capacity = battery_capacity; 
    } 
    void set_connection_type(int& connection_type) 
    { 
        this->connection_type = connection_type; 
    }

    friend ostream& operator<<(ostream& os, const device& wm);
}; 

ostream& operator<<(ostream& os, const wireless_mouse& wm)
{
    os << "Brand: " << wm.get_brand() << ", Price: " << wm.get_price() << "p" << ", DPI: " << wm.get_dpi() << ", Number of Extra Buttons: " << wm.get_number_of_extrabuttons() << ", Weight: " << wm.get_weight() << "g" << ", Battery Capacity: " << wm.get_battey_capacity() << "mah" << ", Connection Type: " << wm.get_connection_type() << endl;
    return os;
}

#endif