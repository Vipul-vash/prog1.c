// Вычисление площади прямоугольника
#include <stdio.h>

int main()
{
	float l,w; // length and width of the rectangle  
	float s; //  area of the rectangle
	
	printf("\ncalculating the area of a rectangle\n");
	printf("Enter the original data:\n");
	printf("Length (cm.)   -> ");
	scanf("%f", &l);
	printf("Width (cm.)   -> ");
	scanf("%f", &w);
	s = l * w;
	printf("Parallelogram area:%10.2f sq.sm.\n", s);
	
	printf("\n\nTo finish press <Enter>");

}
