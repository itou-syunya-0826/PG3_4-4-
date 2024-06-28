#pragma once
#include "Ishape.h"

class Circle : public Ishape{
public:

	float radius = 5.0f;

public:

	Circle();
	~Circle();

	void Size() override;
	void Draw() override;
};

