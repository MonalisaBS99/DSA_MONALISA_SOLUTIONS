class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
     
        vector<vector<int>>res(n,vector<int>(n,0));
        int count=1;
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        while(top<=bottom&&left<=right)
{
    for(int i=left;i<=right;i++)
    {
        res[top][i]=count;
        count++;
    }
    top++;
    for(int i=top;i<=bottom;i++)
    {
    res[i][right]=count;
        count++;
    }
    right--;
    if(top<=bottom)
    {
    for(int i=right;i>=left;i--)
    {
          res[bottom][i]=count;
        count++;
    }
    bottom--;
    }
    if(left<=right){
    for(int i=bottom;i>=top;i--)
    {
        res[i][left]=count;
        count++;
    }
    left++;
    }
}
return res;
    
    }
};
