class Solution {
public:
    int maxArea(int h, int w, vector<int>& H, vector<int>& V) {
       const long long int mod = 1000000007;

        sort(H.begin(),H.end());
        sort(V.begin(),V.end());
        
        int hs = H.size();
        int vs = V.size();
        int hmax=max(h-H[hs-1],H[0]),vmax=max(w-V[vs-1],V[0]);
        for(int i=1;i<hs;i++){
            hmax=max(hmax,H[i]-H[i-1]);
        }
        for(int i=1;i<vs;i++){
            vmax=max(vmax,V[i]-V[i-1]);
        }
        cout<<vmax<<" "<<hmax<<"\n";
        
        return (int)(((long)hmax*vmax)%mod);
    }
};