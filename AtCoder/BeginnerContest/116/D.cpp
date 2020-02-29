#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long 
#define pii pair<int, int>

int K, N, t, d;
ll ans = 0;
vector<pii> vec, Eat, notEat;

void print_Eat(){
    for(auto itr = Eat.begin(); itr!=Eat.end(); itr++){
        printf("(%d,%d)\n",itr->first,itr->second);
    }
}

void print_not_Eat(){
    for(auto itr = notEat.begin(); itr!=notEat.end(); itr++){
        printf("(%d,%d)\n",itr->first,itr->second);
    }
}

int EatKind(vector<pii> Eat){
    set<int> KindSet;
    for(auto itr=Eat.begin(); itr!=Eat.end(); itr++){
        KindSet.insert(itr->second);
    }
    return KindSet.size();
}

ll calc_ans(){
    ll buff = 0; 
    for(auto itr = Eat.begin(); itr!=Eat.end(); itr++){
        buff += itr->first;
    }
    buff += pow(EatKind(Eat),2);
    return buff;
}

void print_vectors(){
    cout << "Eat" << endl;
    print_Eat();
    cout << "Not Eat" << endl;
    print_not_Eat();
    cout << calc_ans() << endl;
}


bool calc_diff(pii buff_Eat, pii buff_not_Eat){
    int diff = buff_not_Eat.first - buff_Eat.first;
    diff -= 2*EatKind(Eat)-1;
    if(diff > 0) return true;
    else return false;
}

void solve(){
    // print_vectors();

    pii buff_Eat = Eat.back();
    pii buff_not_Eat = notEat.front();
    // printf("Compare (%d,%d) and (%d,%d)\n",buff_Eat.first,buff_Eat.second,buff_not_Eat.first,buff_not_Eat.second);

    while(calc_diff(buff_Eat, buff_not_Eat)){
        Eat.pop_back();
        notEat.erase(notEat.begin());
        
        Eat.push_back(buff_not_Eat);
        notEat.push_back(buff_Eat);

        sort(Eat.begin(), Eat.end());
        reverse(Eat.begin(), Eat.end());
    }

    // print_vectors();
    cout << calc_ans() << endl;
}

int main(){
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> t >> d;
        vec.push_back(make_pair(d, t));
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    set<int> s;

    for(auto itr = vec.begin(); itr != vec.end(); itr++){
        auto it = s.find(itr->second);
        if (it == s.end()) {
            Eat.push_back(*itr);
            s.insert(itr->second);
        }else{
            notEat.push_back(*itr);
        }
        if(EatKind(Eat)==K)break;
    }

    while(Eat.size() < K){
            pii buff = notEat.front();
            Eat.push_back(buff);
            notEat.erase(notEat.begin());
        }
    solve();
}
