#pragma once
#include "LightBulb.h"
class GreenBulbt : public LightBulb
{
public:
	GreenBulbt() : LightBulb() {
		color_light = "green";
		LightBulb::AddNumberLight();
	}

	GreenBulbt(int timeOfLight) : GreenBulbt() {
		SetTimeOfLight(timeOfLight);
	}
};

