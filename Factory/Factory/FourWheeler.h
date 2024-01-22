#pragma once
#include"Vehicle.h"
class FourWheeler :public Vehicle {
public:
	void printVehicle()override {
		cout << "I am 4 wheeler" << endl;
	}
};