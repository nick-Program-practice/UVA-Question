#include <stdio.h>

int main() {
    long long s, d;
    while(scanf("%d %d",&s,&d)!=EOF)
	{
        int i = s, sum = 0;
        while(1) {
            sum+=i;
            if(sum>=d)
			{
                printf("%d\n",i);
                break;
            }
            i++;
        }
    }
    return 0;
}
