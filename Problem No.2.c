#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char charc, temp;
    int a_hash[128] = {0};
    int i, x, ln;

    printf("Input your String\n");
    scanf("%s", str);

       strlwr(str);
       ln = strlen(str);

        for(i = 0; i < ln-1; i++)
            for(x = i + 1; x < ln; x++)

            if(str[i] > str[x]){
            temp = str[i];
            str[i] = str[x];
            str[x] = temp;
        }
        printf("\nunique characters are:\t");
        for(i = 0; i < ln; i++)
            if(str[i] != ' ')
            a_hash[str[i]]++;
        for(i = 0; i < ln; i++)
            if(a_hash[str[i]] == 1){
                charc = str[i];
        printf("%c ", charc);
        }
}
