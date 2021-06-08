#include <vector>
#include <climits>

class MinStack {
private:
    vector<int> v;
    int cursor;
public:
    // Time Complexity : O(1)
    MinStack() {
        cursor = 0;
    }
    
    // Time Complexity : O(1)
    void push(int val) {
        if(cursor == v.size())
            this->v.push_back(val);
        else
            this->v[cursor] = val;
        cursor++;
    }

    // Time Complexity : O(1)
    void pop() {
        cursor--;
    }
    
    // Time Complexity : O(1)
    int top() {
        return this->v[cursor - 1];
    }
    
    // Time Complexity : O(N)
    int getMin() {
        int min = INT_MAX;
        for(int i=0; i<cursor; i++)
            if(v[i] < min) min = v[i];
        return min;
    }
};