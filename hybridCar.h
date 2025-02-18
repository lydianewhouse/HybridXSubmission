//hybridCar.h
#pragma once
#include <string>
#include "gasolineCar.h"
#include "electricCar.h"

class HybridCar : public ElectricCar, public GasolineCar
{
    private:
        //Mode to specify which parent function to use
        //Defuault will use electricCar derivation
        bool inElectricMode = true;
    public:
        //No need for virtual since final derived class
        std::string Drive() override;
        double FuelEfficiency() override;
        std::string ChargeBattery() override;
        std::string Refuel() override;
        std::string SwitchMode() override;
};