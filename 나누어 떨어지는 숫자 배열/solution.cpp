// 나누어 떨어지는 숫자 배열 : https://www.welcomekakao.com/learn/courses/30/lessons/12910

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(const auto& value : arr){
        if(value % divisor == 0) answer.push_back(value);
    }
    
    answer.empty() ? answer.push_back(-1) : sort(answer.begin(), answer.end());

    return answer;
}