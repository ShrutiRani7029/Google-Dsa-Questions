#include<bits/stdc++.h>
using namespace std;

vector<int>fun(vector<int>&v,int k){
vector<int>ans;
for(int i=0;i<v.size();i++){
    int m=k-v[i];
    for(int j=i+1;j<v.size();){
        if(v[j]==m)
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else j++;
    }

}
 return ans;

}


int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
vector<int>v(n);
for(int i=0;i<n;i++)cin>>v[i];
int target;
cin>>target;

vector<int>ans=fun(v,target);
for(int i=0;i<ans.size();i++)cout<<ans[i];
    }
}
