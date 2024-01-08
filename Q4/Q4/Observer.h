#pragma once
//Observer interface
class Observer {
public:
	virtual void update(float temp, float pres, float dir, float speed) = 0;
	virtual ~Observer() {}
};