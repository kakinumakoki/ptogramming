#include<iostream>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<vector>
#include<string>
#include <iomanip>
#include <deque>
#include<list>
#include<cmath>
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
using ll=long long;
using P=pair<int,int>;
using P_S=pair<int,string>;
using P_D=pair<double,int>;
using T=tuple<int,int,char,ll,string>;

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0) break;
        int m=501,M=0;
        rep(i,n)
        {
            int sum=0;
            rep(j,5){
                int s;
                cin>>s;
                sum+=s;
            }
            m=min(m,sum);
            M=max(M,sum);
        }
        cout<<M<<" "<<m<<endl;
    }
}