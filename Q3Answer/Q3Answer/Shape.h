#pragma once
// Abstract base class for shapes
#include <iostream>
#include <string>
class Shape {

	public:
		virtual void draw() const = 0;
		virtual std::string serialize() const = 0;
		virtual ~Shape() {}
};