#include<bits/stdc++.h>
using namespace std;
int t,n;
int main(){
  cin>>t;
  while(t--){
    cin>>n;
    int a[n],b[n],mina=INT_MAX,minb=INT_MAX;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mina=min(mina,a[i]);
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
        minb=min(minb,b[i]);
    }
    long long ans=0;
    for(int i=0;i<n;i++){
      ans+=max(a[i]-mina,b[i]-minb);
    }
    cout<<ans<<endl;
  }
  return 0;
}
