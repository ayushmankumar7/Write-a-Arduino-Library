#ifndef first_h 
#define first_h 

#include <Arduino.h> 

#define ON true 
#define OFF false 

class First{
    public:
        First(int pin);
        void blink(bool value);

    private:
        uint8_t pinNumber;
};

#endif 
