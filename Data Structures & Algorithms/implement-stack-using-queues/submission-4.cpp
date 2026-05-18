#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q1;
    queue<int> q2;

    MyStack() {
        
    }

    void push(int x) {
        q1.push(x);
    }

    int pop() {

        if (empty()) return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();
        q1.pop();

        swap(q1, q2);

        return topElement;
    }

    int top() {

        if (empty()) return -1;

        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }

        int topElement = q1.front();

        q2.push(q1.front());
        q1.pop();

        swap(q1, q2);

        return topElement;
    }

    bool empty() {
        return q1.empty();
    }
};