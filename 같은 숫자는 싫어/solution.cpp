// 같은 숫자는 싫어 : https://www.welcomekakao.com/learn/courses/30/lessons/12906

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    arr.erase(unique(arr.begin(), arr.end()),arr.end());
    return arr;
}