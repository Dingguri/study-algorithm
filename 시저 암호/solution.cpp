// 시저 암호 : https://www.welcomekakao.com/learn/courses/30/lessons/12926

#include <string>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char ch : s) {
        if(ch != ' '){
            int s = isupper(ch) ? 'A' : 'a';
            ch = s + (ch - s + n) % 26;  
        }
        answer += ch;
    }
    
    return answer;
}