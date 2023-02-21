import java.util.*;
class rect {
    //int length,width;
    //void getdata(int x,int y){
        //length=x;
        //width=y;
    //}
    void Rect_Area(int length,int width){
        int area;
        area=length*width;
        System.out.println("Area of the Rectangle: "+area);
      }
    void Rect_Perimeter(int length,int width){
        int perimeter;
        perimeter=2*(length+width);
        System.out.println("Perimeter of the Rectangle: "+perimeter);
      }
    }
class rectangle{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the length: ");
        int a=input.nextInt();
        System.out.println("Enter the width: ");
        int b=input.nextInt();
        rect R1=new rect();
        rect R2=new rect();

        //R1.getdata(a, b);
        //R2.getdata(a, b);

        R1.Rect_Area(a,b);
        R2.Rect_Perimeter(a,b);
    }
}

