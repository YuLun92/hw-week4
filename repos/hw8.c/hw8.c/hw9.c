#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, f;
	printf("�@��Ѫ��`���{��\n");
	printf("�T�o�@���� / �[�ڦh�ֿ�\n");
	printf("�����@���� / �[�گ��p�h�֤���\n");
	printf("�@�Ѫ������O\n");
	printf("�@�Ѫ��q��O(�L���O)\n");
    scanf_s("%f %f %f %f %f", &a, &b, &c, &d, &e);
    f = ((a / c) *b) + d + e;
    printf("total= %f\n", f);

	system("pause");
	return 0;

}