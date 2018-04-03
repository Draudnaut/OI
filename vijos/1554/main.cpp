#include <bits/stdc++.h>
const int maxn=1e5+7;
using namespace std;
int n;
long long T;
int coin[maxn];
void quick_mul(){

}
void put_ans(int judge){
    if (judge==1){
        printf("0 %d",coin[0]+1);
        for (int i=0;i<n;i++){
            printf(" 0 %d",coin[i]+1);
        }
        puts("");
    }else{
        printf("%d 0",coin[0]+1);
        for (int i=0;i<n;i++){
            printf(" %d 0",coin[i]+1);
        }
        puts("");
    }
}
int main()
{    
    while (scanf("%d%lld",&n,&T)==2){
        for (int i=0;i<n;i++){
            scanf("%d",&coin[i]);
            coin[i]--;
        }
        while (T){
            if (T&1) quick_mul();
            T>>=1;
        }
        put_ans(T&1);
    }
    return 0;
}