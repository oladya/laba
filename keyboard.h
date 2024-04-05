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
    int get_format() 
    { 
        return format; 
    } 
    string get_keycap_material() 
    { 
        return keycap_material; 
    }
    string get_keycap_profile() 
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
}; 

#endif