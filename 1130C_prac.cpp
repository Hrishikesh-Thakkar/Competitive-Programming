#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 99999999;
const int maxn = 1e2+5;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
char G[maxn][maxn];
bool vis[maxn][maxn], vv[maxn][maxn];
int n, r1, c1, r2, c2, res;
struct P {
    int x, y;
    P() {}
    P(int _x, int _y) {
        x = _x, y = _y;
    }
};
vector<P> v1, v2;

bool check(int x, int y) {
    if(x < 1 || x > n || y < 1 || y > n || vis[x][y] || G[x][y] == '1')
        return false;
    return true;
}

void dfs(int x, int y) {
    vis[x][y] = 1;
    for(int i = 0; i < 4; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if(check(xx, yy))
            dfs(xx, yy);
    }
}

int main(){
    scanf("%d%d%d%d%d", &n, &r1, &c1, &r2, &c2);
    for(int i = 1; i <= n; i++) {
        scanf("%s", G[i]+1);
    }
    if(r1 == r2 && c1 == c2) {
        printf("0\n");
        return 0;
    }
    dfs(r1, c1);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(vis[i][j] == 1)
                v1.push_back(P(i, j)), vv[i][j] = 1;
    if(vis[r2][c2]) {
        printf("0\n");
        return 0;
    }
    dfs(r2, c2);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(vis[i][j] == 1 && !vv[i][j])
                v2.push_back(P(i, j));
    res = INF;
    for(int i = 0; i < v1.size(); i++) {
        for(int j = 0; j < v2.size(); j++) {
            int dis = (v1[i].x-v2[j].x)*(v1[i].x-v2[j].x) + (v1[i].y-v2[j].y)*(v1[i].y-v2[j].y);
            //printf("dis: %d\n", dis);
            res = min(res, dis);
        }
    }
    printf("%d\n", res);
    //for(int i = 0; i < v2.size(); i++)
    //   printf("%d %d\n", v2[i].x, v2[i].y);
    return 0;
}