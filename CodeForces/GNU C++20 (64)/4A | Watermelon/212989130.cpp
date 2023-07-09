/*---    Author : amanloves69    ---*/
#include<bits/stdc++.h>
using namespace std;
 
 
/*------------------MAN------------------*/
#define fio ios::sync_with_stdio(false);cin.tie(0);
#define tc int t;cin>>t;while(t--)aman();
#define tcc aman();
#define ptc int t;cin>>t;while(t--)cout<<aman()<<'\n';
#define sfl(n) for (int i = 0; i < n; i++)
#define fl(i,l,n) for (int i = l; i < n; i++)
#define fll(i,l,n) for(int i = l; i <= n; i++)
#define sp <<' '
#define el <<'\n';
#define ff first
#define ss second
#define all(v) (v).begin(),(v).end()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define cinv(x) for(auto &i:x)cin>>i
#define coutv(x) for(auto i:x)cout<<i<<' '
 
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<pii,int> ppi;
typedef vector<pii> vpi;
typedef vector<ppi> vppi;
typedef map<int,int> mii;
typedef map<int,vi> mvi;
typedef map<pii,int> mpi;
typedef priority_queue<ppi,vppi,greater<ppi>> min_heap_ppi;
typedef priority_queue<ppi> max_heap_ppi;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
 
#define mod  1000000007
#define mod2 998244353
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(...) 42
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
/*------------------START----------------*/
 
 
 
void aman()
{    
    int n;
    cin >> n ;
 
    if(n<4 or n&1)
    {cout<<"NO" el;return;}
    cout<<"YES" el;
}
signed main(){
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //freopen("error.txt", "w", stderr);
#endif
    fio
    tcc
    
    return 0;
}
/*
 
 
*/