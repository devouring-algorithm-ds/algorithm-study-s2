/*
 * Runtime: 20 ms, faster than 81.89% of C++ online submissions for Min Stack.
 * Memory Usage: 17.9 MB, less than 5.05% of C++ online submissions for Min Stack.
 */

class MinStack {
  public:
    int s1[30001];
    int s2[30001];
    int p1=0;
    int p2=0;

    MinStack() {}

    void push(int val) {
      s1[p1++]=val;
      if(p2==0 || val <= s2[p2-1]) 
        s2[p2++] = val;
    }

    void pop() {
      if(s1[p1-1] == s2[p2-1]) --p2;
      --p1;
    }

    int top() {
      return s1[p1-1];
    }

    int getMin() {
      return s2[p2-1];
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

#if 0
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
#endif
