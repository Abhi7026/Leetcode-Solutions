 class sortByNeed implements Comparator<Integer>{

    public int compare(Integer a , Integer b){
        int x=Integer.bitCount(a);
        int y=Integer.bitCount(b);
        System.out.println(x+" "+y);
        if(x==y)return a-b;
        return x-y;
    }
}
class Solution {
    public int[] sortByBits(int[] arr) {
        int index=0;
        List<Integer> list = new ArrayList<>();
        for(int i : arr)list.add(i);
        Collections.sort(list, new sortByNeed());
        int[] ans = new int[list.size()];
        for(int i : list){
            ans[index++]=i;
        }

        return ans;
    }
}