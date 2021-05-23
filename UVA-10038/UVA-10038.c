#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define i 3000

int main(int argc, char *argv[]) {
    int x;
    while (scanf("%d", &x) != EOF) {
        int a[i]={0},q,w= 1,e;
        for (q=0;q<x;q++) {
            int r;
            scanf("%d",&r);
            if (q>0) {
                int t=fabs(e-r);
                if (t==0||t>x-1||++a[t]>1)
                w=0;
            }
            e=r;
        }
        printf("%s\n",w?"Jolly":"Not jolly");
    }
return 0;
}

