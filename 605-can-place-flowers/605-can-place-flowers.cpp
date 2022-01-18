class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int l = flowerbed.size();
        for(int i=0;i<l;i++){
            if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==l-1||flowerbed[i+1]==0)){
                flowerbed[i]=1;n--;
            }
        }
        return n<1?true:false;
    }
};