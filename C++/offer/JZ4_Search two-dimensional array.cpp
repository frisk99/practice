class Solution {
public:
    bool Find(int target, vector<vector<int> >& array) {
        // write code here
        int m= array[0].size();
        int n = array.size();
        int i=0,j=m-1;
        while(i <n && j >=0){
            if(array[i][j] == target) return true;
            else if( array[i][j] > target ) j--;
            else {
                i++;
            }
        }
        return 0;
    }
};
