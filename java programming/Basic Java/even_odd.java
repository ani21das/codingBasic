import java.util.*;
class convert{
    void conv(int n){
        if(n%2==0){
            System.out.println(n+" is a even number");
        }
        else{
            System.out.println(n+" is a odd number");
        }
    }
}
public class even_odd {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the number to check: ");
        int n=input.nextInt();
        System.out.println("ANSWER:");
        convert C=new convert();
        C.conv(n);
    }
}
