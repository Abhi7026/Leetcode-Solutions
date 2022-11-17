class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
     int ar1= (C-A)*(D-B);
  int ar2= (G-E)*(H-F);
        
int total= ar1 + ar2 ; 
    
    
     int x1= min(C,G);
        
     int x2=max(A,E) ; 
    
     int y1= min(D,H);
            
     int y2= max(F,B);
    
    
        int a1= max(A,E);
        int a2=min(A,E); 
        int b1= max(B,F);
        int b2= min(D,H);
    
  
                    
 int over = (x1-x2)*(y1-y2);
    
    
    if( (x2>x1) || ( b1>b2))
    {
        over=0; 
    }
    return total-over; 
        
    
}   
};