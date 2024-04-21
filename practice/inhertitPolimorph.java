public class inhertitPolimorph {

/*
  * 

1) Compiler watches the reference ---> LHS
2) Runtime (JRE) watches ---> RHS (Instance)

  */    

    static class P{
        int d1 = 1;
        int d2= 2;


        void fun1(){
            System.out.println("P fun - 1");
        }

        void fun2(){
            System.out.println("P fun - 2");
        }

    }

    static class C extends P{
        int d1 = 9;
        int d3= 8;


        void fun1(){
            System.out.println("C fun - 1");
        }

        void fun3(){
            System.out.println("C fun - 3");
        }

    }


    public static void main(String[] args){


        // P obj = new P();
        // System.out.println(obj.d1);
        // System.out.println(obj.d2);
        // obj.fun1();
        // obj.fun2();
        
        C obj1 = new C();
        System.out.println(((P)obj1).d1);
        System.out.println(obj1.d2);
        System.out.println(obj1.d3);
        obj1.fun1();
        obj1.fun2();
        obj1.fun3();

    }

}
