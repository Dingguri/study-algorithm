// 핸드폰 번호 가리기 : https://www.welcomekakao.com/learn/courses/30/lessons/12948

#include <string>

using namespace std;

string solution(string phone_number) {
    size_t n = phone_number.size() - 4;
    phone_number.replace(phone_number.begin(), phone_number.begin() + n, n, '*');
    
    return phone_number;
}