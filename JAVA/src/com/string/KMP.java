package com.string;

public class KMP {
    private static int[] failureFnKMP(char[ ] pattern){
        int m = pattern.length;
        int[] fail = new int[m];

        int j=1;
        int k=0;
        while(j<m){
            if (pattern[j]== pattern[k]) {
                fail[j]=k+1;
                j++;
                k++;
            } else if (k > 0) {
                k=fail[k-1];
            }else j++;
        }
        return fail;
    }

    public static void main(String[] args) {
        char[] a ={'a', 'b', 'a', 'b', 'c', 'd'};
        for(int b : KMP.failureFnKMP(a)){
            System.out.println(b);
        }
    }
}
