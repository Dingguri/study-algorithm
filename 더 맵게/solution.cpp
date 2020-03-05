// 더 맵게 : https://programmers.co.kr/learn/courses/30/lessons/42626

#include <vector>
#include <algorithm>

using namespace std;

struct myGreater{
  bool operator()(const long& a,const long& b) const{
    return a > b;
  }
};

int solution(vector<int> scoville, int K) {
    int answer = 0;

    make_heap(scoville.begin(), scoville.end(), myGreater()); // min heap    
    int min;
    while((min = scoville.front()) < K) {
        if(scoville.size() == 1) {
            answer = -1;
            break;
        }
        pop_heap (scoville.begin(), scoville.end(), myGreater()); scoville.pop_back();      
        min = min + scoville.front() * 2;
        pop_heap (scoville.begin(), scoville.end(), myGreater()); scoville.pop_back();     
        scoville.push_back(min); push_heap(scoville.begin(), scoville.end(), myGreater());        

        ++answer;
    }

    return answer;
}