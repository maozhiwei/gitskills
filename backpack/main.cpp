#include <iostream>

using namespace std;
//��N����Ʒ��һ������ΪV�ı�������i����Ʒ�ķ�����c[i]����ֵ��w[i]����⽫��Щ��Ʒװ�뱳����ʹ��ֵ�ܺ����
//F[i,v]:ǰi����Ʒ�����СΪv�ı����е�����ֵ
//��ô״̬ת�Ʒ���Ϊ F[i,j]=max{F[i-1,v],F[i-1,v-c[i]]+w[i]};


//P06 ���鱳��
//P05 ��ά����������������ÿ����ƷҪ�������������� F[i][v][u]= max{f[i-1][v][u],f[i-1][v-c1[i][u-c2[i]]]+w[i]}


//P04 01����ȫ���������

//P03 ���ر������⣺ÿ����Ʒ����ȡK[i]�Σ���k[i]��Ϊ1,2,4,8,16
//P02��ȫ�������⣬ÿ����Ʒ����ȡ��Σ�ȥ���Լ۱Ȳ����Ʒ
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
/* �Ż��˿ռ临�Ӷ�
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
/* �������01���� �ռ临�Ӷ�ΪO(NV)
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
