#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int pattern(int l)
{
	if (l > 1) {
		int i, j;
		i = -(l - 1);
		while (i <= l - 1)
		{
			j = -(l - 1);
			while (j <= l - 1)
			{
				if (abs(i) == abs(j))
				{
					printf("x ");
				}
				else
				{
					printf("  ");
				}
				j++;
			}
			printf("\n");
			i++;
		}
		return l;
	}
	else
	{
		printf("Error");
		printf("\nCan't make cross (x pattern)");
	}
}
int main()
{
	int r;
	scanf("%d", &r);
	printf("", pattern(r));
	return 0;
}