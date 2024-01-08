#pragma once
#include<iostream>
#include"MediaVisitor.h"
class MediaFilterVisitor : public MediaVisitor {
public:
	void visit(Audio& audio) override {
		std::cout << "Applying filter to Audio" << std::endl;
	}

	void visit(Video& video) override {
		std::cout << "Applying filter to Video" << std::endl;
	}
};