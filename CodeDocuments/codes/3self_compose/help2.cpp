#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int a[N],s[N];
vector<int>alls;
vector<pair<int ,int >>add,query;
int find(int x){
    int l=0,r=alls.size()-1;
    while(l<r) {
       int  mid=l+r>>1;
        if(alls[mid]>=x) r=mid;
        else l=mid+1;
    }
    return l+1;
}
int main(){
    int n,m;
    cin>>n>>m;
    while(n--){
        int x,c;
        cin>>x>>c;
        alls.push_back(x);
        add.push_back({x,c});
    }
    while(m--){
        int l,r;
        cin>>l>>r;
        alls.push_back(l);
        alls.push_back(r);
        query.push_back({l,r});
    }
    sort(alls.begin(),alls.end());
    alls.erase(unique(alls.begin(),alls.end()),alls.end());
    for(auto item:add){
        int x;
        x=find(item.first);
        a[x]+=item.second;
    }
    for(int i=1;i<=alls.size();i++){
        s[i]=s[i-1]+a[i];
    }
    for(auto item:query){
       int r=item.second,l=item.first;
       cout<<s[r]-s[l-1]<<endl;
    }
    return 0;
}