#include <bits/stdc++.h>
#define local
using namespace std;

const int maxn = 30000+10;
int a[maxn];
int vis[maxn];
int main()
{
    #ifdef local
    freopen("in.txt","r",stdin);
    #endif // local
    int w;
    while (scanf("%d",&w)==1){
        int n;
        scanf("%d",&n);
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        int sum = 0;
        int ans = 0;
        int des = 0;
        sort(a,a+n);
        int l=0,r=n-1;
        int sz = 0;
        while (sz<n){
            if (a[l]+a[r]<=w) {
                l++;
                r--;
                sz=sz+2;
            }else{
                r--;
                sz++;
            }
            ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
