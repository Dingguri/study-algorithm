// 문자열 다루기 기본 : https://programmers.co.kr/learn/courses/30/lessons/12918

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if(s.length() == 4 || s.length() == 6){
        for(char ch : s){
            if(!isdigit(ch)) return false;
        }
        return true;
    }

    return false;
}