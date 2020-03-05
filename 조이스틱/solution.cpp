// 조이스틱 : https://programmers.co.kr/learn/courses/30/lessons/42860
// #탐욕법(Greedy)

#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int rContA = 0; // 첫 번째 위치 기준 오른쪽의 연속된 A 갯수
    int lContA = 0;  // 첫 번째 위치 기준 왼쪽의 연속된 A 갯수

    for(size_t i = 1; i < name.size(); ++i) {
        if(name[i] == 'A')
            ++rContA;
        else
            break;
    }
    for(size_t i = name.size() - 1; i > 0; --i) {
        if(name[i] == 'A')
            ++lContA;
        else
            break;
    }

    int answer = name.size() - 1;
    if(rContA + lContA > 0) {
        answer -= rContA > lContA ? rContA : lContA;
    }
    else {
        int maxContA = 0;
        int s = 0;
        int e = 0;
        for(size_t i = 1; i < name.size() - 1; ++i) {
            if (name[i] == 'A') {
                if (name[i - 1] != 'A') {
                    s = i;
                }
                if (name[i + 1] != 'A') {
                    e = i;
                    int contA = e - s + 1;
                    if(maxContA < contA) {
                        maxContA = contA;

                        int r = s - 1;
                        int l = name.size() - e - 1;

                        answer = l < r ? l : r;
                        answer += r + l;
                    }
                }
            }
        }
        answer = answer < name.size() - 1 ? answer : name.size() - 1;
    }

    for(char ch : name) {
        int gap = ch - 'A';
        gap = gap < 26 - gap ? gap : 26 - gap;

        answer += gap;
    }

    return answer;
}