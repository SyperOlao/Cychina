#include <iostream>
#include <string>
#include "LightBulb.h"
#include "BlueBulbt.h"
#include "GreenBulbt.h"
#include "RedBulb.h"

void Light(LightBulb* light);
void LightALot(LightBulb* light1, LightBulb* light2, LightBulb* light3); 

int main() {
	RedBulb red1(30);
	BlueBulbt bubbl(5);
	GreenBulbt greebl(10);
	Light(&red1);
	Light(&bubbl);
	Light(&greebl);
	int user_choce; 
	std::cout << "Enter a number" << std::endl;
	std::cin >> user_choce;

	switch (user_choce)
	{
	case 1:
		std::cout << "MIGANIE" << std::endl;
		LightALot(&red1, &bubbl, &greebl);
	break;
	default:
		break;
	}
	return 0;
}

void Light(LightBulb* light)
{
	for (int i = 0; i < light->GetTimeOfLight(); i++)
	{
		std::cout << light->Light() <<std::endl;
		system("cls");
	}
}

void LightALot(LightBulb* light1, LightBulb* light2, LightBulb* light3) {
	for (int i = 0; i < light1->GetTimeOfLight()+light2->GetTimeOfLight()+light3->GetTimeOfLight(); i++)
	{
		std::cout << light1->Light() << std::endl;
		std::cout << light2->Light() << std::endl;
		std::cout << light3->Light() << std::endl;
		system("cls");
	}
}
