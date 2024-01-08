#pragma once
#include"SerializeStrategy.h"
#include"Circle.h"
class SerializeCircleStrategy : public SerializeStrategy {
public:
	std::string serialize(const Shape& shape) const override {
		return dynamic_cast<const Circle&>(shape).serialize();
	}
};