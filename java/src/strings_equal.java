class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        String tmp1 ="";
        String tmp2 ="";
        for(String s:word1){
            tmp1+=s;
        }
        for(String s:word2){
            tmp2+=s;
        }
        return tmp1.equals(tmp2);

    }
}