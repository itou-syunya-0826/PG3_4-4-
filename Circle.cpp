#include "Circle.h"

Circle::Circle(){}

Circle::~Circle(){}

void Circle::Size(){
	float size = M_PI * radius * radius;
	printf("丸のサイズ→%fです\n", size);
}

void Circle::Draw(){
	Size();
}
