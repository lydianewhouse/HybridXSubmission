//hybridCar.cpp
#include "hybridCar.h"


//Each function checks for the mode of the hybrid car,
//Then calls the correct corresponding function
//from the appropriate parent class
std::string HybridCar::Drive()
{
    if (this->inElectricMode)
    {
        return ElectricCar::Drive();
    }
    else
    {
        return GasolineCar::Drive();
    }
    
}

double HybridCar::FuelEfficiency()
{
    if (this->inElectricMode)
    {
        return ElectricCar::FuelEfficiency();
    }
    else
    {
        return GasolineCar::FuelEfficiency();
    }
    
}

std::string HybridCar::ChargeBattery()
{
    if (this->inElectricMode)
    {
        return ElectricCar::ChargeBattery();
    }
    else
    {
        return GasolineCar::ChargeBattery();
    }
    
}

std::string HybridCar::Refuel()
{
    if (this->inElectricMode)
    {
        return ElectricCar::Refuel();
    }
    else
    {
        return GasolineCar::Refuel();
    }
    
}


//Switches between the two modes of the hybrid car
std::string HybridCar::SwitchMode()
{
    this->inElectricMode = !this->inElectricMode;

    return "SwitchMode HybridCar";
}