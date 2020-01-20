// 짝수와 홀수 : https://www.welcomekakao.com/learn/courses/30/lessons/12937

#include <string>

using namespace std;

string solution(int num) {
    return (num & 1) ? "Odd" : "Even";
}