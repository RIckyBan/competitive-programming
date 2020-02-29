    #include <iostream>
    #include <algorithm>

    using namespace std;

    int N, K;
    double ans = 0;
    int R[100+5];

    double calc(int K);

    int main(){
        cin >> N >> K;
        for(int i = 1; i <= N; ++i){
            cin >> R[i];
        }

        sort(R+1, R+1+N);

        ans = calc(K);

        printf("%.6f\n", ans);
    }

    double calc(int K){
        double rate = 0.0;
        if(K == 1){
            return (rate+R[N])/2.0;
        }
        else {
            for(int i = N-K+1; i <= N; ++i){
                rate = (rate+R[i])/2.0;
            }
        }
        return rate;
    }
