package DSA;
 
class Play {
 
    static int runner(int arr[], int k)
    {
        int n = arr.length;
        int lo = 0, hi = n-1;
        while(lo < hi) {
            int mid = (lo + hi)/2;
            if(arr[lo] == mid) {
                return mid;
            } else if(arr[mid] < mid) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return -1;
    }
 
    /* Driver function to check for above functions*/
    public static void main (String[] args) {
        int arr[] = {-10,-5,0,3,7};
        int k = 3;
        System.out.println(runner(arr, k));
    }
}