#include<stdio.h>
int main()
{
    char line[1000],ch;
    int i =0;
    printf("enter name");
    while (ch!='\n')
    {
        ch = getchar();
        line[i] = ch;
        i++;
    }
    line[i] = '\0'; //inserting null charcter at end
    printf("\n line is;%s",line);
    return 0;
}

    