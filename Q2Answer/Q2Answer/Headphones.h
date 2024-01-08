#pragma once
#include"Hardware.h"
class Headphones :public Hardware {
	public:
		void output()override {
			std::cout << "Headphones" << std::endl;
		}
};