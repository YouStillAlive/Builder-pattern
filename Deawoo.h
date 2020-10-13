#pragma once
#include "Builder.h"

class Deawoo : public  Builder
{
	void BuildName() override
	{
		Car.setName("Deawoo Lanos");
	}
	void BuildBody() override
	{
		Car.setBody("Sedan");
	}
	void BuildEngine() override
	{
		Car.setEngine("98");
	}
	void BuildWheels() override
	{
		Car.setWheels("13");
	}
	void BuildKPP() override
	{
		Car.setKPP("5 Manual");
	}
};
