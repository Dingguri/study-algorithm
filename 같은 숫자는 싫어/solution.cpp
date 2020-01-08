// 같은 숫자는 싫어 : https://www.welcomekakao.com/learn/courses/30/lessons/12906

#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int pre = -1;
    for(const auto& value : arr){
        if(pre != value){
            pre = value;
            answer.push_back(value);
        }
    }
    return answer;
}