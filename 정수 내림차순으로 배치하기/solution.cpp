// 정수 내림차순으로 배치하기 : https://www.welcomekakao.com/learn/courses/30/lessons/12933

#include <string>
#include <algorithm>
#include <functional>

using namespace std;

long long solution(long long n) {    
    string s = to_string(n);
    sort(s.begin(), s.end(), std::greater<int>());
    long long answer = stoll(s);
    
    return answer;
}