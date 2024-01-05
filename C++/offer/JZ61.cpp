class Solution {
public:
    bool IsContinuous(vector<int>& numbers) {
        // write code here
        if( numbers.size() != 5) return false;
        sort(numbers.begin(), numbers.end());
        int idx = 0;
        while (idx < numbers.size() && !numbers[idx]) idx++;
        for(int i = idx ; i< numbers.size()-1 ;i++){
            if(numbers[i+1] == numbers[i] ) return false;
        }
        return numbers[numbers.size()-1] - numbers[idx] <=4;

    }
};