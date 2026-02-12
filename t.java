import java.util.Scanner;
class t{
    public static void main(){
        Scanner obj=new Scanner(System.in);
        int a=obj.nextInt();
        int b=obj.nextInt();
        for(int i=a;i<=b;i++){
        System.out.println(i);
        }
        obj.close();
    }
}