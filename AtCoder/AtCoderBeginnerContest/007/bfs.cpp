#include <iostream>
#include <queue>
using namespace std;

int R, C, sx, sy, gx, gy, curx, cury, buffx, buffy;
queue<int> Qx, Qy;
char board[51][51];
int table[51][51] = {};
int xdiff[4] = {-1, 0, 0, 1};
int ydiff[4] = {0, 1, -1, 0};

bool is_wall(int x, int y){
    return board[y][x] == '#';
}

int bfs(int sx, int sy, int gx, int gy){
    table[sy][sx] = 0;
    Qx.push(sx), Qy.push(sy);
    // cout << "push (" << sx << ", " << sy << ")" << endl;
    while(!Qx.empty()){
        curx = Qx.front(); cury = Qy.front();
        Qx.pop(), Qy.pop();
        for(int i = 0; i < 4; i++){
            buffx = curx + xdiff[i], buffy = cury + ydiff[i];
            if(!is_wall(buffx, buffy) && table[buffy][buffx] == -1){
                table[buffy][buffx] = table[cury][curx] + 1;
                Qx.push(buffx), Qy.push(buffy);
                // cout << "push (" << buffx << ", " << buffy << ")" << endl;
            }
        }
    }
    return table[gy][gx];
}

int main(){
    cin >> R >> C >> sy >> sx >> gy >> gx;

    for(int row = 1; row <= R; ++row){
        for(int col = 1; col <= C; ++col){
            cin >> board[row][col];
            table[row][col] = -1;
        }
    }

    cout << bfs(sx, sy, gx, gy) << endl;
}