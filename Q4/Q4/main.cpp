#include"WMSystem.h"
#include"DisplayStation.h"
#include"LogStation.h"
int main() {
	WMSystem weatherSystem;
	DisplayStation displayStation;
	LogStation logStation;

	// G�zlemcileri kaydet
	weatherSystem.registerObserver(&displayStation);
	weatherSystem.registerObserver(&logStation);

	// S�cakl�k, bas�n� ve r�zgar de�erlerini g�ncelle
	weatherSystem.setTemperature(25.0);
	weatherSystem.setAirPressure(1015.0);
	weatherSystem.setWind(180.0, 10.0);

	// Ba�ka bir g�ncelleme
	weatherSystem.setTemperature(28.5);
	weatherSystem.setAirPressure(1012.5);
	weatherSystem.setWind(200.0, 12.0);
	return 0;
}
