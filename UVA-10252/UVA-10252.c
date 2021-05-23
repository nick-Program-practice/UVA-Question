#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
 char str1[1000],str2[1000],len1,len2;
   while(scanf("%s %s",str1,str2)!=EOF){
      int ch[26]={0},p=0;
      len1=strlen(str1);
      len2=strlen(str2);
		while(p<len2){
            for(int i=0;i<len1;i++){
                if(str1[i]==str2[p]){
                    ch[str1[i]-97]++;
                }
            }
            p++;
		}
		for(int i=0;i<26;i++){
            if(ch[i]>0){
                printf("%c",i+97);
            }
		}
           printf("\n");
        memset(ch,'0',26);
   }
    return 0;
}

