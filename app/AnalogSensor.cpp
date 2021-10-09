/**
 * @file AnalogSensor.cpp
 * @author Sameer Pusegaonkar (sameer@umd.edu)
 * @brief AnalogSensor to get the average reading
 * @version 0.1
 * @date 2021-10-09
 * @copyright Copyright (c) 2021
 * 
 */
#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>

AnalogSensor::AnalogSensor(unsigned int samples): mSamples(samples) {}

AnalogSensor::~AnalogSensor() {}

int AnalogSensor::Read() {
    std::vector<int> readings(mSamples, 10);
    double result = std::accumulate(readings.begin(), readings.end(), 0.0)
     / readings.size();
    return result;
}


