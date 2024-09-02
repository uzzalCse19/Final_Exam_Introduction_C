#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,m,a=0,b=0,c=0;
    scanf("%d%d",&n,&m);
    if(n!=m) c=1;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j || i+j==n-1)
            {
                if(arr[i][j]!=1) a=1;
            }
            else
            {
                if(arr[i][j]!=0) b=1;
            }
        }
    }
    if(a==1 || b==1 || c==1) printf("NO\n");
    else printf("YES\n");
    return 0;
}