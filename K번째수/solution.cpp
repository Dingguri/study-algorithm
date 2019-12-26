// K번째수 : https://www.welcomekakao.com/learn/courses/30/lessons/42748
// #정렬

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for(const auto& command : commands){
        vector<int> tmp(array.begin() + command[0] - 1, array.begin() + command[1]);
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[command[2] - 1]);
    }

    return answer;
}