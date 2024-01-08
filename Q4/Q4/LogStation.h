#pragma once
#include<iostream>
#include"Observer.h"
class LogStation : public Observer {
public:
	// Constructors, destructor, and existing methods

	void update(float temp, float pres, float dir, float speed) override {
		logTemperature(temp);
		logPressure(pres);
		logWind(dir, speed);
	}

	// Existing methods for logging temperature, pressure, and wind
	void logTemperature(float temp) {
		std::cout << "Temperature logged: " << temp << " C" << std::endl;
	}

	void logPressure(float pres) {
		std::cout << "Air Pressure logged: " << pres << " hPa" << std::endl;
	}

	void logWind(float dir, float speed) {
		std::cout << "Wind logged: Direction " << dir << " degrees, Speed " << speed << " m/s" << std::endl;
	}
	 

private: 
};