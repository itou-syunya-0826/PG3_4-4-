#pragma once
#include "Ishape.h"

class Rectangle : public Ishape{

public:

	float width = 2.0f;
	float height = 4.0f;

public:

	Rectangle();
	~Rectangle()override;

	void Size() override;
	void Draw() override;

};

