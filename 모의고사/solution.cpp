// 모의고사 : https://www.welcomekakao.com/learn/courses/30/lessons/42840
// #완전탐색

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<vector<int>> losers = { {1,2,3,4,5},
                          {2,1,2,3,2,4,2,5},
                          {3,3,1,1,2,2,4,4,5,5} };

    vector<int> correct(3, 0);
    for (int i = 0; i < answers.size(); i++) {
        for (int j = 0; j < losers.size(); ++j)
            if (answers[i] == losers[j][i % losers[j].size()]) correct[j]++;
    }

    vector<int> answer;
    int max = *max_element(correct.begin(), correct.end());
    for (int i = 0; i < 3; i++) {
        if (correct[i] == max) answer.push_back(i + 1);
    }
    return answer;
}