// Harsh Rastogi
// Bit operations


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi(T) vector<T>
#define pr(i,j) pair<i,j>
#define all(vec) vec.begin(), vec.end()
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second
#define f(i,A,B) for(long long i=A;i<B;i++)
#define M 1000000007

// output
#define input(vec) for(auto &i:vec)cin>>i
#define output(vec) for(auto &i:vec){cout<<i<<" ";}cout<<"\n"
#define outputpair1(vec) for(auto &i:vec){cout<<"{"<<i.first<<" "<<i.second<<"} ";}cout<<"\n"
#define outputpair2(vec) for(auto &i:vec){cout<<i.first<<" "<<i.second<<"\n";}
#define google(i) cout<<"Case #"<<i<<": "

// Function
ll gcd(ll a, ll b) {if (a == 0) {return b;} return gcd(b % a, a);}
ll power(ll a, ll b) {
    //a ki power b
    ll ans = 1; ll mul = a;
    while (b > 0) {if (b & 1) {ans *= mul;} mul = mul * mul; b >>= 1;}
    return ans;
}
unsigned ll SetBits(unsigned ll n) {
    unsigned ll count = 0;
    while (n) {count += n & 1; n >>= 1;}
    return count;
}

// Code start
const ll N = 1e5;
ll n, m, k, num;
ll a, b, c, d;
string s;

void spiral(vector<vector<long long>>& matrix) {
    vector<ll> vec;
    ll top = 0, bottom = matrix.size() - 1, right = matrix[0].size() - 1, left = 0;
    ll dir = 0;
    while (top <= bottom && left <= right) {
        if (dir == 0) {
            for (ll i = left; i <= right; i++) {
                vec.push_back(matrix[top][i]);
            }
            top++; dir = 1;
        }
        else if (dir == 1) {
            for (ll i = top; i <= bottom; i++) {
                vec.push_back(matrix[i][right]);
            }
            right--; dir = 2;
        }
        else if (dir == 2) {
            for (ll i = right; i >= left; i--) {
                vec.push_back(matrix[bottom][i]);
            }
            bottom--; dir = 3;
        }
        else if (dir == 3) {
            for (ll i = bottom; i >= top; i--) {
                vec.push_back(matrix[i][left]);
            }
            left++; dir = 0;
        }
    }
    output(vec);
}

void solve(ll t){
    cin>>n;
    
    // to fing ith bit
    ll i = 0;
    cout<< ((n>>i)&1)<<"\n";
    

    // set ith bit
    cout<<(n|(1<<i))<<"\n";

    i=1;
    // clear ith bit
    cout<<(n^(1<<i))<<"\n";

    // clear right most set bit

    cout<<(n&(n-1))<<"\n";

    // only right most bit is active

    cout<<(n&(~(n-1)))<<"\n";


} 


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // your code goes here
    ll t = 1;
    cin >> t;
    // while(t--)solve();
    ll i = 0;
    f(i, 0, t) {
        solve(i + 1);
    }
    return 0;
}
