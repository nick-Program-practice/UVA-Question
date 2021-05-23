#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int num,ans;
    while(1){
    scanf("%d",&num);
    if(num==0)break;
    while(1){
        ans=0;
            if(num/10==0){
                printf("%d\n",num);
                break;
            }
            else{
                while(1){
                    if(num==0)break;
                    ans+=num%10;
                    num=num/10;
              }
               num=ans;
            }
        }

    }
    return 0;
}

