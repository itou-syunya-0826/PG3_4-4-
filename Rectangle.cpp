#include "Rectangle.h"

Rectangle::Rectangle(){}

Rectangle::~Rectangle(){}

void Rectangle::Size(){
	float size = width * height;
	printf("��`�̃T�C�Y�́�%f�ł�", size);
}

void Rectangle::Draw(){
	Size();
}
