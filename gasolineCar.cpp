//gasolineCar.cpp
#include "gasolineCar.h"

std::string GasolineCar::Drive()
{
  return "Drive GasolineCar";  
}

double GasolineCar::FuelEfficiency()
{
    return 10;
}

std::string GasolineCar::ChargeBattery()
{
    return "ChargeBattery GasolineCar";
}

std::string GasolineCar::Refuel()
{
    return "Refuel GasolineCar";
}

//Unused default implementation
std::string GasolineCar::SwitchMode()
{
    return "";
}