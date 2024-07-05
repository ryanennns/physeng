#pragma once

class Object
{
public:
	Object(double mass);
	Object();
	~Object();

	double getMass();
	double setMass(double mass);
private:
	double mass;
};