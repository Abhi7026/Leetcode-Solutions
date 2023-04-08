class MinStack {
public:
	stack<int> s;
	multiset<int> s1;
	MinStack() {
	
}

void push(int val) {
    s.push(val);
    s1.insert(val);
}

void pop() {
    int tp=s.top();
    auto x=s1.find(tp);
    s1.erase(x);
    s.pop();
}

int top() {
    return s.top();
}

int getMin() {
    auto x= s1.begin();
    return *x;
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