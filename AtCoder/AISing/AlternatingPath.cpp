#include <iostream>
#include <queue>

using namespace std;

int H, W, ans = 0;
char M[405][405]; //M[y][x]
queue<int> Bx, By;

int Xdir[4] = {-1, 0, 1, 0};
int Ydir[4] = {0, 1, 0, -1};

bool isWhite(int x, int y){
    if(0 <= x && x <= W && 0 <= y && y <= H && M[y][x] == '.') return true;
    else return false;
}

bool isBlack(int x, int y){
    if(0 <= x && x <= W && 0 <= y && y <= H && M[y][x] == '#') return true;
    else return false;
}

int bfs(int Xblack, int Yblack, bool Visited[405][405]){
        int curX = Xblack, curY = Yblack, ans_buff = 0;
        queue<int> Qx, Qy;
        Visited[curY][curX] = true;
        for(int i = 0; i < 4; i++){
            int buffx = curX + Xdir[i], buffy = curY + Ydir[i];

            if(isWhite(buffx, buffy) && !Visited[buffy][buffx]){
                Qx.push(buffx); Qy.push(buffy);
                Visited[buffy][buffx] = true;
                ans_buff++;
                // printf("c1: (%d, %d) c2: (%d, %d)\n", Xblack, Yblack, buffx, buffy);
            }
        } 

        while(!Qx.empty()){
            curX = Qx.front(); curY = Qy.front();
            Qx.pop(); Qy.pop();

            for(int i = 0; i < 4; i++){
                int buffx = curX + Xdir[i], buffy = curY + Ydir[i];
                if(isBlack(buffx, buffy) && !Visited[buffy][buffx]) ans_buff += bfs(buffx, buffy, Visited);
                }
            }
    return ans_buff;
}

int main(){

    cin >> H >> W;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> M[i][j];
            if(M[i][j] == '#'){
                Bx.push(j);
                By.push(i);
            }
        }
    }

    while(!Bx.empty()){
        int Xblack = Bx.front();
        Bx.pop();
        int Yblack = By.front();
        By.pop();
        bool Visited[405][405] = {0}; //M[y][x]
        ans += bfs(Xblack, Yblack, Visited);
    }

    cout << ans << endl;
}
