#pragma once
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

class Ishape{

public:

	Ishape();
	virtual ~Ishape();

	virtual void Size() = 0;
	virtual void Draw() = 0;
};

