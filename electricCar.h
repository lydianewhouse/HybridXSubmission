//electricCar.h
#pragma once
#include <string>
#include "car.h"

class ElectricCar : virtual public Car{
    public:
        //Remains virtual to allow hybridcar to make own implementation
        virtual std::string Drive() override;
        virtual double FuelEfficiency() override;
        virtual std::string ChargeBattery() override;
        virtual std::string Refuel() override;

        //Will not be used, only to be passed to hybridcar
        std::string SwitchMode() override;
};