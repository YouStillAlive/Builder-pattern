#pragma once
#include "Builder.h"

class Hyundai :public Builder
{
	void BuildName() override
	{
		Car.setName("Hyundai Getz");
	}
	void BuildBody() override
	{
		Car.setBody("Hatchback");
	}
	void BuildEngine() override
	{
		Car.setEngine("66 ");
	}
	void BuildWheels() override
	{
		Car.setWheels("13");
	}
	void BuildKPP() override
	{
		Car.setKPP("4 auto");
	}
};