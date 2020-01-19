// 정수 제곱근 판별 : https://www.welcomekakao.com/learn/courses/30/lessons/12934

#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    double sr = sqrt(n);
    answer = (sr == (int)sr) ? powl(sr + 1, 2) : -1;

    return answer;
}