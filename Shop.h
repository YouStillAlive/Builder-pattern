#pragma once
#include "Builder.h"
#include "Product.h"

class Shop
{
	Builder* CarBuilder;
public:

	void SetCarBuilder(Builder* Car)
	{
		CarBuilder = Car;
	}

	Product GetCar()
	{
		return CarBuilder->GetCar();
	}

	void ConstructCar()
	{
		CarBuilder->BuildName();
		CarBuilder->BuildEngine();
		CarBuilder->BuildKPP();
		CarBuilder->BuildBody();
		CarBuilder->BuildWheels();
	}
};