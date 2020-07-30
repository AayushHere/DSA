/**
 * Definition for singly-linked list.
 * class ListNode {
 *     public int val;
 *     public ListNode next;
 *     ListNode(int x) { val = x; next = null; }
 * }
 */
public class Solution {
    public int lPalin(ListNode A) {
        Stack<Integer>x=new Stack<Integer>();
        ListNode point=A;
        while(A!=null){
                x.push(A.val);
                A=A.next;
            }
            int z=0;
          // System.out.println(x.toString());
            while(!x.isEmpty()){
               if(x.peek()!=point.val){
                    z=1;
                    break;
                }
                x.pop();
                point=point.next;
            }
            if(z==0)
                return 1;
            else
                return 0;
        }
        
    }
