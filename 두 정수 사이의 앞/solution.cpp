// 두 정수 사이의 합 : https://www.welcomekakao.com/learn/courses/30/lessons/12912

#include <cstdlib>

using namespace std;

long long solution(int a, int b) {
    return static_cast<long long>((a + b) * (abs(a - b) + 1) / 2);
}