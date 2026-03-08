class Solution {
    public int minimumIndex(int[] capacity, int itemSize) {
        int minCapacity = Integer.MAX_VALUE;
        int index=-1;
        for(int i=0;i<capacity.length;i++){
            if(capacity[i]>=itemSize){
                if(capacity[i]<minCapacity){
                    minCapacity=capacity[i];
                    index=i;
                }
                
            }
        }
        return index;
        
        
    }
    public static void main(String[] args){
        int[] capacity={1,5,3,7};
        int itemSize=3;
        Solution obj = new Solution();
        int result = obj.minimumIndex(capacity, itemSize);
        System.out.println(result);
    }
}
