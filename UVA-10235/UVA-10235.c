#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
int num;
   while(scanf("%d",&num)!=EOF){
       int ch_prime=1,ch_emirp=1,numturn=0,i,numuse=num;
        for(i =2;i<=sqrt(numuse);i++)//�P�_��J���ƬO�_�����
		{
			if(numuse%i==0)//�P�_�O���O���
			{
				ch_prime=0;
				break;
			}
		}
		if(ch_prime==1){  //�Y����ƭn�i��½��P�_
            while(numuse>0){   //½��Ʀr
                numturn=numturn*10+numuse%10;
                numuse=numuse/10;
            }
             for(i =2;i<=sqrt(numturn);i++)//�P�_��J���ƬO�_�����
                {
                    if(numturn%i==0)//�P�_�O���O���
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

