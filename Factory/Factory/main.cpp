#include"Factory.h" 
int main()
{
	Factory* pFactory= new Factory(2);
	Vehicle* pVehicle2 = pFactory->getVehicle();
	Vehicle* pVehicle4 = pFactory->createNewVehicle(4);
	pVehicle2->printVehicle();
	pVehicle4->printVehicle();
	return 0;
}