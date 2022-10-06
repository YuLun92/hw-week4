#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b,c;

	printf("體重(kg) 身高(cm):");
	scanf_s("%f%f", &a,&b);

	c = a / (b*b)*10000;
	printf("\nBMI= %f\n\n", c);

	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:      30 or greater\n");

	system("pause");
	return 0;
}