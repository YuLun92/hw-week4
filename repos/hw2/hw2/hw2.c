#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b &&b>c)
	{
		printf("largest:%d\nsmallest : %d\n", a, c);
	}
	if (a > c &&c> b)
	{
		printf("largest:%d\nsmallest : %d\n", a, b);
	}
	if (b > a &&a> c)
	{
		printf("largest:%d\nsmallest : %d\n", b, c);
	}
	if (b > c &&c> a)
	{
		printf("largest:%d\nsmallest : %d\n", b, a);
	}
	if (c > a &&a> b)
	{
		printf("largest:%d\nsmallest : %d\n", c, b);
	}
	if (c > b &&b> a)
	{
		printf("largest:%d\nsmallest : %d\n", c, a);
	}
	system("pause");
	return 0;

}