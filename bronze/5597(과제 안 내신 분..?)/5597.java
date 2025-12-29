import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n;
        int student[] = new int[30];
        for (int i=0;i<28;i++){
            n = in.nextInt();
            student[n-1] = 1;
        }
        for (int i=0;i<30;i++){
            if (student[i] == 0){
                System.out.println(i+1);
            }
        }
        in.close();
        return;
    }
}
