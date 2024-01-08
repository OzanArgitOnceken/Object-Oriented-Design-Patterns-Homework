#pragma once
#include"Hardware.h"
class Speaker :public Hardware {
	public:
		void output()override {
			std::cout << "Speaker" << std::endl;
		}
};