#pragma once
#include"Media.h"
#include"Hardware.h"
class Audio : public Media { 
public:
	Audio(Hardware& hw) : Media(hw) {}
	void play() override {
		std::cout << "Video playing with ";
		show();
	};
};