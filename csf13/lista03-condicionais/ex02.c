#include <stdio.h>

int main(void)
{
	int area;
	int perimeter;
	int height;
	int base;

	scanf("%i%i", &base, &height);
	perimeter = (base * 2) + (height * 2);
	area = base * height;
	if(perimeter > area)
		printf("perimetro total: %im\narea total: %im2\n", perimeter,area);
	return(0);
}
