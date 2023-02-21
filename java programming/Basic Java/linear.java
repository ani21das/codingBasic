import java.util.*;
public class linear {
   static int search(int arr[],int find)
   {
   int size=arr.length;
   for(int i=0;i<size;i++)
   {
       if(arr[i]==find)
       {
        return i;
       }
   }
      return -1;
   } 
   public static void main(String[] args) {
       int n,sum=0;
       System.out.print("Enter no of element you want in array:");
       Scanner input=new Scanner(System.in);
       n=input.nextInt();
       int array[]=new int[n];
       System.out.println("Enter all the the elements:");
       for(int i=0;i<n;i++)
       {
           array[i]=input.nextInt();
       }
       System.out.println("Elements in the array:");
       for(int i=0;i<n;i++)
       {
        System.out.println(" "+array[i]+" ");
       }
       System.out.print("Enter the key:");
       int key=input.nextInt();
       int result=search(array,key);
       if(result==-1)
       {
           System.out.println("Element is not present in the array:(");
       }
       else
       {
          System.out.println("Element present at "+(result+1)+" position");
       }
   }
}
