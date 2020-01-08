// 가운데 글자 가져오기 : https://www.welcomekakao.com/learn/courses/30/lessons/12903

#include <string>

using namespace std;

string solution(string s) {
    int cnt = s.size() % 2 == 0 ? 2 : 1;
    return s.substr((s.size() - 1) / 2, cnt);
}