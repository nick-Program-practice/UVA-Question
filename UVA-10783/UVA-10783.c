#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int q,w,e,sum,r=0;
   scanf("%d",&q);
      while(q--)
    {
        r++;
     scanf("%d%d",&w,&e);
     sum=0;
    if(w%2!=0)
      while(w<=e)
      {
         sum+=w;
         w+=2;
      }
    else  if(w%2==0)
            w+=1;
      while(w<=e)
      {
        sum+=w;
         w+=2;
      }

    printf("Case %d: %d\n",r,sum);

      }

  return 0;
}
