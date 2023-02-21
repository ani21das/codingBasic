import java.util.Scanner;

class coin_convert{
    void convert(int one, int five, int ten, int twentyfive, int fifty, int one_hundred, int two_hundred)
    {
       System.out.println("");

        

    }
}

public class coin {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter the number of '1 cent' denomination: ");
    int one_cents=input.nextInt();
    System.out.println("Enter the number of '5 cent' denomination: ");
    int five_cents=input.nextInt();
    System.out.println("Enter the number of '10 cent' denomination: ");
    int ten_cents=input.nextInt();
    System.out.println("Enter the number of '20 cent' denomination: ");
    int twentyfive_cents=input.nextInt();
    System.out.println("Enter the number of '50 cent' denomination: ");
    int fifty_cents=input.nextInt();
    System.out.println("Enter the number of '1 doller' denomination: ");
    int one_dollar=input.nextInt();
    System.out.println("Enter the number of '2 dollar' denomination: ");
    int two_dollar=input.nextInt();
    coin_convert C=new coin_convert();
    C.convert(one_cents,fifty_cents,ten_cents,twentyfive_cents,fifty_cents,one_dollar,two_dollar);
        
    
    }
}
