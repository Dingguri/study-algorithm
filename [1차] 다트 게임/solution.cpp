// 다트 게임 : https://www.welcomekakao.com/learn/courses/30/lessons/17682

#include <string>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;

int GetPower(char ch) {
    int power = 1;  // 'S'
    if (ch == 'D') power = 2;
    else if (ch == 'T') power = 3;
    return power;
}

int solution(string dartResult) {
    vector<int> scores(3, 0);
    for (size_t i = 0, j = 0; i < dartResult.size(); ++i, ++j) {
        string strNum = "";
        while (isdigit(dartResult[i])) {
            strNum += dartResult[i];
            ++i;
        }
        scores[j] = atoi(strNum.c_str());
        scores[j] = pow(scores[j], GetPower(dartResult[i]));

        if(i + 1 < dartResult.size() && !isdigit(dartResult[i + 1])) {
            ++i;
            int option = -1; // default '#'
            if(dartResult[i] == '*') {
                option = 2;
                if (j > 0) scores[j - 1] *= option;
            }            
            scores[j] *= option;
        }
    }

    int answer = accumulate(scores.begin(), scores.end(), 0);
    return answer;
}