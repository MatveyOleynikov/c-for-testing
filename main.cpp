#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
//afaefesfs


void fast() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
 
void solve(){
    return;
}
 
void test_beg(ll q){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> q;
}
 
void test_end(){
    fclose(stdout);
    freopen("CON", "w", stdout);
    ifstream fin1("output.txt", ios::binary);
    ifstream fin2("ex_output.txt", ios::binary);
    if (fin2 && fin2)
    {
        char ch1, ch2;
        bool result = true;
        while (fin1.get(ch1) && fin2.get(ch2))
        {
            if (ch1 != ch2)
            {
                result = false;
                break;
            }
        }
        if (result && !(fin1.get(ch1) || fin2.get(ch2)) || (ch1 == '\n' || ch2 == '\n'))
            cout << "OK" << endl;
        else
            cout << "WA" << endl;
    }
    else
        cout << "Error opening file!" << endl;
 
}
 
int main() {
    fast();
    ll q = 1;
    //test_beg(q);
    while (q--){
        ll t = 1;
        //cin >> t;
        while (t--){
            solve();
        }
    }
    //test_end();
    return 0;
}
