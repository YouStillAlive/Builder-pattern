#pragma once
#include "Product.h"

class Builder abstract
{
protected:
	Product Car;
public:
	Product GetCar()
	{
		return Car;
	}

	virtual void BuildName() abstract;
	virtual void BuildBody() abstract;
	virtual void BuildEngine() abstract;
	virtual void BuildWheels() abstract;
	virtual void BuildKPP() abstract;
};