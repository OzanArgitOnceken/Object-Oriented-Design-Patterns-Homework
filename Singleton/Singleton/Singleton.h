#pragma once
#include<iostream>
class Singleton{
public:
	static Singleton&getInstance() {
		if (!instance) {
			instance = new Singleton();
		}
		return *instance;
	}
	void someOperation() {
		std::cout << "Some operation done..." << std::endl;
	}
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
private:
	Singleton() {
		std::cout << "Singleton created." << std::endl;
	}	
	~Singleton() {
		std::cout << "Singleton deleted." << std::endl;
	}
	static Singleton* instance;
};
Singleton* Singleton::instance = nullptr;