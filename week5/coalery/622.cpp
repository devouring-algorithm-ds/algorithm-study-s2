// Time Complexity : O(1)

class MyCircularQueue {
private:
    int* Q;
    int size;
    int front;
    int rear; // Next position
    int length;
    int applyBounds(int v) {
        if(v < 0)
            return size + v;
        return v % size;
    }
    
public:
    MyCircularQueue(int k) {
        Q = new int[k];
        size = k;
        front = 0;
        rear = 0;
        length = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        Q[rear] = value;
        rear = applyBounds(rear + 1);
        length++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front = applyBounds(front + 1);
        length--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return Q[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return Q[applyBounds(rear - 1)];
    }
    
    bool isEmpty() {
        return length == 0;
    }
    
    bool isFull() {
        return length == size;
    }
};