#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100001];
        int n;
        scanf("%d",&n);
        scanf("%s",s);
        int i=0,t=0,p=0;
        while(s[i]!='\0')
        {
            if(s[i]=='T') t++;
            else p++;
            i++;
        }
        if(t>p) printf("Tiger\n");
        else if(t<p) printf("Pathaan\n");
        else printf("Draw\n");
    }
    return 0;
}
