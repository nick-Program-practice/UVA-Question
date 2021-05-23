#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int num1,num2,i,Ans[100000]={0},count=0;
	for(int i=1;i<=316;i++){
        Ans[i*i]=1;
	}
	while(1)
	{
		printf("Input num1 num2: ");
		scanf("%d %d",&num1,&num2);
		if(num1==0 && num2==0)break;
		for(i=num1;i<=num2;i++)
		{
			if(Ans[i]==1)
			{
				count++;
			}
		}
		printf("%d\n",count);
		count=0;
	}
    return 0;
}

