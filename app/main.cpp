/**
 * @file main.cpp
 * @author Sameer Pusegaonkar (sameer@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if ( terminator ) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
