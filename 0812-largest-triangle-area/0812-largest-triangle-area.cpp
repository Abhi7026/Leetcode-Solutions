class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
       double ans=0,area=0;
        double a=0,b=0,c=0,d=0,e=0,f=0;
        double s1=0,s2=0,s3=0,s=0;
        for(int i=0;i<points.size();++i)
        {
           for(int j=i+1;j<points.size();++j)
           {
               for(int k=j+1;k<points.size();++k)
               {
                    a=points[i][0];
                    b=points[i][1];
                    c=points[j][0];
                    d=points[j][1];
                    e=points[k][0];
                    f=points[k][1];
                    s1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
                    s2=sqrt((a-e)*(a-e)+(b-f)*(b-f));
                    s3=sqrt((c-e)*(c-e)+(d-f)*(d-f));
                    s=(s1+s2+s3)/2;
                    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
                   ans=max(ans,area);
               }
           } 
        }
        return ans; 
    }
};