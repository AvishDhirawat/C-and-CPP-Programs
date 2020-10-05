#include <bits/stdc++.h>
using namespace std;

#define loop(i,s,e)     for(ll i=(s);i<(e);i++)
#define ull       unsigned long long int
#define ll        long long int
#define scan(any)       for(auto &i:any) cin>>i;
#define nl              cout<<'\n'
#define print(any)      for(auto i:any) cout<<i<<" "; nl;
#define rloop(i,s,e)    for(ll i=(s);i>=(e);i--)
#define pi 3.141592654
#define hell 1000000007
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)
#define input1(n) int n;cin>>n
#define input2(a, b) int a,b;cin>>a>>b
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define pii pair<int,int>
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)x.size()
#define set(a,n) memset(a,n,sizeof(a))
void calculation(int k,vi &v1,int sizw,int n,int &total)
{
if(k==sizw)
{
if(n==0)
total++;
return;
}

calculation(k+1,v1,sizw,n+v1[k],total);
calculation(k+1,v1,sizw,n,total);
}


int main()
{
int s;
cin>>s;
vi v(s);
scan(v);
int x=0;

for(int a=0;a<s;a++)
{
if(v[a]>x)
x=v[a];
}
int count=0;
while(x)
{
count++;
x=x>>1;
}
vi v1(s,0);
for(int a=0;a<s;a++)
{
while(v[a])
{
if(v[a]&1)
v1[a]++;
v[a]=v[a]>>1;
}
}
int b=0;
for(int a=0;a<s;a++)
{
v1[b]=count-2*v1[a];
if(v1[b]==0)
continue;
else
b++;
}
int total=0;
calculation(0,v1,b,0,total);
total-=1;
total=total*(1+s-b)+(1<<(s-b))-1;
    vi bin(count,0);
    int a=0;
    while (total > 0) {

        bin[a] = total &1;
        total = total>>1;
    a++;
    }
    for (int b = count - 1; b >= 0; b--)
        cout << bin[b];
return 0;
}
