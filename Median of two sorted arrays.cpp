#include<bits/stdc++.h>
using namespace std;

double fun(vector<int>&n1,vector<int>&n2){

int n=n1.size();
int m=n2.size();
vector<int>ans;

for(int i=0;i<n;i++){
    ans.push_back(n1[i]);

}
for(int i=0;i<m;i++){
    ans.push_back(n2[i]);

}
///1,2,3
sort(ans.begin(),ans.end());
int k=ans.size();
double median;
if(k%2!=0)///odd
{
    median=ans[k/2];
}
else
{
    median=(ans[k/2]+ans[k/2-1])/2.00;
}
return median;


}
int main(){
int n,m;
cin>>n>>m;
vector<int>n1(n);
vector<int>n2(m);

for(int i=0;i<n;i++)cin>>n1[i];
for(int i=0;i<m;i++)cin>>n2[i];

cout<<fun(n1,n2);
}
