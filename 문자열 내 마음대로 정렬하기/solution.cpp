// 문자열 내 마음대로 정렬하기 : https://www.welcomekakao.com/learn/courses/30/lessons/12915

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    sort(strings.begin(), strings.end(), [&n](string first, string second) -> bool {
        return first[n] != second[n] ? first[n] < second[n] : first < second;
    });  

    return strings;
}