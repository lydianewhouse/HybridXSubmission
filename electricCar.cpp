//electricCar.cpp
#include "electricCar.h"

std::string ElectricCar::Drive()
{
  return "Drive ElectricCar";  
}

double ElectricCar::FuelEfficiency()
{
    return 10;
}

std::string ElectricCar::ChargeBattery()
{
    return "ChargeBattery ElectricCar";
}

std::string ElectricCar::Refuel()
{
    return "Refuel ElectricCar";
}

//Unused default implementation
std::string ElectricCar::SwitchMode()
{
    return "";
}