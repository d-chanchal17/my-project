#include<stdio.h>
int main()
{
	int i,j,k,l;
	int arr1[3][3];
	printf("elements of matrix \n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
	    scanf("%d",&arr1[i][j]);
    }
    printf("matrix A\n");
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		printf("%d\t",arr1[i][j]);
    printf("\n");
    }
	return 0;
}
