// Harsh Rastogi
// print longest common subsequence.


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

void solve(ll ts) {
    string t;
    cin >> s >> t;
    n= s.size(),m=t.size();

    ll dp[n+1][m+1];

    f(i,0,n+1){
        f(j,0,m+1){
            if(i==0 || j==0){
                dp[i][j]=0;
            }else if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }

    cout<<dp[n][m]<<"\n";

    ll i=n,j=m;
    string temp;
    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            // cout<<temp<<"\n";
            temp.push_back(s[i-1]);
            i--;j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            i-=1;
        }else{
            j-=1;
        }
    }
    reverse(all(temp));
    cout<<temp<<"\n";
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
