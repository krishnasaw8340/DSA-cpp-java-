/*
 Given a string, the task is to reverse the order of the words in the given string. 

Examples:

Input: s = geeks quiz practice code  
Output: s =code practice quiz geeks

*/ 

import java.util.*;
class ReverseString {

    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String str = "";
        System.out.println("Enter the String");
        str = sc.nextLine();

        String[] words = str.split(" ");
        String res = " ";

        System.out.println("The Reverse string is : ");
        for (int i=words.length-1; i>=0; i--)
        {
            res += words[i] + " ";
        }
        System.out.print(res);
    }
}
