// 멀쩡한 사각형 : https://www.welcomekakao.com/learn/courses/30/lessons/62048
// #유클리드 호제법 #최대공약수

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

// '반복되는 블록'의 크기는 '(w / gcd) x  (h / gcd)' 이다.
// '반복되는 블록'의 선이 지나가는 사각형의 갯수는 '블록의 가로 크기 + 블록의 세로 크기 - 1' 이다.
long long solution(int w,int h)
{ 
    int gcd = GCD(w, h);
	long long answer = (long long)w * h;
    answer -= (w + h) - gcd;    // = (w/gcd + h/gcd - 1) * gcd

	return answer;
}