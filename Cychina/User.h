#pragma once
#include "LightBulb.h"
class User
{
public:
	static void TurnOnOneLight(LightBulb* light);
	static void TurnOnManyLight(LightBulb light[]);
	static void TurnOnManySlowlyLight(LightBulb light[]);
	static void TurnOnConstantLight(LightBulb lamps[]);

};

