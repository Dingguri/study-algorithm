// 문자열 압축 : https://www.welcomekakao.com/learn/courses/30/lessons/60057

#include <string>

using namespace std;

inline void CutUnit(string& ret, int cnt, string unitStr) {
    if (cnt > 1)
        ret += to_string(cnt);
    ret += unitStr;
}

int solution(string s) {
    int answer = s.size();
    for(int unit = 1; unit <= s.size() / 2; ++unit) {
        int cnt = 1;
        string unitStr;
        string ret = "";
        size_t i;
        for(i = unit; i < s.size() - unit + 1; i += unit) {
            unitStr = s.substr(i - unit, unit);
            if(s.compare(i, unit, unitStr) == 0) {
                ++cnt;
            }
            else {
                CutUnit(ret, cnt, unitStr);
                cnt = 1;
            }
        }
        CutUnit(ret, cnt, unitStr);
        if(i < s.size())
            ret += s.substr(i, s.size() - i);
        
        answer = ret.size() < answer ? ret.size() : answer;
    }
    
    return answer;
}