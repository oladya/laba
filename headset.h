#ifndef HEADSET_H 
#define HEADSET_H 
#include "device.h"  

class headset : public device
{ 
private: 
    int driver_size; 
    string noise_cancelling;  
    string mic;

public: 
    headset() 
    { 
        driver_size = 0; 
        noise_cancelling = string("Unknown");
        mic = string("Unknown");  
    }
    headset(string& brand, float& price, int& driver_size, string& noise_cancelling, string& mic) : device(brand, price)
    { 
        this->driver_size = driver_size; 
        this->noise_cancelling = noise_cancelling; 
        this->mic = mic;
    }
    int get_driver_size() const
    { 
        return driver_size; 
    } 
    string get_noise_cancelling() const
    { 
        return noise_cancelling; 
    }
    string get_mic() const
    { 
        return mic; 
    } 
    void set_driver_size(int& driver_size) 
    { 
        this->driver_size = driver_size; 
    } 
    void set_noise_cancelling(string& noise_cancelling) 
    { 
        this->noise_cancelling = noise_cancelling; 
    }
    void set_mic(string& mic) 
    { 
        this->mic = mic; 
    }  

    friend ostream& operator<<(ostream& os, const device& h);
}; 

ostream& operator<<(ostream& os, const headset& h)
{
    os << "Brand: " << h.get_brand() << ", Price: " << h.get_price() << "p" << ", Driver Size: " << h.get_driver_size() << "mm" << ", Noise Cancelling: " << h.get_noise_cancelling() << ", Microphone: " << h.get_mic() << endl;
    return os;
}

#endif