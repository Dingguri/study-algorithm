// 카카오 프렌즈 컬러링북 : https://www.welcomekakao.com/learn/courses/30/lessons/1829

#include <vector>
#include <stack>
#include <tuple>
#include <stdexcept>

using namespace std;

int my[4] = {1, 0, -1, 0};
int mx[4] = {0, 1, 0, -1};

int DFS(tuple<int, int> pos, vector<vector<int>>& picture) {
    vector<vector<bool>> visited(picture.size(), vector<bool>(picture[0].size(), false));
    stack<tuple<int, int>> s;
    int y, x;

    s.push(pos);
    std::tie(y, x) = pos;
    visited[y][x] = true;
    int size = 1;

    while(!s.empty()) {
        std::tie(y, x) = s.top();
        s.pop();

        for(int i = 0; i < 4; ++i) {
            int ny = y + my[i];
            int nx = x + mx[i];
            try {
                if(!visited.at(ny).at(nx) && picture.at(ny).at(nx) == picture[y][x]) {
                    s.push(make_tuple(ny, nx));
                    visited[ny][nx] = true;

                    ++size;
                }
            }
            catch (std::out_of_range) {}
        }
        picture[y][x] = 0;
    }

    return size;
}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int numArea = 0;
    int maxSizeArea = 0;
    
    for(size_t y = 0; y < m; ++y) {
        for(size_t x = 0; x < n; ++x) {
            if(picture[y][x] != 0) {
                ++numArea;                
                int sizeArea = DFS(make_tuple(y, x), picture);
                if(maxSizeArea < sizeArea) 
                    maxSizeArea = sizeArea; 
            }
        }
    }

    vector<int> answer(2);
    answer[0] = numArea;
    answer[1] = maxSizeArea;
    return answer;
}