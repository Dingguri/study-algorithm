// 괄호 변환 : https://programmers.co.kr/learn/courses/30/lessons/60058

#include <string>
#include <algorithm>

using namespace std;

void Process(string& str) {
    if(str.empty())
        return;
    
    int t = 0;  // '균형잡한 괄호 문자열'을 판단하기 위해 사용
    bool isCorrect = true;
    for(size_t i = 0; i < str.length(); ++i) {
        if(str[i] == '(')
            ++t;
        else
            --t;

        if(t == 0) {
            string u = str.substr(0, i + 1);
            string v = str.substr(i + 1);
            Process(v);
            if(isCorrect) {                
                str = u + v;
            }
            else {
                str = '(' + v + ')';
                for(size_t j = 1; j < u.length() - 1; ++j) {
                    str += u[j] == '(' ? ')' : '(';                     
                }
            }
            break;
        }
        else if(t < 0)
            isCorrect = false;
    }
}

string solution(string p) {
    Process(p);

    return p;
}