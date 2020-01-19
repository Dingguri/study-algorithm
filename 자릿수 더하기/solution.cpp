// 자릿수 더하기 : https://www.welcomekakao.com/learn/courses/30/lessons/12931

using namespace std;

int solution(int n)
{
    int answer = 0;
    while(n > 0){
        answer += n % 10;
        n /= 10;
    }

    return answer;
}