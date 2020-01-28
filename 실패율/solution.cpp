// 실패율 : https://www.welcomekakao.com/learn/courses/30/lessons/42889

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    for(int i = 1; i < N + 1; ++i) {
        answer.push_back(i);
    }

    vector<int> stayUser(N + 2, 0); // 각 스테이지에 머물러 있는 사용자, N + 1은 마지막 스테이지를 클리어한 사용자
    for(int stage : stages) {
        ++stayUser[stage];
    }
    
    vector<int> reach(N + 1, 0);
    int sum = 0;
    for(int i = 1; i < N + 1; ++i) {
        reach[i] = stages.size() - sum;
        sum += stayUser[i];
    }

    sort(answer.begin(), answer.end(), [&, stayUser, reach](int first, int second) {
        long long weightFirst = (long long)stayUser[first] * reach[second];
        long long weightSecond = (long long)stayUser[second] * reach[first];
        if(weightFirst == weightSecond) {
            return first < second;
        }
        else {
            return weightFirst > weightSecond;
        }
    });

    return answer;
}