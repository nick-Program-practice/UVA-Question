#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<tchar.h>

int main(int argc, char const* argv[])
{
    int lineCount, numOfLine, i, alph[26] = { 0 };
    int j, k, h, strl;
    char str[100];
    printf("Iinput line: ");
    scanf_s("%d", &lineCount);
    for (numOfLine = 0; numOfLine < lineCount; numOfLine++)
    {
        printf("Enter no.%d string: ", numOfLine + 1);
        scanf_s("\n");
        gets_s(str);
        strl = strlen(str);
        for (i = 0; i < strl; i++)
        {
            if (isalpha(str[i]))
            {
                for (h = 0, j = 65, k = 97;/*j<=90*/k <= 122; j++, k++, h++)
                    //因為字母數量是一樣的所以jk加的次數相同 一個條件即可
                {
                    if (str[i] == j || str[i] == k)
                    {
                        alph[h]++;
                    }
                }
            }
        }
    }
    int max = 0,pos=0;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (max < alph[j]) {
                max = alph[j];
                pos = j;
            }
        }
        if (alph[j] != 0) {
            printf("%c : %d", pos + 65, alph[pos]);
            alph[pos] = 0;
        }
       
    }

    return 0;
}

