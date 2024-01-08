#pragma once
#include <iostream>
#include"Hardware.h"
class Media {
	public:
		Media(Hardware&hw) :hardware(&hw) {}
		void show() {
			hardware->output();
		}
		// Constructors, destructor,
		virtual void play() = 0;
		virtual ~Media() = default; 
	private:
		Hardware* hardware;
};