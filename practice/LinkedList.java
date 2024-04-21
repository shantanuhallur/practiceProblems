import java.util.*;
public class LinkedList {

     public class ListNode {
             int val;
             ListNode next;
             ListNode() {}
             ListNode(int val) { this.val = val; }
             ListNode(int val, ListNode next) { this.val = val; this.next = next; }
         }
         //876 second mid
         public ListNode middleNode(ListNode head) {
            if(head == null || head.next==null)return head;
            
            ListNode slow = head ,  fast = head;
            
            while(fast!=null && fast.next!=null){
                fast = fast.next.next;
                slow = slow.next;
            }
            
            return slow;
        }
        //first mid of LL
        public ListNode midNode(ListNode head) {
            if(head == null || head.next==null)return head;
            
            ListNode slow = head ,  fast = head;
            
            while(fast.next!=null && fast.next.next!=null){
                fast = fast.next.next;
                slow = slow.next;
            }
            
            return slow;
        }

        public int length(ListNode head){
            if(head==null) return 0;

            int len =0;
            ListNode curr = head;
            while(curr!=null){
                curr = curr.next;
                len++;
            }

            return len;
        }

        //234
        public boolean isPalindrome(ListNode head) {
            if(head==null || head.next==null) return true;
            
            ListNode mid = midNode(head), nHead = mid.next;
            mid.next=null;
            nHead = reverseList(nHead);
            
            ListNode c1 = head ,  c2 = nHead;
            boolean res = true;
            while(c2!=null){
                if(c1.val!=c2.val) 
                {
                    res = false;
                    break;
                }
                c1=c1.next;
                c2=c2.next;
            }
            nHead =  reverseList(nHead);
            mid.next = nHead;
            
            return res;
        }

        //143
        public void reorderList(ListNode head) {
            if(head==null || head.next==null) return;
           
           ListNode mid = midNode(head), nHead = mid.next;
           mid.next=null;
           nHead = reverseList(nHead);
           ListNode c1 = head ,  c2 = nHead ;
           while(c2!=null){
               ListNode f1 = c1.next , f2 = c2.next;
               c1.next=c2;
               c2.next=f1;
               c1=f1;
               c2=f2;
               
           }
           
       }
        
    public static void main(String[] args) {
        System.out.println("Hi");
    
    }
}