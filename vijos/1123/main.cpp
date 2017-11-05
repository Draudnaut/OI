#include <bits/stdc++.h>
using namespace std;
const int maxn = 105;
int a[maxn];
int main()
{
    int n;
    while (scanf("%d",&n)==1){
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        int sum = 0;
        for (int i=0;i<n;i++) sum+=a[i];
        int ave = sum/n;
        int ans = 0;
        for (int i=0;i<n;i++){
            if (a[i]>ave){
                a[i+1]+=a[i]-ave;
                a[i]=ave;
                ans++;
            }
            if (a[i]<ave) {
                a[i+1]-=ave-a[i];
                a[i]=ave;
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
