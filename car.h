//car.h
#pragma once
#include <string>

class Car 
{
    public:
        //Virtual functions all cars will use
        virtual std::string Drive();
        virtual double FuelEfficiency();
        virtual std::string ChargeBattery();
        virtual std::string Refuel();

        //Pure virtual since will only be used by HybridCar
        virtual std::string SwitchMode() = 0;
};