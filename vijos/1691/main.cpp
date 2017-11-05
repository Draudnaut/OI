#include <bits/stdc++.h>
using namespace std;
const int maxn=1e4+9;
int y[maxn];
int main()
{
    int n;
    scanf("%d",&n);
    int xx,yy;
    for (int i=0;i<n;i++){
        scanf("%d%d",&xx,&yy);
        y[i]=yy;
    }
    int ans = 1e9+7;
    for (int i=0;i<n;i++){
        int t=y[i];
        int sum=0;
        for (int j=0;j<n;j++){
            sum+=abs(t-y[j]);
        }
        ans=min(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}
