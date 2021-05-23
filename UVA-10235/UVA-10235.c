#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
int num;
   while(scanf("%d",&num)!=EOF){
       int ch_prime=1,ch_emirp=1,numturn=0,i,numuse=num;
        for(i =2;i<=sqrt(numuse);i++)//判斷輸入的數是否為質數
		{
			if(numuse%i==0)//判斷是不是質數
			{
				ch_prime=0;
				break;
			}
		}
		if(ch_prime==1){  //若為質數要進行翻轉判斷
            while(numuse>0){   //翻轉數字
                numturn=numturn*10+numuse%10;
                numuse=numuse/10;
            }
             for(i =2;i<=sqrt(numturn);i++)//判斷輸入的數是否為質數
                {
                    if(numturn%i==0)//判斷是不是質數
                    {
                        ch_emirp=0;
                        break;
                    }
                }
		}
		if(ch_emirp==1 && ch_prime==1){
            printf("%d is emirp.\n",num);
		}
		else if(ch_prime==1){
            printf("%d is prime.\n",num);
		}
		else{
            printf("%d is not prime.\n",num);
		}
   }
    return 0;
}

