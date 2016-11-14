#include <stdio.h>
int main()
{
	float a[10];
	int i,m,n;

	for (int i=0; i <10;i++)
	{
		scanf("%f", &a[i]);		
	}
	printf("\n");
	
	for(m=0;m<9;m++)
		for(i=0;i<9-m;i++)
			if (a[i] > a[i+1])
			{
				n= a[i];
				a[i] = a[i + 1];
				a[i + 1] = n;
			}
	printf("按照升序排序后的顺序为：\n");
	for (i=0;i<10;i++)
	{
		printf("%10.3f", a[i]);
	}
	printf("\n");
	
	return 0;
}

