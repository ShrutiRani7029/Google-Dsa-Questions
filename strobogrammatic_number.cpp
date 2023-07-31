#include <bits/stdc++.h>
using namespace std;

bool snumber(string num) {
    unordered_map<char, char> mp{{'9', '6'}, {'6', '9'}, {'8', '8'}, {'1', '1'}, {'0', '0'}};
    string i = "";
    for (auto &it : num) {
        if (mp.count(it) == 0) return false; /// map me num ke element present hai ya nhi
       // cout<<mp[it] <<" "<<i<<endl;
        i = mp[it] + i;
        //cout<<i<<endl;
    }
    cout<<i<<" "<<num<<endl;
    return i == num;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;

    string num = to_string(n);

    if (snumber(num)) {
        cout << "true"<< endl;
    } else {
        cout << "false" << endl;
    }
    }
}
