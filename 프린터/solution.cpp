// 프린터 : https://www.welcomekakao.com/learn/courses/30/lessons/42587
// #스택 #큐

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    vector<int> tmp(priorities.begin(), priorities.end());
    sort(tmp.begin(), tmp.end(), std::greater<int>());

    int answer = 1;
    int idx = 0;
    while(true) {
        if(tmp[answer - 1] == priorities[idx]) {
            if(idx == location) 
                break;
            ++answer;
            priorities[idx] = -1;   // 탐색 대상에서 대외
        }
        idx = (idx + 1) % priorities.size();
    }

    return answer;
}