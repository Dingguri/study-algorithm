// 콜라츠 추측 : https://www.welcomekakao.com/learn/courses/30/lessons/12943

using namespace std;

int solution(int num) {
    int answer = -1;
    long long lln = num;
    for(int i = 0; i < 500; ++i) {
        if(lln == 1) {
            answer = i;
            break;
        }
        lln = (lln & 1) ? lln * 3 + 1 : lln / 2;
    }
    return answer;
}