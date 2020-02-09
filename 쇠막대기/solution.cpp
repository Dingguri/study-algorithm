// 쇠막대기 : https://www.welcomekakao.com/learn/courses/30/lessons/42585

#include <string>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    int ironRod = 0;
    for(size_t i = 0; i < arrangement.length() ; ++i) {
        if(arrangement[i] == '(') {
            if(arrangement[i + 1] == ')') {  // 레이저 
                answer += ironRod;
                ++i;
            }
            else {
                ++ironRod;                
            }
        }
        else {
            ++answer;
            --ironRod;
        }
    }

    return answer;
}