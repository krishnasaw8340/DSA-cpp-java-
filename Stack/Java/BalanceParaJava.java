import java.util.*;
class BalanceParaJava{
    public static boolean balanceParan(String str)
    {
        Stack<Character> st = new Stack<>();
        for(char bracket: str.toCharArray())
        {
            if(bracket=='(' || bracket=='[' || bracket=='{')
            {
                st.push(bracket);
            }
            else if (bracket=='}' || bracket==']' || bracket==')')
            {
                if(st.empty())
                {
                    return false;
                }
                char top = st.peek();
                st.pop();
                if((bracket == ')' && top == '(') ||
                (bracket == '}' && top == '{') ||
                (bracket == ']' && top == '[')) {
                return true; 
            }
             else{
                    return false;
                }
            }
        }
        return st.empty();
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String:");
        String str = sc.nextLine();

        if(balanceParan(str))
        {
            System.out.println("Balance");
        }
        else{
            System.out.println("Not Balance");
        }

        
    }
}