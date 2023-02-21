import java.util.*;


public class palindrome {
    static int if_palindrome(int num_1)
    {
        int copy_1=num_1;
        int sum_1=0;
        while(num_1>0)
        {
            int rem_1=num_1%10;
            sum_1+=rem_1;
            num_1/=10;
        } 
        return sum_1;
    }

    static int if_not_palindrome(int num_2)
    {
        int copy_2=num_2;
        int sum_2=0;
        while(num_2>0)
        {
            int rem_2=num_2%10;
            sum_2+=Math.pow(rem_2,3);
            num_2/=10;
        } 
        return sum_2;
    }        
    public static void main(String[] args) {
        int num;
        System.out.println("Enter the number as input: ");
        Scanner Input=new Scanner(System.in);
        num=Input.nextInt();
        int copy=num;
        int sum=0,rem=0;
        while(num>0)
        {
            rem=num%10;
            sum=(sum*10)+rem;
            num/=10;
        }
        if(copy==sum)
        {
            System.out.println(copy+" is a paindrome number:)");
            System.out.println();
            System.out.println(copy+" 's sum of digits: "+if_palindrome(copy));
        }
        else
        {
            System.out.println(copy+" is not a palindrome number");
            System.out.println();
            System.out.println(copy+" 's sum of digits cube: "+if_not_palindrome(copy));
        }
    }
}
