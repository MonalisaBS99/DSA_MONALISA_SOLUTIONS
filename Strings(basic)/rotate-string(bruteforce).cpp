void rot(string &s)
{
    char c=s.front();
    s.erase(0,1);
    int pos=s.size();
    s.push_back(c);
}
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=1;
        if(s.size()!=goal.size())return false;
        if(s==goal)return true;
        while(s!=goal&&n<s.size())
        {
            rot(s);
            if(s==goal)return true;
            n++;
        }
        return false;
    }
};
