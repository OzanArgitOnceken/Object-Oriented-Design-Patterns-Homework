#pragma once
#include"Media.h"
#include<iostream>
class Video : public Media {
public:
	// Constructors, destructor,
	void play() override {
		std::cout << "Playing video..." << std::endl;
		// Add specific video play code here
	}

	void filter() override {
		std::cout << "Applying video filtering logic..." << std::endl;
		// Add specific video filtering code here
	}

	void exportMedia() override {
		std::cout << "Exporting video..." << std::endl;
		// Add specific video export code here
	}
private:
	// Private members
};