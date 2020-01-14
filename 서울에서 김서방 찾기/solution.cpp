// 서울에서 김서방 찾기 : https://programmers.co.kr/learn/courses/30/lessons/12919

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    for(size_t i = 0; i < seoul.size(); ++i){
        if(!seoul[i].compare("Kim")) {
            answer = "김서방은 " + to_string(i) + "에 있다";
            break;
        }
    }
    return answer;
}