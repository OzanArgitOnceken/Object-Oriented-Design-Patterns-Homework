#pragma once
#include<iostream>
#include"MediaVisitor.h"
class MediaExportVisitor : public MediaVisitor {
public:
	void visit(Audio& audio) override {
		std::cout << "Exporting Audio" << std::endl;
	}

	void visit(Video& video) override {
		std::cout << "Exporting Video" << std::endl;
	}
};
