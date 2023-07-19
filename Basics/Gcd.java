import java.util.*;
public class Gcd
{
    public static int checkGcd(int a, int b,int c)
    {
        int temp  = -1;
        int min;
        if (a>b)
        {
            min = b;
        }
        else{
            min = a;
        }
        for(int i=1; i<min; i++)
        {
            if(a%i==0 && b%i==0 && c%i==0)
            {
                if(temp<i)
                {
                    temp  = i;
                }
            }
        }
        return temp;
    }
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a, b,c;
		System.out.println("Enter a: ");
		a = sc.nextInt();
		
		System.out.println("Enter b: ");
		b = sc.nextInt();
		
		System.out.println("Enter c: ");
		c = sc.nextInt();
		
		
		int res = checkGcd(a,b,c);
		System.out.println("Answer is: ");
		System.out.println(res);
		
	}
}
