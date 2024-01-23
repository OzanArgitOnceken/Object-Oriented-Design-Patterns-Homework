#pragma once
#include"Subject.h"
class RealSubject : public Subject {
public:
	void Request() const override {
		std::cout << "RealSubject: Handling request.\n";
	}
};