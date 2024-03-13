package DSA;

import java.util.Arrays;

class Play {
 
    static int runner(int arr[], int k)
    {
        System.out.println(Arrays.stream(arr).max());
        return -1;
    }
 
    /* Driver function to check for above functions*/
    public static void main (String[] args) {
        int arr[] = {-10,-5,0,3,7};
        int k = 3;
        System.out.println(runner(arr, k));
    }
}