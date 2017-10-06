/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月06日 星期五 18时48分31秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int maze[9][9];
int cal(int tx,int ty)
{
    int res = 0;
    for (int i=tx;i<tx+3;i++){
        for (int j=ty;j<tx+3;j++){
            res += maze[i][j];
        }
    }
    return res;
}
int vis[10];
int main()
{
    #ifdef local
        freopen("test.in","r",stdin);
    #endif
    int _;
    scanf("%d",&_);
    while (_--)
    {
        int sum1[9];
        int sum2[9];
        int sum3[9];
        memset(vis,0,sizeof(vis));
        memset(sum1,0,sizeof(sum1));
        memset(sum2,0,sizeof(sum2));
        memset(sum3,0,sizeof(sum3));
        for (int i=0;i<9;i++)for (int j=0;j<9;j++){scanf("%d",&maze[i][j]);vis[maze[i][j]]++;}
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                sum1[i]+=maze[i][j];
            }
        }
        for (int i=0;i<9;i++){
            for (int j=0;j<9;j++){
                sum2[i]+=maze[j][i];
            }
        }
        for (int k=0;k<9;k++){
            for (int i=0;i<7;i+=3){
                for (int j=0;j<7;j+=3){
                    sum3[k]=cal(i,j);
                }
            }
        }
        int flag=1;
        for (int i=0;i<9;i++){
            if (sum1[i]!=45||sum2[i]!=45||sum3[i]!=45) flag=0;
        }
        for (int i=1;i<10;i++)
           if (vis[i]!=9) flag = 0;
        if (flag) puts("Right");
        else puts("Wrong");
    }
    return 0;
}
