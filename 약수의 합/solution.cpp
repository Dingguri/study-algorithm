// 약수의 합 : https://www.welcomekakao.com/learn/courses/30/lessons/12928

int solution(int n) {
    int answer = 0;
    int i;    
    for(i = 1; i * i < n; ++i) {
        if(n % i == 0) {
            answer += i + n / i;    // 약수는 쌍으로 존재
        }
    }
    if(i * i == n) answer += i;
    
    return answer;
}