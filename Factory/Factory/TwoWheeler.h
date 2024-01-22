#pragma once
#include"Vehicle.h"
class TwoWheeler :public Vehicle {
public:
	void printVehicle()override {
		cout << "I am 2 wheeler." << endl;
	}
};