#include <iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;
    
    /** Push element x onto stack. */
    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.empty();
    }
};

int main(int argc, const char * argv[]) {
    MyStack *obj = new MyStack();
    obj->push(2);
    obj->push(3);
    obj->push(1);
    int param_2 = obj->pop();
    int param_3 = obj->top();
    bool param_4 = obj->empty();
    
    cout << param_2 << " " << param_3 << " " << param_4 << endl;
    return 0;
}
