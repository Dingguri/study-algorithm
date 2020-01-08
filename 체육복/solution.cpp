// 체육복 : https://www.welcomekakao.com/learn/courses/30/lessons/42862
// #탐욕법

#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> cnt(n + 1, 1);
    
    for(const auto idx : lost) --cnt[idx];
    for(const auto idx : reserve) ++cnt[idx];

    for(size_t i = 1; i <= n; ++i){
        if(cnt[i] == 2){
            if(i - 1 > 0 && cnt[i - 1] == 0){
                --cnt[i];
                ++cnt[i - 1];
            }
            else if(i + 1 <= n && cnt[i + 1] == 0){
                --cnt[i];
                ++cnt[i + 1];
            }   
        }
    } 

    int answer = 0;
    for(size_t i = 1; i <= n; ++i)
        if (cnt[i] > 0) ++answer;

    return answer;
}