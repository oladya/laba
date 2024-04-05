#ifndef KEYBOARD_H 
#define KEYBOARD_H 
#include "device.h"  

class keyboard : public device
{ 
private: 
    int format; 
    string keycap_material;  
    string keycap_profile;

public: 
    keyboard() 
    { 
        format = 0; 
        keycap_material = string("Unknown");
        keycap_profile = string("Unknown");  
    }
    keyboard(string& brand, float& price, int& format, string& keycap_material, string& keycap_profile) : device(brand, price)
    { 
        this->format = format; 
        this->keycap_material = keycap_material; 
        this->keycap_profile = keycap_profile;
    }
    int get_format() const
    { 
        return format; 
    } 
    string get_keycap_material() const
    { 
        return keycap_material; 
    }
    string get_keycap_profile() const
    { 
        return keycap_profile; 
    } 
    void set_format(int& format) 
    { 
        this->format = format; 
    } 
    void set_keycap_material(string& keycap_material) 
    { 
        this->keycap_material = keycap_material; 
    }
    void set_keycap_profile(string& keycap_profile) 
    { 
        this->keycap_profile = keycap_profile; 
    }  

    friend ostream& operator<<(ostream& os, const device& k);
}; 

ostream& operator<<(ostream& os, const keyboard& k)
{
    os << "Brand: " << k.get_brand()  << ", Price: " << k.get_price() << "p" << ", Format: " << k.get_format() << "%" << ", Keycap Material: " << k.get_keycap_material() << ", Keycap Profile: " << k.get_keycap_profile() << endl;
    return os;
}

#endif