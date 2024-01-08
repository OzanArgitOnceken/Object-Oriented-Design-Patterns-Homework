#pragma once
#include"Observer.h"
class Observable {
public:
	virtual void registerObserver(Observer* observer) = 0;
	virtual void removeObserver(Observer* observer) = 0;
	virtual void notifyObservers() = 0;
	virtual ~Observable() {}
};