// 하샤드 수 : https://www.welcomekakao.com/learn/courses/30/lessons/12947

bool solution(int x) {
    int digitSum = 0;
    int tmp = x;
    while(tmp > 0) {
        digitSum += tmp % 10;
        tmp /= 10;
    }
    return (x % digitSum == 0);
}