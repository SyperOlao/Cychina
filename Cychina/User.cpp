#include "User.h"
#include <iostream>
#include <Windows.h>
void User::TurnOnOneLight(LightBulb* light)
{
	for (int i = 0; i < light->GetNumberLights(); i++)
	{
		std::cout << light->Light() << std::endl;
	}
	
}

void User::TurnOnManyLight(LightBulb light[])
{
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			for (int i = 0; i < light->GetNumberLights(); i++)
			{
				std::cout << light[i].Light() << std::endl;
			}
		}
		Sleep(400);
		system("cls");
	}
}
void User::TurnOnManySlowlyLight(LightBulb light[])
{
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0) {
			for (int i = 0; i < light->GetNumberLights(); i++)
			{
				std::cout << light[i].Light() << std::endl;
			}
		}
		Sleep(1500);
		system("cls");
	}
}
void User::TurnOnConstantLight(LightBulb lamps[]) {
	for (int i = 0; i < lamps->GetNumberLights(); i++)
	{
		std::cout << lamps[i].Light() << std::endl;
	}
}