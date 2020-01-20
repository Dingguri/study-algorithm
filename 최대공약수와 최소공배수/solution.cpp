// 최대공약수와 최소공배수 : https://www.welcomekakao.com/learn/courses/30/lessons/12940
// #유클리드 호제법 #최대공약수 #최소공배수

#include <vector>

using namespace std;

// 최대공약수
int GCD(int a, int b) {
    int c;
	while(b) {
		c = a % b;
		a = b;
		b = c;
	}
    return a;
}

// 최소공배수
int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

vector<int> solution(int n, int m) {
    vector<int> answer = {GCD(n, m), LCM(n, m)};
    return answer;
}