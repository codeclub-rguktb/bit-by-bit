#include <iostream>
using namespace std;
const int N=1e7+2;
long long v[N];


int main()
{
    int n,q;
    cin>>n>>q;
    while(q--){
        int a,b,k;
        cin>>a>>b>>k;
      v[a]=v[a]+k;
        v[b+1]=v[b+1]-k;
    }
    for(int i=1;i<=n;i++)
        v[i]=v[i]+v[i-1];
    
    long long mx=-1;
    for(int i=1;i<=n;i++)
        mx=max(mx,v[i]);
    cout<<mx<<endl;

    return 0;
}