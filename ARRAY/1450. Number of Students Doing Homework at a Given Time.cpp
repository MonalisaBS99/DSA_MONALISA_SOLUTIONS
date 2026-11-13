class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int num=0;
        for(int i=0;i<endTime.size();i++)
        {
            if(startTime[i]<=queryTime)
            {
                if(endTime[i]>=queryTime)
                num++;
            }
        }
        return num;
    }
};
