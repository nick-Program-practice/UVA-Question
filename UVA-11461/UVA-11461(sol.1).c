#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char const *argv[])
{
	int num1,num2,i,Ans[50],j=0;
	while(1)
	{
		int count=0;
		float sqrAns;
		printf("Input num1 num2: ");
		scanf("%d %d",&num1,&num2);
		if(num1==0 && num2==0)break;
		for(i=num1;i<=num2;i++)
		{
			sqrAns=sqrt(i);
			if(sqrAns==(int)sqrAns)
			{
				count++;
			}
		}
		Ans[j]=count;
		j++;
	}
	for(i=0;i<j;i++)
	{
		printf("%d\n",Ans[i]);
	}

    return 0;
}

