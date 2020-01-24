// 서울에서 김서방 찾기 : https://programmers.co.kr/learn/courses/30/lessons/12919

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
	auto it = find(seoul.cbegin(), seoul.cend(), "Kim");
	int idx = distance(seoul.cbegin(), it);
	string answer = "김서방은 " + to_string(idx) + "에 있다";
	return answer;
}