// 124 나라의 숫자 : https://www.welcomekakao.com/learn/courses/30/lessons/12899

#include <string>
#include <algorithm>

using namespace std;

string solution(int n){
    string answer = "";
    while(n != 0){
        --n;
        answer += "124"[n % 3];                
        n /= 3;
    }
    reverse(answer.begin(), answer.end());
    
    return answer;
}