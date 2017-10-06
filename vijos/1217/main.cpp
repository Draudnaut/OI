/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月06日 星期五 19时23分13秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    #ifdef local
        freopen("test.in","r",stdin);
    #endif
    string ans;
    char c;
    while ((c=getchar())!=EOF&&c!='E'){
        if (c=='\n'||c==' ') continue;
        ans+=c;
    }
    int l1=0,l2=0;
    for (auto a:ans){
        if (a=='W') l1++;
        if (a=='L') l2++;
        if (l1>=11){
            if (abs(l1-l2)>=2) {printf("%d:%d\n",l1,l2);l1=0;l2=0;}
        }
        if (l2>=11){
            if (abs(l1-l2)>=2){printf("%d:%d\n",l1,l2);l1=0;l2=0;} 
        }
    }
    if (l1||l2&&ans.length()) printf("%d:%d\n\n",l1,l2);
    else printf("0:0\n\n");
    l1=0;
    l2=0;
    for (auto a:ans){
        if (a=='W') l1++;
        if (a=='L') l2++;
        if (l1>=21){
            if (abs(l1-l2)>=2) {printf("%d:%d\n",l1,l2);l1=0;l2=0;}
        }
        if (l2>=21){
            if (abs(l1-l2)>=2) {printf("%d:%d\n",l1,l2);l1=0;l2=0;}
        }
    }
    if (l1||l2&&ans.length()) printf("%d:%d\n",l1,l2);
    else printf("0:0\n");
    return 0;

}
