#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	float size = width * height;
	printf("矩形のサイズは→%fです", size);
}

void Rectangle::Draw(){
	Size();
}
