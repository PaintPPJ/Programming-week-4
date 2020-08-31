#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, N;
	scanf("%d",&N);
	i = -(N - 1);
	if (N > 1) {
		while (i <= N - 1)
		{
			j = -(N - 1);
			while (j <= N - 1)
			{
				if (abs(i) <= abs(j))
				{
					printf("* ");
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
	}
	else 
	{
		printf("Can't make butterfly by pattern *");
	}
	return 0;
}