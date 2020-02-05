// 탑 : https://www.welcomekakao.com/learn/courses/30/lessons/42588
// #스택 #큐

#include <vector>
#include <stack>

using namespace std;

const int NONE = 0;

struct Tower {
    Tower(int i, int h) : i(i), h(h) {} 
    int i;  // heights 의 idx
    int h;  // 탑 높이
};

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    stack<Tower> s; // 검사한 탑 중. 수신 대상이 될 수 있는 탑들

    answer.push_back(NONE);    // 첫 번째, 탑은 항상 수신 대상이 없음
    s.push(Tower(0, heights[0]));
    for(size_t i = 1; i < heights.size(); ++i) {
        int receive = NONE;
        while (!s.empty()) {
            if (s.top().h > heights[i]) {
                receive = s.top().i + 1;
                break;
            }
            else {
                s.pop();
            }
        }
        s.push(Tower(i, heights[i]));
        answer.push_back(receive);
    }

    return answer;
}