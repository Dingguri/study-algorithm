// 2016 : https://www.welcomekakao.com/learn/courses/30/lessons/12901

#include <string>
#include <vector>
#include <array>

using namespace std;

string solution(int a, int b) {
    array<string, 7> day = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    array<int,12> monthDay = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int days = 0;
    for(int i = 0; i < a - 1; ++i){
        days += monthDay[i];
    }
    days += b;
    
    return day[(days - 1 + 5 ) % 7];
}