#ifndef DEVICE_H 
#define DEVICE_H 
#include <iostream>
using namespace std; 

class device 
{ 
private: 
    string brand; 
    float price;  

public: 
    device() 
    { 
        brand = string("Unknown"); 
        price = 0.00;  
    } 
    device(string& brand, float& price) 
    { 
        this->brand = brand; 
        this->price = price; 
    }
    string get_brand() const
    { 
        return brand; 
    } 
    float get_price() const
    { 
        return price; 
    } 
    void set_brand(string& brand) 
    { 
        this->brand = brand; 
    } 
    void set_price(float& price) 
    { 
        this->price = price; 
    }

    friend ostream& operator<<(ostream& os, const device& d);
}; 

ostream& operator<<(ostream& os, const device& d)
{
    os << "Brand: " << d.get_brand() << ", Price: " << to_string(d.get_price()) << "p" << endl;
    return os;
}

#endif
