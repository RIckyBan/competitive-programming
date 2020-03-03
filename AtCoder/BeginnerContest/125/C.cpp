#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

set<int> st;

int N, k, A[MAXN], ans = 0;
bool flag;

// vi enum_div(int n)//nの約数を列挙
// {
// 	vector<int> ret;
// 	for(int i=1 ; i*i<=n ; ++i)
// 	{
// 		if(n%i == 0)
// 		{
// 			ret.push_back(i);
// 			if(i*i!=n)
// 			{
// 				ret.push_back(n/i);
// 			}
// 		}
// 	}
// 	return ret;
// }

// void solve(){
//     vi div1 = enum_div(A[0]);
//     vi div2 = enum_div(A[1]);

//     for(auto i: div1){
//         st.insert(i);
//     }

//     for(auto i: div2){
//         st.insert(i);
//     }

//     for(auto i: st){
//         // cout << i << endl;
//         k = 0;
//         flag = true;

//         rep(j, N){
//             if(A[j] % i != 0)
//                 k++;
//             if(k > 1){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag)
//             ans = max(ans, i);
//     }
//     cout << ans << endl;
// }

// 累積GCD


// セグ木

int main(){
    cin >> N;

    rep(i, N){
        cin >> A[i];
    }

    solve();
}
