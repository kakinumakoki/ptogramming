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
    while(1){
        int n;
        cin>>n;
        if(n==0) break;
        vector<int> a(n);
        rep(i,n) cin>>a[i];
        sort(a.begin(),a.end());
        int min_s=a[1]-a[0];
        for(int i=2;i<n;i++){
            min_s=min(min_s,a[i]-a[i-1]);
        }
        cout<<min_s<<endl;
    } 
}