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
        long long int m;
        int a,b,c;
        scanf("%lld",&m);
        scanf("%d%d%d",&a,&b,&c);
        long long int d=a*b*c;
        long long int ans=m/d;
        double ans1=m*1.0/d;
        //printf("%lld %lf",ans,ans1);
        if(ans==ans1) printf("%lld\n",ans);
        else printf("-1\n");
    }
    return 0;
}
