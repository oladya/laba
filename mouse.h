#ifndef MOUSE_H 
#define MOUSE_H 
#include "device.h"  

class mouse : public device
{ 
private: 
    int dpi; 
    int number_of_extrabuttons;  
    int weight;

public: 
    mouse() 
    { 
        dpi = 0; 
        number_of_extrabuttons = 0;
        weight = 0;  
    } 
    mouse(string& brand, float& price, int& dpi, int& number_of_extrabuttons, int& weight) : device(brand, price)
    { 
        this->dpi = dpi; 
        this->number_of_extrabuttons = number_of_extrabuttons;
        this->weight = weight; 
    }
    int get_dpi() const
    { 
        return dpi; 
    } 
    int get_number_of_extrabuttons() const
    { 
        return number_of_extrabuttons; 
    }
    int get_weight() const
    { 
        return weight; 
    } 
    void set_dpi(int& dpi) 
    { 
        this->dpi = dpi; 
    } 
    void set_number_of_extrabuttons(int& number_of_extrabuttons) 
    { 
        this->number_of_extrabuttons = number_of_extrabuttons; 
    }
    void set_weight(int& weight) 
    { 
        this->weight = weight; 
    }  

    friend ostream& operator<<(ostream& os, const device& m);
}; 

ostream& operator<<(ostream& os, const mouse& m)
{
    os << "Brand: " << m.get_brand()  << ", Price: " << m.get_price() << "p" << ", DPI: " << m.get_dpi() << ", Extra Buttons: " << m.get_number_of_extrabuttons() << ", Weight: " << m.get_weight() << "g" << endl;
    return os;
}

#endif