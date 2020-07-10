/* Maximum sum of a subsequence of an array with non-adjacent elements*/
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
const ll infl=0x3f3f3f3f3f3f3f3fLL;
const int infi=0x3f3f3f3f;
const ll mod = 1e9+7;
 

void ms()
{
    int n,ex_new,excl,incl,k;
    cin>>n;
    int a[n];
    fi(i,n)
    {
        cin>>k;
        a[i]=k;
    }
    incl=a[0];
    excl=0;
    fe(i,1,n-1)
    {
        ex_new=max(excl,incl);//current exclude is the max of prev include and prev exclude
        incl=excl+a[i]; //present include equal to previous exclude plus the current element(this is done because we cant take the adjac element)
        excl=ex_new;
    }
    cout<<"maximun sum of non adjacent elements is "<<max(excl,incl)<<el;

}

int main() {
    

    int t = 1;
    cin >> t;
    while(t--) {
      ms();
    }
}