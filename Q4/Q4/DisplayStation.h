#pragma once
#include"Observer.h"
#include<iostream>
class DisplayStation : public Observer {
public:
	// Constructors, destructor, and existing methods

	void update(float temp, float pres, float dir, float speed) override {
		displayTemperature(temp);
		displayPressure(pres);
		displayWind(dir, speed);
	}
	void displayTemperature(float temp) {
		std::cout << "Temperature: " << temp << " C" << std::endl;
	}

	void displayPressure(float pres) {
		std::cout << "Air Pressure: " << pres << " hPa" << std::endl;
	}

	void displayWind(float dir, float speed) {
		std::cout << "Wind: Direction " << dir << " degrees, Speed " << speed << " m/s" << std::endl;
	}

private:
	// Private members
};