#pragma once
#include "LightBulb.h"
class RedBulb : public LightBulb {

public: 
	RedBulb() : LightBulb() {
		color_light = "red";
	}

	RedBulb(int timeOfLight) : RedBulb() {
		SetTimeOfLight(timeOfLight);
	}

};

