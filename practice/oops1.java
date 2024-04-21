import java.util.*;
import java.io.*;
/**
 * oops1
 */

 
public class oops1 {

    static class Person {
        int age;
        String name;

        void sayHi() {
            System.out.println(this.name+ " [" + this.age + "] " + "Says Hi");
        }
    }

    public static void main(String[] args) {
        Person p1 = new Person();
        p1.name = "Shantanu";
        p1.age = 22;
        //p1.sayHi();

        Person p2 = new Person();
        p2.name = "Avadhoot";
        p2.age = 21;
        //p2.sayHi();

        // Person p3 = p2;
        // p3.sayHi();
        // p3.name = "Goro";
        // p3.sayHi(); 

        // Person temp = p1;
        // p1=p2;
        // p2 = temp ;

        swap(p1,p2);
        p1.sayHi();
        p2.sayHi(); 
    }

    static void swap(Person p1 , Person p2){
        Person temp = p1;
        p1=p2;
        p2 = temp ;
        
        p1.sayHi();
        p2.sayHi();
        System.out.println("---------------");
    }
}