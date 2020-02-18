// 주식가격 : https://www.welcomekakao.com/learn/courses/30/lessons/42584
// #스택 #큐

#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    for (size_t i = 1; i < prices.size(); ++i) {
        int pre = i - 1;
        answer.push_back(prices.size() - 1 - pre);
        while (pre >= 0 && prices[pre] > prices[i]) {
            int gap = i - pre;
            if(gap < answer[pre]) answer[pre] = gap;
            --pre;
        }
    }
    answer.push_back(0);

    return answer;
}