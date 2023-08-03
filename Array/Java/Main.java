import java.util.HashMap;

public class Main {
    public static int DistinctList(int[] arr) {
        HashMap<Integer, Integer> countMap = new HashMap<>();

        // Count occurrences of each element in the array
        for (int num : arr) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        int duplicates = 0;
        for (int count : countMap.values()) {
            if (count > 1) {
                duplicates += count - 1; // Subtract 1 to get the number of duplicate entries
            }
        }

        return duplicates;
    }

    public static void main(String[] args) {
        int[] input1 = {0, -2, -2, 5, 5, 5};
        System.out.println(DistinctList(input1));
        // Output: 3

        int[] input2 = {180, 2, 101, 4};
        System.out.println(DistinctList(input2));
        // Output: 8
    }
}