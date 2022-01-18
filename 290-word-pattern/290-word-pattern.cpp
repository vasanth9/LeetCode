class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string>smap;
        map<string,char>pmap;
        vector<string>x;
    //https://www.geeksforgeeks.org/split-a-sentence-into-words-in-cpp/
     string word = "";
    for (auto z : s) 
    {
        if (z == ' ')
        {
            x.push_back(word);
            word = "";
        }
        else {
            word = word + z;
        }
    }
        x.push_back(word);
    int n=x.size();
    int p=pattern.length();
    if(n!=p)return false;
    for(int i=0;i<p;i++){
        if(smap.count(pattern[i])==0&&pmap.count(x[i])==0)
        {
            smap[pattern[i]]=x[i];
            pmap[x[i]]=pattern[i];
        }
        else if(smap[pattern[i]]==x[i]){}
        else return false;
    }
        return true;
    }
};