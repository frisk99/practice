class Solution {
    public int maxRepeating(String sequence, String word) {
        int len_w= word.length();
        int len_s =  sequence.length();
        if(len_w > len_s)
            return 0;
        if(sequence.equals(word))
            return 0;
        if(len_s==len_w && !sequence.equals(word))
            return 0;
        boolean flag =false;
        int res=0;
        int left=0;
        while(left <=len_s-len_w){
            if(word.equals(sequence.substring(left,left+len_w))){
                res++;
                left+=len_w;
            }else{
                left++;
            }
        }
        return res;
    }
}