// x만큼 간격이 있는 n개의 숫자 : https://www.welcomekakao.com/learn/courses/30/lessons/12954

#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for(int i = 0; i < n; ++i) {
        answer.push_back(x * (i + 1));
    }
    
    return answer;
}