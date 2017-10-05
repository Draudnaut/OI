/*************************************************************************
	> File Name: main.cpp
	> Author:henhimicons 
	> Mail:kanberra354562007@gmail.com 
	> Created Time: 2017年10月05日 星期四 21时44分44秒
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> num;
pair<ll,ll> frab;
//first for son,second for mother.
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
pair<ll,ll> frabadd(pair<ll,ll> a1,pair<ll,ll> a2)
{
    pair<int,int> ans;
    ans.second = a1.second;
    ans.first = a1.first+a2.first;
    ll factor = gcd(ans.first,ans.second);
    ans.first/=factor;
    ans.second/=factor;
    return ans;
}
void fillnum(string name)
{
    int len = name.length();
    ll tmp=0;
    for (int i=1;i<len;i++)
    {
        if (isdigit(name[i])) tmp=tmp*10+name[i]-'0';
        else {
            num.push_back(tmp);
            tmp=0;
        }
    }
}
void cal()
{
    int size = num.size();
    frab.first=1;
    frab.second=num[size-1];
    for (int i = size-2;i>=0;i--)
    {
        pair<ll,ll> tf;
        tf.second = frab.second;
        tf.first = frab.second*num[i];
        frab = frabadd(tf,frab);
        swap(frab.first,frab.second);
    }
}
void refill(string name)
{
    ll frav[2];
    int index = 0;
    memset(frav,0,sizeof(frav));
    int len = name.length();
    for (int i=0;i<len;i++){
        if (isdigit(name[i])){
            frav[index]=frav[index]*10+name[i]-'0';
        }else{
            index++;
        }
    }
    frab.first=frav[0];
    frab.second=frav[1];
}
void resolve(){
    num.push_back(frab.first/frab.second);
    ll t1 = frab.first%frab.second;
    frab.first=t1;
    swap(frab.first,frab.second);
    while (frab.second!=0){
        num.push_back(frab.first/frab.second);
        t1 = frab.first%frab.second;
        frab.first=t1;
        swap(frab.first,frab.second);
    }
}
void printresult()
{
    int len = num.size();
    if (len==1){printf("[%lld]\n",num[0]);return;}
    printf("[");
    printf("%lld;",num[0]);
    for (int i=1;i<len-1;i++)
    {
        printf("%lld,",num[i]);
    }
    printf("%lld]\n",num[len-1]);
}
int main()
{
    #ifdef local
        freopen("test.in","r",stdin);
        freopen("test.out","w",stdout);
    #endif
    ios::sync_with_stdio(false);
    string name;
    while (getline(cin,name)){
        num.clear();
        if (name[0]=='['){
            fillnum(name);
            if (name.length()>4) cal();
            else {frab.first=1;frab.second=num[0];}
            swap(frab.first,frab.second);
            if (frab.first%frab.second==0) printf("%lld\n",frab.first/frab.second);
            else printf("%lld/%lld\n",frab.first,frab.second);
        }else{
            refill(name);
            ll fac = gcd(frab.first,frab.second);
            frab.first/=fac;
            frab.second/=fac;
            resolve();
            printresult();
        }
    }
    return 0;
}
