#pragma once
#include<iostream>
#include"Media.h"
class Audio : public Media {
public:
	void play() override {
		std::cout << "Playing Audio" << std::endl;
	}

	void accept(MediaVisitor& visitor) override {
		std::cout << "This is audio and ";
		visitor.visit(*this);
	}
};