#include"Singleton.h"
#include<iostream>
int main() {
	Singleton& singleton1 = Singleton::getInstance();
	singleton1.someOperation();
	Singleton& singleton2 = Singleton::getInstance();
	singleton2.someOperation();
	Singleton& singleton3 = Singleton::getInstance();
	singleton3.someOperation();
}