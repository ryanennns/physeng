#include "../include/Object.h"

Object::Object(double mass)
{
	this->mass = mass;
}

Object::Object()
{
	this->mass = 0.0;
}

Object::~Object()
{
}

double Object::getMass()
{
	return this->mass;
}

double Object::setMass(double mass)
{
	this->mass = mass;

	return this->mass;
}
