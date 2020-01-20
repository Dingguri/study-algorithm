// 평균 구하기 : https://www.welcomekakao.com/learn/courses/30/lessons/12944

#include <vector>
#include <numeric>

using namespace std;

double solution(vector<int> arr) {
    return (double)accumulate(arr.begin(), arr.end(), 0) / arr.size();
}
