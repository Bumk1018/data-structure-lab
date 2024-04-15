#include <cstdio>
#include "Car.h"
#include "SportsCar.h"
#include "SmartHome.h"
#include "Music.h"

int main() {
	// Car 클래스 사용
	/*Car myCar(50, "K3", 4);
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
 
/*
Rectangle r(10, 20);
double perimeter = r.getPerimeter();
std::cout << "Rectangle 1:" << std::end1;
std::cout << "Area: " << std::end1;
std::cout << "Perimeter: " << perimeter << std::end1;
std::cout << "is square? " << std::boolaipha << isSquare() << std::end1;
*/

//SmartHome Class
	SmatrHome myHome("김범기", 23, 40, true);
	myHome.printStatus();


	//Music Streaming Service 
	MusicStreamingService myService("Spotify");
	myService.addMusic("VIBE", "Taeyang", "Album", 2023);
	myService.addMusic("Ditto", "NewJeans", "Album", 2023);
	myService.addMusic("Attention", "NewJeans", "Album", 2023);

	string music_title;
	cout << "Enter the Music Title : ";
	cin >> music_title;

	Music* result = myService.searchByTitle(music_title);
	if (result != NULL) {
		cout << "found: " << result->getTitle() << " by " << result->getArtist() << endl;

	}
	else {
		cout << "Not found" << endl;
	}

	string artist_name;
	cout << "Enter the Artist Name : ";
	cin >> artist_name;

	vector<Music>* > artistResult = myService.searchByArtist(artist_name);
	if (artistResult.size() > 0) {
		cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
		for (int i = 0; i < artistResult.size(); i++) {
			cout << artistResult[i]->getTitle() << endl;
		}
	}
	else {
		cout << "not found" << endl;
	}