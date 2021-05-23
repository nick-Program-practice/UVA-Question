#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int times,k,num,q,w,count=0,i,e;
		char re[100];
		scanf("%d",&times);
		while(times--)
	{
			scanf("%d",&num);
			k=num;
			i=0;
			while(num--)
		{
			scanf("%d",&w);
			re[i]=w;
			i++;
		}
		e=0;
		while(k--)
		{
			if(re[e]>re[e+1]){
				q=re[e];
				re[e]=re[e+1];
				re[e+1]=q;
				count++;
				e++;
		}}
		printf("Optimal train swapping takes %d swaps.",&count);
	}
	return 0;
}
