// 기능개발 : https://www.welcomekakao.com/learn/courses/30/lessons/42586

#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int maxWorkingDay = 0;
    for(size_t i = 0; i < progresses.size(); ++i) {
        int workingDay = ceil((100.0 - progresses[i]) / speeds[i]);
        if(maxWorkingDay < workingDay) {
            maxWorkingDay = workingDay;
            answer.push_back(1);
        }
        else {
            ++answer.back();
        }
    }

    return answer;
}