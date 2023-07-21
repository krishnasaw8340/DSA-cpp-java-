package Stack;
import java.util.*;
public class   NearestGreaterRightJava {
    public static int[] 
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++)
        {
            arr[i] = sc.nextInt();
        }
        int[] nextGreaterToRight = nextGreaterRight(arr);

    }
    
}
