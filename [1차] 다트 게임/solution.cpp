// 다트 게임 : https://www.welcomekakao.com/learn/courses/30/lessons/17682

#include <string>
#include <vector>
#include <cmath>
#include <numeric>
#include <unordered_map>

using namespace std;

int solution(string dartResult) {
    unordered_map<char,int> powers({{'S', 1}, {'D', 2}, {'T', 3}});
    unordered_map<char,int> options({{'#', -1}, {'*', 2}});

    vector<int> scores(3, 0);
    for (size_t i = 0, j = 0; i < dartResult.size(); ++i, ++j) {
        string strNum = "";
        while (isdigit(dartResult[i])) {
            strNum += dartResult[i];
            ++i;
        }
        scores[j] = atoi(strNum.c_str());
        scores[j] = pow(scores[j], powers[dartResult[i]]);

        if (i + 1 < dartResult.size() && !isdigit(dartResult[i + 1])) {
            ++i;
            int option = options[dartResult[i]];
            scores[j] *= option;       
            if (option == options['*'] && j > 0)
                scores[j - 1] *= option;
        }
    }

    int answer = accumulate(scores.begin(), scores.end(), 0);
    return answer;
}