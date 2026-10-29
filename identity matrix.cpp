//check whether given matrix is identity.
#include<stdio.h>
int main()
{
	int a[3][3],i,j,flag=1;
	printf(" Enter Matrix A: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The Matrix A is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==j && a[i][j]!=1)
      			{
      	 			flag=0;
      	 			break;
	  			}
	  			if( i!=j && a[i][j]!=0)
	  			{
	  				flag=0;
	  				break;
	  			}	
			}
		}
	if(flag==1)
	{
		printf("matrix is identity");
	}
	else
	{
		printf("matrix is not identity");
	}
      
	  
}
