#pragma once
#include "Builder.h"

class Ford :public Builder
{
	void BuildName() override
	{
		Car.setName("Ford Probe");
	}
	void BuildBody() override
	{
		Car.setBody("Coupe");
	}
	void BuildEngine() override
	{
		Car.setEngine("160");
	}
	void BuildWheels() override
	{
		Car.setWheels("14");
	}
	void BuildKPP() override
	{
		Car.setKPP("4 Auto");
	}
};