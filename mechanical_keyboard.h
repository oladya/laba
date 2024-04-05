#ifndef MECHANICAL_KEYBOARD_H 
#define MECHANICAL_KEYBOARD_H 
#include "keyboard.h"  

class mechanical_keyboard : public keyboard
{ 

private: 
    string switch_type; 
    string build;  

public: 
    mechanical_keyboard() 
    { 
        switch_type = string("Unknown");
        build = string("Unknown");  
    }
    mechanical_keyboard(string& brand, float& price, int& format, string& keycap_material, string& keycap_profile, string& switch_type, string& build) : keyboard(brand, price, format, keycap_material, keycap_profile)
    { 
        this->switch_type = switch_type; 
        this->build = build; 
    }
    string get_switch_type() 
    { 
        return switch_type; 
    } 
    string get_build() 
    { 
        return build; 
    }
    void set_switch_type(int& switch_type) 
    { 
        this->switch_type = switch_type; 
    } 
    void set_build(string& build) 
    { 
        this->build = build; 
    }
}; 

#endif