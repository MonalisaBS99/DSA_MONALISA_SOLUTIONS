class Solution {
public:
    string largestOddNumber(string num) {
        int max=-999;
    string res="";
        for(int i=0;i<num.size();i++)
        {
            if((num[i]-'0')%2!=0&&max<i)
            max=i;


        }
        if(max==-999)
        return res;
        else{
    for(int i=0;i<=max;i++)
    res.push_back(num[i]);

    }
     return res;
    }
};
