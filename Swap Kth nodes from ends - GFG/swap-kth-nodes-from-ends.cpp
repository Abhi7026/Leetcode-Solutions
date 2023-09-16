//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.

Node *swapkthnode(Node* head, int N, int K)
{
    // Your Code here
    if (!head || !head->next || K>N || K==N-K+1)
        return head;
        
    Node* start=head, *end=head;
    Node* start_prev=NULL, *end_prev=NULL;
    
    int count_start=1;
    while(count_start<K){
        start_prev=start;
        start=start->next;
        count_start++;
    }
    
    int count_end=1;
    while(count_end<(N-K+1)){
        // if X is kth node from end then it is (N-K+1)th from start 
        //because we can not traverse LL in reverse
        end_prev=end;
        end=end->next;
        count_end++;
    }
    
    if(start_prev!=NULL){
        // this condition is for K=1
        start_prev->next=end;
    }
    else{
        head=end;
    }
    
    if(end_prev!=NULL){
        end_prev->next=start;
    }
    else{
        head=start;
    }
    swap(start->next, end->next);

    return head;
}
