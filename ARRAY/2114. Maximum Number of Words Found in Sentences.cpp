int countWords(string word)
{ int count=1;
    for(int i=0;i<word.size();i++) 
    {
        if(word[i]==' ')
        count++;
    }
    return count;
}
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=INT_MIN;
        for(int i=0;i<sentences.size();i++)
        {
            int c=countWords(sentences[i]);
            maxi=max(c,maxi);
        }
        return maxi;
    }
};
