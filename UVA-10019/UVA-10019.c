#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int q,u,w,e,r,t,i=0;
	scanf("%d",&q);
	while(q--)
	{
		e=0,r=0;
	scanf("%d",&w);
	t=w;
	
		while(t)
		{
		if(t%2==1)
		{
			e++;
		}
		t=t/2;
       	}
	while(w)
    {    
   	   t=w%10;
		  	while(t)
		 {
		 if(t%2==1)
		 r++;
		 t=t/2;
		 }
		w/=10;
    }
	
	printf("%d %d\n",e,r);
}
	return 0;
}

     
