#include<stdio.h>
int main()
{
    int a[] = {2,1,0,-8,-9};
    int n = sizeof(a)/sizeof(int);
    float np, nz, nn;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            np++;
        }
        else if (a[i] < 0)
        {
            nn--;
        }
        else
        {
            nz++;
        }
    }
    printf("%0.1f,%0.1f,%0.1f",np/n,nz/n,nn/n);
    
}