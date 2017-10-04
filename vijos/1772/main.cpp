/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月04日 星期三 23时18分15秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hs[10];
    for (int i=100;i<1000;i++){
        int a=i;
        int b=2*i;
        int c=3*i;
        memset(hs,0,sizeof(hs));
        if (a<1000&&b<1000&&c<1000){
            int aa=a;
            int bb=b;
            int cc=c;
            while (aa) {hs[aa%10]++;aa/=10;}
            while (bb) {hs[bb%10]++;bb/=10;}
            while (cc) {hs[cc%10]++;cc/=10;}
            if (hs[1]==1&&hs[2]==1&&hs[3]==1&&hs[4]==1&&hs[5]==1&&hs[6]==1&&hs[7]==1&&hs[8]==1&&hs[9]==1) printf("%d %d %d\n",a,b,c);
        }
    }
    return 0;
}
