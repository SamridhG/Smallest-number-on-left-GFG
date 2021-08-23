class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        // code here
        stack<int>A;
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            while(!A.empty() && A.top()>=a[i])
            {
                A.pop();
            }
            if(A.empty())
            {
                res.push_back(-1);
            }
            else
            {
                res.push_back(A.top());
            }
            A.push(a[i]);
        }
        return res;
    }
};
