/*
 * Runtime: 40 ms, faster than 13.32% of C++ online submissions 
 * Memory Usage: 17.3 MB, less than 5.79% of C++ online submissions 
 * */
class MinStack {
  private:
    vector<int> stack;
    multiset<int> min;
    int size;
  public:
    MinStack() {
      size=0;
    }

    void push(int val) {
      stack.push_back(val); // O(1)
      min.insert(val); // amortized O(1)
      ++size;
    }

    void pop() {
      int x = stack.back(); // O(1)
      stack.pop_back(); // O(1)

      auto it = min.find(x); // *****    O(log))    ****
      if(it != min.end()) min.erase(it); // amortized O(1)
    }

    int top() {
      return stack.back(); // O(1)
    }

    int getMin() {
      return *(min.begin()); // O(1)
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
