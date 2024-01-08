#include"Circle.h"
#include"Square.h"
#include"DrawStrategy.h"
#include"SerializeStrategy.h"
#include"DrawCircleStrategy.h"
#include"DrawSquareStrategy.h"
#include"SerializeCircleStrategy.h"
#include"SerializeSquareStrategy.h"
int main() {
	// Example usage
	Circle circle(5);
	Square square(8);

	// Set the drawing and serialization strategies dynamically
	DrawStrategy* drawStrategy = new DrawCircleStrategy();
	SerializeStrategy* serializeStrategy = new SerializeCircleStrategy();

	// Use the strategies for the circle
	drawStrategy->draw(circle);
	std::cout << serializeStrategy->serialize(circle) << std::endl;

	// Change the strategies for the square
	drawStrategy = new DrawSquareStrategy();
	serializeStrategy = new SerializeSquareStrategy();

	// Use the strategies for the square
	drawStrategy->draw(square);
	std::cout << serializeStrategy->serialize(square) << std::endl;

	// Clean up
	delete drawStrategy;
	delete serializeStrategy;

	return 0;
}