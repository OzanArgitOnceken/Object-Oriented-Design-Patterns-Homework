#include"Receiver.h"
#include"ConcreteCommand.h"
#include"Invoker.h"
int main()
{ 
	Receiver receiver; 
	ConcreteCommand command(receiver); 
	Invoker invoker; 
	invoker.setCommand(&command); 
	invoker.executeCommand();

	return 0;
}