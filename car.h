//car.h
#pragma once
#include <string>

class Car 
{
    public:
        //Virtual functions all cars will use
        //Also pure since car is an abstract class
        virtual std::string Drive() = 0;
        virtual double FuelEfficiency() = 0;
        virtual std::string ChargeBattery() = 0;
        virtual std::string Refuel() = 0;

        //Pure virtual since will only be used by HybridCar
        virtual std::string SwitchMode() = 0;
};