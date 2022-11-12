class MedianFinder {
public:
    priority_queue<int> pq1;
    priority_queue<int,vector<int>,greater<int>> pq2;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(pq1.empty())pq1.push(num);
        else if(num<=pq1.top()){
            if(pq1.size()<=pq2.size())pq1.push(num);
            else{
                pq2.push(pq1.top());
                pq1.pop();
                pq1.push(num);
            }
        }
        else if(pq2.empty())pq2.push(num);
        else{
            if(pq2.size()<=pq1.size())pq2.push(num);
            else{
                pq2.push(num);
                pq1.push(pq2.top());
                pq2.pop();
            }
        }
    }
    
    double findMedian() {
        if(pq1.size()==pq2.size())return (double)(pq1.top()+pq2.top())/2;
        else if(pq1.size()>pq2.size())return pq1.top();
        return pq2.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */