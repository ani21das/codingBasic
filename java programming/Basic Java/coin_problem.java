import java.util.*;
 
public class coin_problem {
 
    public static void main (String [] args){
 
        Scanner sc = new Scanner(System.in);
 
    int amount;
    int oneDollar;
    int twoDollar;
    int fiftyCents;
    int twentyCents;
    int tenCents;
    int fiveCents;
    int oneCents;
    int totalCoins = 0;    
    int myInt;
 
    System.out.println("Enter amount in cents: ");
    amount=sc.nextInt();
 
 
            System.out.println((amount / 200) + " – $2 coins");
            myInt = (amount / 200);        
            amount = amount % 200;            
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println((amount / 100) + " – $1 coins");
            myInt = (amount / 100);
            amount = amount % 100;
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println((amount / 50) + " – $0.50 coins");
            myInt = (amount / 50);
            amount = amount % 50;
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println((amount / 20) + " – $0.20 coins");
            myInt = (amount / 20);
            amount = amount % 20;
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println((amount / 10) + " – $0.10 coins");
            myInt = (amount / 10);
            amount = amount % 10;
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println((amount / 5) + " – $0.05 coins");
            myInt = (amount / 5);
            amount = amount % 5;  
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println(amount + " – $0.01 coins");
            myInt = (amount);
 
            if(amount > 0){
                for(int a = 0; a < myInt; a++ ){
                totalCoins++;
                }
            }
 
            System.out.println("Total Coins: " + totalCoins);
 
    }
 }