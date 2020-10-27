#pragma once
#include <string>
class LightBulb
{
	int timeOfLight;
	//int numberLights;
	static int numberLights; 
protected:
	std::string color_light;
	static void AddNumberLight() {
		numberLights++;
	}
public:
	LightBulb() {
		color_light = " ";
		timeOfLight = 0;
	}
	static void DeleteNumberLight();
	void SetNumberLights(int numberLights) {
		this->numberLights = numberLights;
	}

	void SetTimeOfLight(int timeOfLight) {
		this->timeOfLight = timeOfLight; 
	}
	int GetNumberLights() {
		return numberLights; 
	}
	int GetTimeOfLight() {
		return timeOfLight; 
	}
	
	virtual std::string Light() {
		return color_light; 
	}

};

