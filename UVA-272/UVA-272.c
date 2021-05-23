#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc , char *argv []) {

    int i;
    int w = 1;

    char q[10000];

    while(gets(q)){

         for (i = 0; i < strlen(q); i++){
             if (q[i] == '"'){
                 if (w==1){
                    printf("``");
                 } else{
                    printf("' '");
                 }
                    if(w==1)w=0;
                    else if(w==0)w=1;
             }else{
                printf("%c", q[i]);
             }
         }
        printf("\n");
    }
    return 0;
}
