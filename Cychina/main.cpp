#include <iostream>
#include <string>
#include "LightBulb.h"
#include "BlueBulbt.h"
#include "GreenBulbt.h"
#include "RedBulb.h"
#include "User.h"

void CreatingLamp(LightBulb lamps[], int numberOfLamps); 
void Info();

int main() {
	int numberOfLamps = 5;
	LightBulb *lamps = new LightBulb[numberOfLamps];
	CreatingLamp(lamps, numberOfLamps); 
	while (1) {
		int user_choce;
		Info();
		std::cin >> user_choce;
		switch (user_choce)
		{
		case 1:
			std::cout << "MIGANIE" << std::endl;
			User::TurnOnManyLight(lamps);
			break;
		case 2:
			std::cout << "STOPPING" << std::endl;
			User::TurnOnConstantLight(lamps);
			break;
		case 3: {
			std::cout << "COLOR PIKER" << std::endl;
			std::string user_color;
			std::cout << "Enter a color of light (red, green, blue)" << std::endl;
			std::cin >> user_color;
			if (user_color == "red") { User::TurnOnOneLight(new RedBulb()); LightBulb::DeleteNumberLight();}
			if (user_color == "green"){ User::TurnOnOneLight(new GreenBulbt()); LightBulb::DeleteNumberLight();}
			if (user_color == "blue") { User::TurnOnOneLight(new BlueBulbt()); LightBulb::DeleteNumberLight();}
		}
			  break;
		case 4:
			std::cout << "SLOWLY MIGANIE" << std::endl;
			User::TurnOnManySlowlyLight(lamps);
			break;
		case 5:
			system("cls");
			break; 
		default:
			std::cout << "TURN OFF" << std::endl;
			return 0;
			break;
		}
	}
	return 0;
}

void CreatingLamp(LightBulb lamps[], int numberOfLamps) {
	for (int i = 0; i < numberOfLamps; i++)
	{
		if (i % 3 == 0)
			lamps[i] = RedBulb();
		if (i % 3 == 1)
			lamps[i] = BlueBulbt();
		if (i % 3 == 2)
			lamps[i] = GreenBulbt();
	}
}
void Info() {
	std::cout << "1. MIGANIE " << std::endl;
	std::cout << "2. STOPPING " << std::endl;
	std::cout << "3. COLOR PIKER " << std::endl;
	std::cout << "4. SLOWLY MIGANIE " << std::endl;
	std::cout << "5. CLEAR SCREEN " << std::endl;
	std::cout << "6. TURN OFF " << std::endl;
	std::cout << "->Enter a number of mode:" << std::endl;
}

