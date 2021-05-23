#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int q,w,e,r,t;
	while(scanf("%d%d",&q,&w)!=EOF)
 	{
 		e=0;
 	  if(q==0&&w==0)break;
	  while(q>0&w>0)
	  {
	  	r=q%10+w%10;
	  	if(r/10==1)
	  	e++;
	  		  	
	  	q/=10;
	  	w/=10;
	  } 
	  if(e==0)
	  printf("No carry operation.\n");
	  else
	  printf("%d carry operations.\n",e);			
	}	
	
	return 0;
}
