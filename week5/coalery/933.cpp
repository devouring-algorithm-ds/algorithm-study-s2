#include <queue>

// Time Complexity : O(N)

class RecentCounter {
private:
    queue<int> Q;
    
public:
    RecentCounter() {}
    
    int ping(int t) {
        Q.push(t);
        while(Q.front() < t - 3000)
            Q.pop();
        int result = Q.size();
        return result;
    }
};