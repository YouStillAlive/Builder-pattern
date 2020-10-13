#pragma once
#include "Builder.h"

class UAZ:public Builder
{
	void BuildName() override
	{
		Car.setName("UAZ Patriot");
	}
	void BuildBody() override
	{
		Car.setBody("Universal");
	}
	void BuildEngine() override
	{
		Car.setEngine("120");
	}
	void BuildWheels() override
	{
		Car.setWheels("16");
	}
	void BuildKPP() override
	{
		Car.setKPP("4 Manual");
	}
};