// 직사각형 별찍기 : https://www.welcomekakao.com/learn/courses/30/lessons/12969

#include <iostream>

using namespace std;

int main(void) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int m;
    cin >> n >> m;

    for(int y = 0; y < m; ++y) {
        for(int x = 0; x < n; ++x) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}