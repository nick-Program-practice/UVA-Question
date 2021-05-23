#include<stdio.h>
#include<string.h>

int min( int x, int y )
{
    return ( x > y )? y : x;
}

int max( int x, int y )
{
    return ( x > y )? x : y;
}

int main()
{
    char s[1005];

    while( gets(s) )
    {
        printf( "\n" );
        int ASCII[130] = {0};
        int length = strlen(s);
        int i;
        int min_ASCII = 0;
        int max_ASCII = 0;
        int max_count = 0;

        for( i = 0 ; i < length ; i++ )
        {
            ASCII[ (int)s[i] ]++;
            min_ASCII = min( min_ASCII, (int)s[i] );
            max_ASCII = max( max_ASCII, (int)s[i] );
            max_count = max( max_count, ASCII[ (int)s[i] ] );
        }

        int j;
        for( i = 1 ; i <= max_count ; i++ )
            for( j = max_ASCII ; j >= min_ASCII ; j-- )
                if( ASCII[j] == i )
                    printf( "%d %d\n", j , ASCII[j] );

    }
    return 0;
}
