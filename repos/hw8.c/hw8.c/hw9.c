#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, f;
	printf("一整天的總里程數\n");
	printf("汽油一公升 / 加侖多少錢\n");
	printf("平均一公升 / 加侖能行駛多少公里\n");
	printf("一天的停車費\n");
	printf("一天的通行費(過路費)\n");
    scanf_s("%f %f %f %f %f", &a, &b, &c, &d, &e);
    f = ((a / c) *b) + d + e;
    printf("total= %f\n", f);

	system("pause");
	return 0;

}