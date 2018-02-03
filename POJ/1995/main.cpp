#include <bits/stdc++.h>
using namespace std;
int pow_mul(long long a,long long b,int M){
    int s = 1;
    while (b){
        if (b&1) s = ((s*a)%M);
        else{}
        a = ((a*a)%M);
        b>>=1;
    }
    return s;
}
int main()
{
    int N;
    scanf("%d",&N);
    while (N--){
        int M;
        scanf("%d",&M);
        int _;
        scanf("%d",&_);
        int sum=0;
        while (_--){
            int a,b;
            scanf("%d%d",&a,&b);
            sum=((sum+pow_mul(a,b,M))%M);
        }
        printf("%d\n",sum);
    }
    return 0;
}
