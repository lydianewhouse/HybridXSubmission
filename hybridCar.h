//hybridCar.h
#pragma once
#include <string>
#include "gasolineCar.h"
#include "electricCar.h"

class HybridCar : public ElectricCar, public GasolineCar
{
    public:
        //No need for virtual since final derived class
        std::string Drive() override;
        double FuelEfficiency() override;
        std::string ChargeBattery() override;
        std::string Refuel() override;
        std::string SwitchMode() override;
};