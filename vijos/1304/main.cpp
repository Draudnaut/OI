/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月04日 星期三 19时39分59秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
const int maxn = 100005;
char num[maxn];
char temp[maxn];
char num16[]="0123456789ABCDEF";
void numadd(int sys,int len)
{
    long long res = 0;
    long long opr1 = 0;
    long long opr2 = 0;
    int i=0;
    long long  index = 1;
    while (i<len){
        for (int j=0;j<16;j++){
            if (num16[j]==temp[i]) opr1+=index*j;
        }
        index=index*sys;
        i++;
    }
    i=0;
    index=1;
    while (i<len){
        for (int j=0;j<16;j++){
            if (num16[j]==num[i]) opr2 +=index*j;
        }
        i++;
        index=index*sys;
    }
    res = opr1+opr2;
    i=0;
    while (res){
        temp[i++]=num16[res%sys];
        res=res/sys;
    }
    temp[i]='\0';
    len = strlen(temp);
    strcpy(num,temp);
    reverse(num,num+i);
}

int main(int argc,char** argv)
{
    #ifdef local
        freopen("test.in","r",stdin);
    #endif
    int n;
    while (scanf("%d",&n)==1)
    {
        scanf("%s",num);
        int len = strlen(num);
        int step=0;
        int flag=0;
        for (;step<=30;step++){
            len = strlen(num);
            strcpy(temp,num);
            reverse(temp,temp+len);
            if (strcmp(temp,num)==0){
                flag=1;
                break;
            }else{
                numadd(n,len);
            }
        }
        if (flag==1) printf("STEP=%d\n",step);
        else puts("Impossible!");
    }
    return 0;
}
