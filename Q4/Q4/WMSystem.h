#pragma once
#include"Observable.h"
#include<vector>
class WMSystem : public Observable {
public:
	// Constructors, destructor, and existing methods

	void setTemperature(float temp) {
		temperature = temp;
		notifyObservers();
	}

	void setAirPressure(float pres) {
		airPressure = pres;
		notifyObservers();
	}

	void setWind(float dir, float speed) {
		windDirection = dir;
		windSpeed = speed;
		notifyObservers();
	}

	void registerObserver(Observer* observer) override {
		observers.push_back(observer);
	}

	void removeObserver(Observer* observer) override {
		auto it = std::find(observers.begin(), observers.end(), observer);

		if (it != observers.end()) {
			observers.erase(it);
		}
	}


	void notifyObservers() override {
		for (Observer* observer : observers) {
			observer->update(temperature, airPressure, windDirection, windSpeed);
		}
	}

private:
	// Private members
	float temperature;
	float airPressure;
	float windDirection;
	float windSpeed;
	std::vector<Observer*> observers;
};