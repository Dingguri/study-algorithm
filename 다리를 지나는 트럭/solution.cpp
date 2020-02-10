// 다리를 지나는 트럭 : https://www.welcomekakao.com/learn/courses/30/lessons/42583

#include <vector>
#include <queue>

using namespace std;

struct truck
{
    truck(int weight, int start) : weight(weight), start(start) {}
    int weight;
    int start;
};

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 1;
    int onWeight = 0;

    queue<truck> onBridge;
    int i = 0; // 다음에 다리를 건너야할 트럭
    while(i < truck_weights.size()) {
        if(!onBridge.empty()) {
            if (time - onBridge.front().start == bridge_length) {
                onWeight -= onBridge.front().weight;
                onBridge.pop();
            }
        }

        if(weight >= onWeight + truck_weights[i]) {
            onWeight += truck_weights[i];
            onBridge.push(truck(truck_weights[i], time));
            ++i;
            ++time;
        }
        else {
            time = onBridge.front().start + bridge_length;
        }
    }
    time += bridge_length - 1;

    return time;
}