#pragma once
#include <string>
#include <iostream>

class Product
{
	std::string Name, Body, Engine, Wheels, KPP;
public:
	std::string getName()
	{
		return Name;
	}

	std::string getBody()
	{
		return Body;
	}

	std::string getEngine()
	{
		return Engine;
	}

	std::string getWheels()
	{
		return Wheels;
	}

	std::string getKPP()
	{
		return KPP;
	}

	void setName(std::string CName)
	{
		Name = CName;
	}

	void setBody(std::string CBody)
	{
		Body = CBody;
	}

	void setWheels(std::string CWheels)
	{
		Wheels = CWheels;
	}

	void setKPP(std::string CKPP)
	{
		KPP = CKPP;
	}

	void setEngine(std::string CEngine)
	{
		Engine = CEngine;
	}

	void Show()
	{
		std::cout << "Car Name - " << Name
			<< "\nBody - " << Body
			<< "\nEngine - " << Engine
			<< "\nWheels - " << Wheels
			<< "\nKPP - " << KPP 
			<< std::endl << std::endl;
	}
};