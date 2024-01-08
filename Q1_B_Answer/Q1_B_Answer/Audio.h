#pragma once
#include"Media.h"
#include<iostream>
class Audio : public Media {
public:
	// Constructors, destructor,
	void play() override {
		std::cout << "Playing audio..." << std::endl;
		// Add specific audio play code here
	}

	void filter() override {
		std::cout << "Applying audio filtering logic..." << std::endl;
		// Add specific audio filtering code here
	}

	void exportMedia() override {
		std::cout << "Exporting audio..." << std::endl;
		// Add specific audio export code here
	}
private:
	// Private members
};