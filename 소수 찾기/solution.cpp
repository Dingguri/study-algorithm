// 소수 찾기 : https://programmers.co.kr/learn/courses/30/lessons/12921

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<bool> isPrimes(n + 1, true);
    fill_n(isPrimes.begin(), 2, false); // 0, 1 = false

    int notPrimeCnt = 1;    // 1 부터 n 사이의 소수의 개수임으로 1로 초기화
    for (size_t i = 2; i * i <= n; ++i) {
		if (isPrimes[i]) {
			for (int j = i * i ; j <= n; j += i) {
                if(isPrimes[j]) ++notPrimeCnt;
			    isPrimes[j] = false;
            }
        }
	}

    return n - notPrimeCnt;
}