#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int n, diff, i, result, data[300];
    char jolly[300];
    
    while(scanf("%d", &n) != EOF){
        memset(jolly, 0, sizeof(char)*n);
        for(i=0; i<n; i++)
            scanf("%d", &data[i]);
        for(i=1, result=1; i<n; i++){
            diff = data[i] - data[i-1];
            diff = diff < 0 ? -diff : diff;
            if(diff < 1 || diff > n-1){
                result=0;
                break;
            }
            if(jolly[diff]++){
                result=0;
                break;
            }                    
        }
        printf("%s\n", result ? "Jolly" : "Not jolly");
    }
    return 0;
}
