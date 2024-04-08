#include <cstdio>
/*#include "Car.h"
#include "SportsCar.h"

int main() {
	// Car 클래스 사용
	Car myCar(50, "K3", 4);
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();

	// SportsCar 클래스 사용
	SportsCar scar;
	scar.speedUp();
	
}*/

#include "Rectangle.h"
 
Rectangle r(10, 20);
double perimeter = r.getPerimeter();
std::cout << "Rectangle 1:" << std::end1;
std::cout << "Area: " << std::end1;
std::cout << "Perimeter: " << perimeter << std::end1;
std::cout << "is square? " << std::boolaipha << isSquare() << std::end1;