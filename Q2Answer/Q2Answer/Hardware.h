#pragma once
#include<iostream>
class Hardware {
public:
	virtual ~Hardware() = default;
	virtual void output() = 0;
};
