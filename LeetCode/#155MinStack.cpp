#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> curStack, minStack;
public:
    void push(int x) {
        curStack.push(x);
        if(minStack.empty() || x <= getMin())
            minStack.push(x);
    }
    
    void pop() {
        if(curStack.top() == getMin())
            minStack.pop();
        curStack.pop();
    }
    
    int top() {
        return curStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

int main(int argc, const char * argv[]) {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << " ";
    minStack.pop();
    cout << minStack.top() << " ";
    cout << minStack.getMin() << endl;
    return 0;
}
