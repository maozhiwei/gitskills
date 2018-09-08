#include <iostream>

using namespace std;
//有N件物品和一个容量为V的背包。第i件物品的费用是c[i]，价值是w[i]。求解将哪些物品装入背包可使价值总和最大。
//F[i,v]:前i件物品放入大小为v的背包中的最大价值
//那么状态转移方程为 F[i,j]=max{F[i-1,v],F[i-1,v-c[i]]+w[i]};


//P06 分组背包
//P05 二维背包：两个背包，每个物品要放入两个背包中 F[i][v][u]= max{f[i-1][v][u],f[i-1][v-c1[i][u-c2[i]]]+w[i]}


//P04 01，完全，多重组合

//P03 多重背包问题：每个物品可以取K[i]次，将k[i]分为1,2,4,8,16
//P02完全背包问题，每个物品可以取多次，去掉性价比差的物品
/*
int main(){
    int n,v;
    cin>>n>>v;
    int c[n+1],w[n+1];
    int i=1;
    int j=1;
    while(i<=n){
        cout<<"input:";
        cin>>c[i]>>w[i];
        i++;
    }
    int f[v+1]={0};
    for(i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            if(j<c[i])f[j]=f[j];
            else if(f[j]>f[j-c[i]]+w[i]){
                f[j] = f[j];

            }
            else{
                f[j]=f[j-c[i]]+w[i];
            }
            cout<<j<<" "<<f[j]<<endl;
        }
    }
    cout<<f[v]<<endl;
}
*/
/* 优化了空间复杂度
int main(){
    int n,v;
    cin>>n>>v;
    int c[n+1],w[n+1];
    int i=1;
    int j=1;
    while(i<=n){
        cout<<"input:";
        cin>>c[i]>>w[i];
        i++;
    }
    int f[v+1]={0};
    for(i=1;i<=n;i++){
        for(int j=v;j>0;j--){
            if(j<c[i])f[j]=0;/?
            else if(f[j]>f[j-c[i]]+w[i]){
                f[j] = f[j];

            }
            else{
                f[j]=f[j-c[i]]+w[i];
            }
            cout<<j<<" "<<f[j]<<endl;
        }
    }
    cout<<f[v]<<endl;

}
*/
/* 最基本的01背包 空间复杂度为O(NV)
int main()
{   int n,v;
    cin>>n>>v;
    int c[n+1],w[n+1];
    int i=1;
    int j=1;
    while(i<=n){
        cin>>c[i]>>w[i];
        i++;
    }
    int f[n+1][v+1] = {0};
    for(i=0;i<=n;i++){
        for(j=0;j<v;j++){
            f[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=v;j>0;j--){
            if(j<c[i]) break;
            if(f[i-1][j]>f[i-1][j-c[i]]+w[i])
                f[i][j] = f[i-1][j-1];
            else
                f[i][j] =f[i-1][j-c[i]]+w[i];

            cout<<i<<" "<<j<<" "<<f[i][j]<<endl;
        }
    }
    return 0;
}
*/
