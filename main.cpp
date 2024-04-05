#include <iostream>
#include "device.h"
#include "mouse.h"
#include "keyboard.h"
#include "headset.h"
#include "wireless_mouse.h"
#include "mechanical_keyboard.h"

int main()
{ 
    printf("Characteristics of macbook m1:\n");
    string brand1 = "apple";
    float price1 = 99999.99;
    device macbook_m1(brand1, price1);
    cout << macbook_m1;
    printf("\n");

    printf("Characteristics of logitech g102:\n");
    string brand2 = "logitech";
    float price2 = 2999.99;
    int dpi1 = 8000;
    int number_of_extrabuttos1 = 2;
    int weight1 = 90;
    mouse logitech_g102(brand2, price2, dpi1, number_of_extrabuttos1, weight1);
    cout << logitech_g102;
    printf("\n");

    printf("Characteristics of Razer Ornata v3:\n");
    string brand3 = "Razer";
    float price3 = 4999.99;
    int format1 = 100;
    string keycap_material1 = "abs";
    string keycap_profile1 = "cherry low";
    keyboard razer_ornata_v3(brand3, price3, format1, keycap_material1, keycap_profile1);
    cout << razer_ornata_v3;
    printf("\n");

    printf("Characteristics of HyperX Cloud 2:\n");
    string brand4 = "hyperx";
    float price4 = 7999.99;
    int driver_size = 15;
    string noise_cancelling = "passive";
    string mic = "yes";
    headset cloud2(brand4, price4, driver_size, noise_cancelling, mic);
    cout << cloud2;
    printf("\n");
    
    printf("Characteristics of Logitech G PRO:\n");
    string brand5 = "logitech";
    float price5 = 9999.99;
    int dpi2 = 16000;
    int number_of_extrabuttons2 = 2;
    int weight2 = 60;
    int battery_capacity = 1000;
    string connection_type = "radio";
    wireless_mouse logitech_g_pro(brand5, price5, dpi2, number_of_extrabuttons2, weight2, battery_capacity, connection_type);
    cout << logitech_g_pro;
    printf("\n");
    
    printf("Characteristics of Varmilo Panda:\n");
    string brand6 = "varmilo";
    float price6 = 19999.99;
    int format2 = 60;
    string keycap_material2 = "pbt";
    string keycap_profile2 = "cherry";
    string switch_type = "tactile";
    string build = "series";
    mechanical_keyboard panda(brand6, price6, format2, keycap_material2, keycap_profile2, switch_type, build);
    cout << panda;
    printf("\n");

    return 0;
}