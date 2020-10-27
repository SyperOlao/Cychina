#pragma once
#include <string>
class LightBulb
{
	int timeOfLight;
protected:
	std::string color_light;

public:
	LightBulb() {
		color_light = " ";
		timeOfLight = 0; 
	}
	void SetTimeOfLight(int timeOfLight) {
		this->timeOfLight = timeOfLight; 
	}

	int GetTimeOfLight() {
		return timeOfLight; 
	}
	
	virtual std::string Light() {
		return color_light; 
	}

};

