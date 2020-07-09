/*Given a set of non-negative integers, and a value sum, determine a subset of the given set with sum equal to given sum.
Example:

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
Output: 
There is a subset (4, 5) with sum 9.

Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
Output:
There is no subset that add up to 30.*/


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
 
void print_vec(vi &a)
{
	fi(i,a.size())
	{
		cout<<a[i]<<" ";
	}
} 

/*void print_dptable(int m ,int n,bool dp[][])
{
    fe(i,0,m)
    {
        fe(j,0,n)
        {
            cout<<dp[i][j]<<"  ";
        }
        cout<<el;
    }
}*/

void subset(vi se,int sum,int n)
{
    int m,c,k,p,s;
    bool dp[n+1][sum+1];
    vi vec;
    //make first row of the table false
    fe(i,1,sum)
        dp[0][i]=false;
    //make the first column of the table true
    fe(i,0,n)
        dp[i][0]=true;
    fe(i,1,n)
    {
        fe(j,1,sum)
        {
            if(se[i-1]>j)
                dp[i][j]=dp[i-1][j];
            else
            {
                dp[i][j]=dp[i-1][j]||dp[i-1][j-se[i-1]];
            }
        }
    }
    if(dp[n][sum]==false)
        cout<<"No subset found!"<<el;
    else
    {
        int i=n;
        int j=sum;
        while(i>0 && j>0)
        {
            if(dp[i-1][j]==false)
            {
                vec.PB(se[i-1]);
                j=j-se[i-1];
                i--;
            }
            else
            {
                i--;
            }
        }
        cout<<"A subset found (";
        for(auto i=0;i<vec.size()-1;i++)
        cout<<vec[i]<<",";
        cout<<vec[vec.size()-1]<<")"<<el;
    }
    
}

int main() {
   // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int n,k,sum;
    cout<<"Enter the number of elements-->";
    cin>>n;
    vi se;
    cout<<"Enter the numbers --->"<<el;
    fi(i,n)
    {
        cin>>k;
        se.PB(k);
        
    }
    cout<<"Enter the target sum--->";
    cin>>sum;
    subset(se,sum,n);
   
    
    
}