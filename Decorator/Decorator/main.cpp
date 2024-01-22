// main.cpp

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeDecorator.h"
#include "RedShapeDecorator.h"
#include "BlueShapeDecorator.h"

int main() {
	// Circle with normal border
	Shape* circle = new Circle();
	std::cout << "Circle with normal border" << std::endl;
	circle->draw();
	delete circle;

	// Circle of red border
	Shape* redCircle = new RedShapeDecorator(new Circle());
	std::cout << "\nCircle of red border" << std::endl;
	redCircle->draw();
	delete redCircle;

	// Rectangle of red border
	Shape* redRectangle = new RedShapeDecorator(new Rectangle());
	std::cout << "\nRectangle of red border" << std::endl;
	redRectangle->draw();
	delete redRectangle; 
	
	Shape* blueCircle = new BlueShapeDecorator(new Circle());
	std::cout << "\nCircle of blue border" << std::endl;
	blueCircle->draw();
	delete blueCircle;

	Shape* blueRectangle = new BlueShapeDecorator(new Rectangle());
	std::cout << "\nRectangle of blue border" << std::endl;
	blueRectangle->draw();
	delete blueRectangle;
	return 0;
}
