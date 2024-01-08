#pragma once
#include<iostream>
#include"Media.h"
class Video : public Media {
public:
	void play() override {
		std::cout << "Playing Video" << std::endl;
	}

	void accept(MediaVisitor& visitor) override {
		std::cout << "This is video and ";
		visitor.visit(*this);
	}
};