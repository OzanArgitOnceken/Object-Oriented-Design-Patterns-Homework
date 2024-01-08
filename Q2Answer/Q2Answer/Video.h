#pragma once
#include"Media.h"
#include"Hardware.h"
class Video : public Media { 
	public:
		Video(Hardware& hw) : Media(hw) {} 
		void play() override {
			std::cout << "Video playing with ";
			show();
		};
};