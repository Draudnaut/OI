/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月02日 星期一 16时33分16秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
string seq[3];
string ans;
int main()
{
    #ifdef local
        freopen("test.in","r",stdin);
    #endif
    int len;
    while (scanf("%d",&len)==1){
        for (int i=0;i<3;i++) cin>>seq[i];
        for (int i=0;i<3;i++)
        {
            string temp=seq[i];
            reverse(temp.begin(),temp.end());
            int dx,dy;
            if (i==0)
            {
                dx=seq[1][0]-temp[0];
                dy=seq[2][0]-temp[0];
            }
            else if (i==1)
            {
                dx=seq[0][0]-temp[0];
                dy=seq[2][0]-temp[0];
            }
            else if (i==2)
            {
                dx=seq[0][0]-temp[0];
                dy=seq[1][0]-temp[0];
            }else{}
            if ((dx+dy)%26==0) ans=temp;
        }
        cout<<ans<<endl;
    }
    return 0;
}
