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
        this->noise_cancelling = noise_cancelling;
    }
    int get_driver_size() 
    { 
        return driver_size; 
    } 
    string get_noise_cancelling() 
    { 
        return noise_cancelling; 
    }
    string get_mic() 
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
}; 

#endif