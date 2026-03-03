#pragma once
#include "Sorcerer.h"
#include "Cleric.h"

class Multiclass : public Sorcerer, public Cleric
{
public:
	Multiclass();

	~Multiclass();

	void PrintData(bool shouldEnd = false) override;
	void PrintType();
};

