#pragma once
#include"FourWheeler.h"
#include"TwoWheeler.h"
class Factory {
public:
	Factory(int type) {
		if (type == 2)
			pVehicle = new TwoWheeler();
		else if (type == 4)
			pVehicle = new FourWheeler();
		else
			pVehicle = NULL;
	}
	Vehicle* createNewVehicle(int type) {
		if (type == 2)
			pVehicle = new TwoWheeler();
		else if (type == 4)
			pVehicle = new FourWheeler();
		else
			pVehicle = NULL;
		return pVehicle;
	}
	~Factory()
	{
		if (pVehicle) {
			delete pVehicle;
			pVehicle = NULL;
		}
	}
	Vehicle* getVehicle() { return pVehicle; }


private:
	Vehicle*pVehicle;
};