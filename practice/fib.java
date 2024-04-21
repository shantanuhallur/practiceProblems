import java.util.*;
import javax.print.attribute.SupportedValuesAttribute;


public class fib {
    public static int isfib(int n){
        int a=-1;
        int b =1;
        boolean isNo= false;
        int sum=2;
        //System.out.println(a);
        //System.out.println(b);
        for(int i =0;i<n;i++){
            int c = a + b;
           //System.out.println(c);
            a=b;
            b=c;
            c=a+b;
            if(c>n){
                break;
            }
            //System.out.println("sum before adding :" + sum);
            sum+=c;
           // System.out.println("sum after adding :" + sum);
            //System.out.println("Sum is : " + sum);
            if(n==c){
                isNo=true;
                break;
            } 
           
        }


         if(isNo){
            return n;
        }
        else{
            return sum;
        }
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        if(n==0||n==1){
            System.out.println(n);
        }
        else{
           System.out.println(isfib(n)); 
    }
}
}
