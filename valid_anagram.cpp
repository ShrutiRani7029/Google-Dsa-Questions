#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    if (n != m) {
        cout << "false" << endl;
        return 0;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
        cout << "true" << endl;
    else
        cout << "false" << endl;

}
