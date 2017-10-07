/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月07日 星期六 23时02分01秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

struct cmp{
    bool operator() (int &a,int &b) const{
        return a>b;
    }
};
int main()
{
    #ifdef local
        freopen("test.in","r",stdin);
    #endif
    int n;
    priority_queue<int,vector<int>,cmp> q;
    scanf("%d",&n);
    int t;
    for (int i=0;i<n;i++){
        scanf("%d",&t);
        q.push(t);
    }
    int sum = 0;
    while (q.size()>1){
        int w1 = q.top();
        q.pop();
        int w2 = q.top();
        q.pop();
        sum+=(w1+w2);
        q.push(w1+w2);
    }
    printf("%d\n",sum);
    return 0;
}
