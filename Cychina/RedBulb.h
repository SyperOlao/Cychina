#pragma once
#include "LightBulb.h"
class RedBulb : public LightBulb {

public: 
	RedBulb() : LightBulb() {
		color_light = "red";
		LightBulb::AddNumberLight();
	}

	RedBulb(int timeOfLight) : RedBulb() {
		SetTimeOfLight(timeOfLight);
	}

};

