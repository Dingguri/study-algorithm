// 예산 : https://www.welcomekakao.com/learn/courses/30/lessons/12982

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    sort(d.begin(), d.end());

    int answer = d.size();
    int sum = 0;
    for(size_t i = 0; i < d.size(); ++i) {
        sum += d[i];
        if(sum > budget) {
            answer = i;
            break;
        }
    }

    return answer;
}