#include "Shop.h"
#include "Builder.h"
#include "Deawoo.h"
#include "Ford.h"
#include "UAZ.h"
#include "Hyundai.h"

void ConfigAndShow(Builder* Build)
{
	Shop Director;
	Director.SetCarBuilder(Build);
	Director.ConstructCar();
	Director.GetCar().Show();
}

void Client(Builder *Build)
{
	ConfigAndShow(Build);
	delete Build;
}

int main()
{
	Client(new Deawoo());
	Client(new Ford());
	Client(new UAZ());
	Client(new Hyundai());
}