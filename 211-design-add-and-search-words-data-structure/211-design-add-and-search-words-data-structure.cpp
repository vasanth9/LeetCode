class WordDictionary {
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        hash[word.length()].push_back(word);
    }
    
    bool search(string word) {
     auto x=hash[word.length()];
            for(auto y:x){
                if(isSame(y,word)) return true;
           
        }
        return false;
    }
    private:
    unordered_map<int,vector<string>> hash;
    bool isSame(string a, string b){
        int l=a.length();
        for(int i=0;i<l;i++){
            if(b[i]=='.')continue;
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
    
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */