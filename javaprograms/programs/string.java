package programs;
import java.util.*;
public class string {
    public static void  ascsort(String[]arr){
        int n=arr.length;
        for(int i=n-1;i>0;i--){
            for(int j=0;j<i;j++){
                if(arr[j].compareTo(arr[j+1])>0){
                    String temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static void ascsortstl(String []arr){
        Arrays.sort(arr);
    }
        public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();
            String arr[]= new String[n] ;
            for(int i=0;i<n;i++){
                arr[i]=sc.next();
            }
            ascsort(arr);
            ascsortstl(arr);
            for(int i=0;i<n;i++){
                System.out.print(arr[i]+" ");
            }

            sc.close();
        }
}
