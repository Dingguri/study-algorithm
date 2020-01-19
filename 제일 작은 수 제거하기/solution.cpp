// 제일 작은 수 제거하기 : https://www.welcomekakao.com/learn/courses/30/lessons/12935

#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    auto it = min_element(arr.begin(), arr.end());
    arr.erase(it, it + 1);
    
    return arr.empty() ? vector<int>({-1}) : arr;
}