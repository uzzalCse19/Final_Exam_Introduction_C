#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a;
    scanf("%d",&a);
    int n=6+(a-1)/2;
    int s=n-1,k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=s;j++) printf(" ");
        for(int j=1;j<=k;j++) printf("*");
        printf("\n");
        s--,k+=2;
    }
    for(int i=0;i<5;i++)
    {
        printf("     ");
        for(int j=0;j<a;j++) printf("*");
        printf("\n");
    }
    return 0;
}
