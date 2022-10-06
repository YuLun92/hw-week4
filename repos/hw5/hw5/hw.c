#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,y;
	scanf_s("%d%d", &x, &y);
	if (x%y == 0)
	{
		printf("%d is a multiple of %d\n", x, y);
	}
	else
	{
		printf("%d is not a multiple of %d\n", x, y);
	}
	system("pause");
	return 0;

}