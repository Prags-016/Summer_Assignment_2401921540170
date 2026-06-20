#include <iostream>
#include <queue>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:

    void push(int x) {

        q.push(x);

        int n = q.size();

        for(int i = 0; i < n - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {

        int val = q.front();
        q.pop();

        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {

    MyStack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top: " << st.top() << endl;

    cout << "Pop: " << st.pop() << endl;

    cout << "Top after pop: "
         << st.top() << endl;

    return 0;
}