#pragma once
#include"Receiver.h"
#include"Command.h"
class ConcreteCommand :public Command {
public:
	ConcreteCommand(Receiver&rec):receiver_(rec){}
	void execute() { receiver_.performAction(); }
private:
	Receiver& receiver_;
};