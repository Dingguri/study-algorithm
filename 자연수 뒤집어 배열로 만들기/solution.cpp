// 자연수 뒤집어 배열로 만들기 : https://www.welcomekakao.com/learn/courses/30/lessons/12932

#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(n > 0){
        answer.push_back(n % 10);
        n /= 10;
    }

    return answer;
}