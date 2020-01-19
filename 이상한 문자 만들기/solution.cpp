// 이상한 문자 만들기 : https://www.welcomekakao.com/learn/courses/30/lessons/12930

#include <string>

using namespace std;

string solution(string s) {
    string answer = "";
    size_t idx = 0;
    for(char ch : s){
        if(ch == ' ') {
            answer += ' ';
            idx = 0;
        }
        else {
            answer += (idx & 1) ? tolower(ch) : toupper(ch);            
            ++idx;
        }
    }

    return answer;
}