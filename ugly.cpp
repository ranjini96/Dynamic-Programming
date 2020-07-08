/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included.
Given a number n, the task is to find n’th Ugly number.

Examples:
Input  : n = 7
Output : 8

Input  : n = 10
Output : 12

Input  : n = 15
Output : 24

Input  : n = 150
Output : 5832*/



#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef pair<char,char> pc;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
typedef vector<string>  vs;
typedef set<int>        si;
typedef set<string>     ss;

#define PI 3.1415926535897932384626
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fi(i,b) for (int i = 0; i <b; i++)
#define fe(i,a,b) for(int i=a;i<=b;i++)
#define fr(i,a,b) for(int i=b-1;i>=a;i--)
#define w(i) while(i>0)
#define all(vec) vec.begin() vec.end()
#define sortall(x) sort(all(x))
#define el "\n"
#define trav(a,x) for(auto &a:x)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
ll infl=0x3f3f3f3f3f3f3f3fLL;
int infi=0x3f3f3f3f;
ll mod = 1e9+7;


void solve()
{
    int n,i2=0,i3=0,i5=0;
    cin>>n;
    ll vec[n];
    vec[0]=1;
    ll multiple_of_2=2,multiple_of_3=3,multiple_of_5=5;
    ll next_mul=1;
    fe(i,1,n-1)
    {
        next_mul=min(multiple_of_2,min(multiple_of_3,multiple_of_5));
        vec[i]=next_mul;
        if(next_mul==multiple_of_2)
        {
            i2++;
            multiple_of_2=vec[i2]*2;
        }
        if(next_mul==multiple_of_3)
        {
            i3++;
            multiple_of_3=vec[i3]*3;
        }
        if(next_mul==multiple_of_5)
        {
            i5++;
            multiple_of_5=vec[i5]*5;
        }
    }
    cout<<next_mul<<el;
    
}

int main() {

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
}