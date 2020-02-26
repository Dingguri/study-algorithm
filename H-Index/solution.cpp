// H-Index : https://programmers.co.kr/learn/courses/30/lessons/42747
// #정렬

#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end()); 

    int answer = 0;
    for(size_t i = 0; i < citations.size(); ++i) {
        int h = citations.size() - i;
        if(h <= citations[i]) {
            answer = h;
            break;
        }
    }

    return answer;
}