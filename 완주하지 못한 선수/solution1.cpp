// 완주하지 못한 선수 : https://www.welcomekakao.com/learn/courses/30/lessons/42576
// # 해시

#include <string>
#include <vector>
#include <unordered_map>
#include <stdexcept>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> completionMap;
    completionMap.reserve(completion.size());

    for(const string& name : completion) {
        if(!completionMap.insert(pair<string,int>(name, 1)).second) {   // insert 실패 == 같은 key값 존재
            ++completionMap[name]; 
        }        
    }

    string answer = "";

    for(const string& name : participant) {
        try{
            if(--completionMap.at(name) <= 0) {
                completionMap.erase(name);
            }
        }
        catch (const out_of_range& oor) {
            answer = name;
        }
    }
    
    return answer;
}