#include "Circle.h"

Circle::Circle(){}

Circle::~Circle(){}

void Circle::Size(){
	float size = M_PI * radius * radius;
	printf("�ۂ̃T�C�Y��%f�ł�\n", size);
}

void Circle::Draw(){
	Size();
}
