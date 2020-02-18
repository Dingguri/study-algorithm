// 가장 큰 수 : https://programmers.co.kr/learn/courses/30/lessons/42746#
// #정렬

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    vector<string> strNumbers;
    strNumbers.reserve(numbers.size());
    for(int number : numbers) {
        strNumbers.push_back(to_string(number));
    }

    sort(strNumbers.rbegin(), strNumbers.rend(), [](string a, string b) {
        bool ret = false;
        size_t size = a.length() > b.length() ? a.length() : b.length();
        for(size_t i = 0; i <= size; ++i) { // [12, 121], [21, 212] 을 해결하기 위해 i <= size
            if(a[i % a.length()] != b[i % b.length()]) {
                ret = a[i % a.length()] < b[i % b.length()];
                break;
            }
        }
        return ret;
    });

    string answer = "";
    if(strNumbers[0][0] == '0') {
        answer = "0";
    }
    else {
        for(string str : strNumbers) {
          answer += str;
        }
    }

    return answer;
}