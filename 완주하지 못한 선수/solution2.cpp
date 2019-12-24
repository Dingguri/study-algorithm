// 완주하지 못한 선수 : https://www.welcomekakao.com/learn/courses/30/lessons/42576
// #정렬

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    string answer = participant[participant.size() - 1];
    for(size_t i = 0; i < completion.size(); ++i){
        if(participant[i].compare(completion[i])){
            answer = participant[i];
            break;
        }
    }  

    return answer;
}