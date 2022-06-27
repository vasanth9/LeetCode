class Solution {
public:
    int minPartitions(string n) {
        int min=0;
        for(char x:n){
            if(x-'0'>min)min=x-'0';
        }
        return min;
    }
};