#include<stdio.h>
int main()
{
    char str[100] = "a1b2c3";
    int len = 0;
    while (str[len] != '\0')
    len++;
    for (int i = 0; i < len; i++)
    {
        if (str[i] > '0' && str[i] < '9')
        {
            int num = str[i] - '0';
            for (int j = 0; j < num; j++)
            {
                printf("%c", str[i-1]);
            }
            
        }
        
    }
    
}