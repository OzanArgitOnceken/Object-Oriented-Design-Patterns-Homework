#pragma once
#include<iostream>
#include"Shape.h"
class SerializeStrategy {
public:
	virtual std::string serialize(const Shape& shape) const = 0;
	virtual ~SerializeStrategy() {}
};
