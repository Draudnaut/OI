/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月01日 星期日 23时38分10秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifdef LOCAL
    freopen("test.in","r",stdin);
    #endif

    int n;
    int a[25];
    while (scanf("%d",&n)==1)
    {
        for (int i=0;i<n;i++) scanf("%d",&a[i]);
        int k = n/2;
        int sum = 0;
        for (int i=0;i<n;i++) sum+=a[i];
        int lsum,rsum;
        lsum=rsum=0;
        int ans = 0x3f3f3f;
        for (int i=1;i<=((1<<(n))-1);i++)
        {
            int s = i ;
            int cnt = 0 ;
            //cout<<s<<endl;
            lsum=rsum=0;
            while (s){
                if (s&1) lsum+=a[cnt];
                s>>=1;
                cnt++;
            }
            rsum = sum - lsum;
            //cout<<lsum<<" "<<rsum<<endl;
            if (abs(lsum-rsum)<ans) {
                ans = abs(lsum-rsum);
            }
        }
        //cout<<ans<<endl;
        printf("%d\n",ans);
    }
    return 0;
}
