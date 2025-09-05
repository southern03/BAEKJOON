import java.util.Scanner;
public class Main{
    public static void main(String args[]){
        Scanner in = new scanner(System.in);
        int cnt=0;
        int n = in.nextInt();
        int[] arr = new int[101];
        for (int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        int m = in.nextInt();
        for (int i=0;i<n;i++){
            if (arr[i]==m){
                 cnt++;
            }
        }
        System.out.println(cnt);
    }
}