#include <stdio.h>
#include <stdlib.h>

int main() {
    int q,w,i;
    while(scanf("%d %d",&q,&w) == 2) {
        if(w<2||q==0||q<w) {
            puts("Boring!");
            continue;
        }
        int a[1000]={q};
        for(i=1;;i++)
            {
            if(a[i-1]==1)
                break;
            if(a[i-1]%w!=0)
            {
                i=0;
                break;
            }
            a[i]=a[i-1]/w;
        }
        if(i==0)
        printf("Boring!\n");
        else
        {
        printf("%d",a[0]);
            for(q=1;q<i;q++)
            printf(" %d",a[q]);
            printf("\n");
        }
    }
    return 0;
    }

