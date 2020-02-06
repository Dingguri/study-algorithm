// 멀쩡한 사각형 : https://www.welcomekakao.com/learn/courses/30/lessons/62048

#include <cmath>

using namespace std;

long long solution(int w,int h)
{
    long long answer = 0;

    for(int x = 1; x < w; ++x) {
        long double y = (long double)h * x / w; // 부동 소수점 오류 방지를 위해 나누기 연산을 가장 마지막에 함
        answer += floorl(y);
    }
    answer *= 2;

	return answer;
}