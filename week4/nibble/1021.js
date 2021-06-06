/**
 * initialize your data structure here.
 */
var MinStack = function () {
    this.stack = [];
    this.minStack = [];
    this.minValue = Infinity;
};

/** 
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function (val) {
    this.stack.push(val);
    this.minValue = Math.min(this.minValue, val);
    this.minStack.push(this.minValue);

};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
    this.stack.pop();
    this.minStack.pop();

    if (this.minStack.length > 0) {
        this.minValue = this.minStack[this.minStack.length - 1];
    } else {
        this.minValue = Infinity;
    }
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
    return this.stack[this.stack.length - 1];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
    return this.minValue;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(val)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */