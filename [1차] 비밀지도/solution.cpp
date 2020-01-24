// [1차] 비밀지도 : https://www.welcomekakao.com/learn/courses/30/lessons/17681

#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> answer(n, "");
	int b;
	for (int i = 0; i < n; ++i) {
		b = arr1[i] | arr2[i];
		for (int j = n - 1; j >= 0; --j) {
			answer[i] += b & (1 << j) ? '#' : ' ';
		}
	}

	return answer;
}