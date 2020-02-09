// 스킬트리 : https://www.welcomekakao.com/learn/courses/30/lessons/49993

#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;

    for (const string& skill_tree : skill_trees) {
        int next = 0;
        bool possible = true;
        for(char s : skill_tree) {
            int idx = skill.find(s);
            if(idx == next) {
                ++next;
            }
            else if(idx > next) {
                possible = false;
                break;
            }
        }
        if(possible) ++answer;
    }

    return answer;
}