#pragma once
#include"Command.h"
class Invoker {
public:
	void setCommand(Command*cmd) { command_ = cmd; }
	void executeCommand() { command_->execute(); }
private:
	Command*command_;
};