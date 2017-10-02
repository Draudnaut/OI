/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月02日 星期一 22时13分18秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
const int maxn = 10005;
char seq[maxn];
int main()
{
    #ifdef local
        freopen("test.in","r",stdin);
    #endif
    while (scanf("%s",seq)==1)
    {
        int index=0;
        int xishu=1;
        int sum=0;
        while (index<11){
            if(isdigit(seq[index])){
                sum=sum+xishu*(seq[index]-'0');
                xishu++;
            }
            index++;
        }
        int res = sum%11;
        if (res==10){
            if (seq[12]=='X') puts("Right");
            else{
                seq[12]='X';
                puts(seq);
            }
        }else{
            if (seq[12]==(char)(res+'0')) puts("Right");
            else{
                seq[12]=(char)(res+'0');
                puts(seq);
            }
        }
    }
    return 0;
}
