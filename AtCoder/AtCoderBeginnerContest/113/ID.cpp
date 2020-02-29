#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <queue>
using namespace std;

#define INF 1e9
#define MAXN 100000
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N, M, P, Y;

priority_queue<pii, vector<pii>, greater<pii> > prefs[MAXN+5];
set<int> ids;
string ans[MAXN+5];

string make_str(int pref_id, int i){
  string res(12,'0');

  string pref_id_str = to_string(pref_id);
  res.replace(6-pref_id_str.size(), pref_id_str.size(), pref_id_str);

  string i_str = to_string(i);
  res.replace(12-i_str.size(), i_str.size(), i_str);

  return res;
}

void encode(){
  for(auto pref_id : ids) {
    rep(i,prefs[pref_id].size()){
      pii tmp = prefs[pref_id].top();
      prefs[pref_id].pop();
      int city_id = tmp.second;
      // printf("(%d, %d)\n", city_id, tmp.first);
      ans[city_id] = make_str(pref_id, i+1);
    }
  }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  cin >> N >> M;

  rep(city_id,M){
    cin >> P >> Y;
    ids.insert(P);
    prefs[P].push(make_pair(Y,city_id));
  }

  encode();

  rep(city_id,M){
    cout << ans[city_id] << endl;
  }
}