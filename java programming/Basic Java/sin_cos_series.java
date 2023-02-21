import java.util.*;
public class sin_cos_series {
    public static double numerator,combind=0;
    public static int fact=1,sign=-1;
    static void sin(double rad,int lim,float deg)
    {
        double sum_1=rad;
        for(int i=3;i<lim;i=i+2)
        {
          numerator=Math.pow(rad,i);
          fact=fact*i*(i-1);
          combind=numerator/(double)fact;
          sum_1+=((double)sign*combind);
          sign=sign*(-1);
        }
       System.out.println("**ANSWER**");
       System.out.print("Sin("+deg+")= "+sum_1);  
    }
    static void cos(double rad,int lim,float deg,double sum_2)
    {
        for(int i=2;i<lim;i=i+2)
        {
          numerator=Math.pow(rad, i);
          fact=fact*i*(i-1);
          combind=(double)numerator/fact;
          sum_2+=(double)sign*combind;
          sign=sign*(-1);
       }
       System.out.println("**ANSWER**");
       System.out.print("Sin("+deg+")= "+sum_2);
    }
    private static void exit() {
    } 
    //use it for using exit().Not like C.
 public static void main(String[] args) {
     Scanner input=new Scanner(System.in);
     int choice;
    do{
        System.out.print("\n\n\t**WELCOME USER**");
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
        case 3:
                exit();
        default:
                System.out.println("**WRONG CHOICE**\nPLEASE CHOOSE\n");
                System.out.print("\n1. Sine Series\n2. Cosine Series\n3. Exit");
                break;
     }
    }while(choice!=3); 
  }
}
