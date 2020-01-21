// 행렬의 덧셈 : https://www.welcomekakao.com/learn/courses/30/lessons/12950

#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer(arr1.size(), vector<int>(arr1[0].size(), 0));    
    for(size_t y = 0; y < arr1.size(); ++y) {
        for(size_t x = 0; x < arr1[0].size(); ++x) {
            answer[y][x] = arr1[y][x] + arr2[y][x];
        }
    }

    return answer;
}