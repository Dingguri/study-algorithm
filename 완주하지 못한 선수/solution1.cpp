// 완주하지 못한 선수 : https://www.welcomekakao.com/learn/courses/30/lessons/42576
// #해시

#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_multiset<string> participantMultSet;
    participantMultSet.reserve(participant.size());

    for(const string& name : participant) {
        participantMultSet.insert(name);
    }

    for(const string& name : completion) {
        auto it = participantMultSet.find(name);
        participantMultSet.erase(it);
    }
    
    return *participantMultSet.begin();
}