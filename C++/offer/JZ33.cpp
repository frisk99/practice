#include <vector>
class Solution {
public:
    vector<int> seq;
    bool VerifySquenceOfBST(vector<int> sequence) {
        if(sequence.empty()) return false;
        seq = sequence;
        return dfs(0,sequence.size()-1);
    }
    bool dfs(int l, int r){
        int k =  l;
        int root = seq[r];
        if( l >= r ) return true;
        while(k < r  && seq[k] < root) k++;
        for(int i= k ; i< r ;i ++){
            if(seq[i] < root) 
            return false;
        }
        return  dfs(l,k-1) && dfs(k,r-1);
        
        

    }
};
