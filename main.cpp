#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	Ishape* Shapes[2];
	Shapes[0] = new Circle;
	Shapes[1] = new Rectangle;

	for (int i = 0; i < 2; i++) {
		Shapes[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete Shapes[i];
	}

	return 0;
}