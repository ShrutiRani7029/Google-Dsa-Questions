#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>&nums){

int n=nums.size();
if(n<3)return 0;


int count=0,diff;
for(int i=0;i<n-2;i++){
    int diff=nums[i+1]-nums[i];

    for(int j=i+2;j<n;j++){
        if(nums[j]-nums[j-1]==diff)count++;
        else break;
    }

}
return count;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }

        cout<<fun(v)<<endl;
    }



}
