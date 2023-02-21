import java.util.*;
public class confuse {
    public static double numerator,combind=0;
    public static int fact=1,sign=-1;

    static void sin(double rad,int lim,float deg)
    {
        
        double sum_1=rad;
        double sum_2=sum_1;
        int check=0;
        System.out.print("\n\nSin("+deg+")=");
        System.out.print("\n_________");
        System.out.printf("\n%.4f",rad); 
        for(int i=3;i<=lim;i=i+2,check++)
        {
          numerator=Math.pow(rad,i);
          fact=fact*i*(i-1);
          combind=numerator/(double)fact;
          sum_1+=((double)sign*combind);
          sign=sign*(-1);
          if(check%2==0)
          {
              System.out.print(" - ");
          }
          else
          {
              System.out.print(" + ");
          }
          System.out.printf("(%.4f)",rad);
          System.out.print("^"+i+"/("+i+"!)");
        }
       
       System.out.println("\n\n\t**ANSWER**\n");
       System.out.print("Sum of Sin("+deg+") series upto "+lim+" term = "+sum_1);
       double deg_copy=(double)deg;
       System.out.printf("\n\nValue of sin("+deg+")= %.4f",Math.sin(deg_copy));  
    }

    static void cos(double rad,int lim,float deg,double sum_2)
    {
        int check=0;
        System.out.print("\n\nSin("+deg+")=");
        System.out.print("\n_________");
        System.out.printf("\n%.4f",rad);
        for(int i=2;i<=lim;i=i+2,check++)
        {
          numerator=Math.pow(rad, i);
          fact=fact*i*(i-1);
          combind=numerator/(double)fact;
          sum_2+=(double)sign*combind;
          sign=sign*(-1);
          if(check%2==0)
          {
              System.out.print("-");
          }
          else
          {
              System.out.println("+");
          }
          System.out.printf("%.4f",rad,"^",i,"/",i,"!");
        }
       System.out.println("\n\n\t**ANSWER**\n");
       System.out.println("Sum of Cos("+deg+") series upto "+lim+" term = "+sum_2);
       double deg_copy=(double)deg;
       System.out.printf("\n\nValue of Cos("+deg+")= %.4f",Math.cos(deg_copy));
    }
 public static void main(String[] args) {
     Scanner input=new Scanner(System.in);
     int choice;
    do{
        System.out.print("\n\n\n\t**WELCOME USER**");
        System.out.print("\n1. Sine Series\n2. Cosine Series\n3. Exit");
        System.out.print("\n\nENTER YOUR CHOICE:");
        choice=input.nextInt();
     switch(choice)
     {
         case 1:
                double radian_1;
                System.out.println("Enter the value of degree: ");
                float degree_1=input.nextFloat();
                radian_1=degree_1*3.14/180.0;
                System.out.println("Enter the limit upto series continued: ");
                int limit_1=input.nextInt();
                
                sin(radian_1,limit_1,degree_1);
                break;
        case 2:
                Double radian_2;
                double sum=1;
                System.out.println("Enter the value of degree: ");
                float degree_2=input.nextFloat();
                radian_2=degree_2*3.14/180.0;
                System.out.println("Enter the limit upto series continued: ");
                int limit_2=input.nextInt();
        
                cos(radian_2,limit_2,degree_2,sum);
                break;
        default:
                System.out.println("**WRONG CHOICE**\nPLEASE CHOOSE");
                System.out.print("1. Sine Series\n2. Cosine Series\n3. Exit");
                break;
     }
    }while(choice!=3); 
  }
}