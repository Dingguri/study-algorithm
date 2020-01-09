// 문자열 내 p와 y의 개수 : https://www.welcomekakao.com/learn/courses/30/lessons/12916

#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    int pCnt = 0;
    int yCnt = 0;
    for_each(s.begin(), s.end(), [&pCnt, &yCnt](char ch) -> void {
        if(ch == 'p' || ch == 'P') ++pCnt;
        if(ch == 'y' || ch == 'Y') ++yCnt;
    });
    return pCnt == yCnt;
}