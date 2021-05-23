#include <stdio.h>
#include <stdlib.h>

int cyclelength( int n );

int main(int argc, char *argv[]) {
	int q,w,e,u,max,min,qq,ww;

	while(scanf("%d%d",&q,&w)!=EOF)
	{
		qq=q;
		ww=w;
		if(q>w)
		{
			u=w;
			w=q;
			q=u;
		}
		max=0,min=0;

	 for(;q<=w;q++)
	 {
	 	e=cyclelength(q);
     	if(e>max)
     	max=e;
 	 }
	printf("%d %d %d\n",qq,ww,max);
    }
	return 0;
}

int cyclelength( int n ){
  if( n == 1 )
    return 1;
  else if( n % 2 )
    return 1+cyclelength(3*n+1);
  else
    return 1+cyclelength(n/2);
}


