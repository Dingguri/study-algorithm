// 가장 큰 수 : https://programmers.co.kr/learn/courses/30/lessons/42746
// #정렬

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    vector<string> strNumbers;
    strNumbers.reserve(numbers.size());
    for(int number : numbers)
        strNumbers.push_back(to_string(number));

    sort(strNumbers.begin(), strNumbers.end(), [](string a, string b) {
        return a + b > b + a;
    });

    string answer = "";    
    if(strNumbers[0] == "0") {
        answer = "0";
    }
    else {
        for(string str : strNumbers) {
          answer += str;
        }
    }

    return answer;
}