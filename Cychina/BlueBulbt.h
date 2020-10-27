#pragma once
#include "LightBulb.h"
class BlueBulbt : public LightBulb
{
public:
	BlueBulbt() : LightBulb() {
		color_light = "blue";
	}
	BlueBulbt(int timeOfLight) : BlueBulbt() {
		SetTimeOfLight(timeOfLight);
	}
};

