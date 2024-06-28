#include "Circle.h"

Circle::Circle(){}

Circle::~Circle(){}

void Circle::Size(){
	float size = M_PI * radius * radius;
	printf("ä€ÇÃÉTÉCÉYÅ®%fÇ≈Ç∑\n", size);
}

void Circle::Draw(){
	Size();
}
