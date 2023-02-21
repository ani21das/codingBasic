import java.util.*;
class bin{
    int convert(int[]arr,int x){
        int last=arr.length-1,start=0,mid;
        while(start<=last){
            mid=start+(last-start)/2;
            if(arr[mid]==x){
                return mid+1;
            }
            else if(arr[mid]<x){
            start=mid+1;
            }
            else{
                last=mid-1;
            }
        }
       return -1;
    }
}
public class binary{
    public static void main(String[] args) {
       System.out.print("Enter no of element you want in array:");
       Scanner input=new Scanner(System.in);
       int n=input.nextInt();
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
       bin B=new bin();
       int res=B.convert(array,key);
       if(res==-1){
           System.out.println("Not Found");
       }
       else{
           System.out.println(key+" found at "+res+" no position");
       }   
    }
}