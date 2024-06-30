import java.util.Scanner;
import java.util.HashSet;

public class Main {
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        HashSet<Integer> hs = new HashSet<>();

        int n = sc.nextInt();

        for(int i = 0; i < n; i++){
            hs.add(sc.nextInt());
        }

        int m = sc.nextInt();
        for(int i = 0; i < m; i++){
            if (hs.contains(sc.nextInt())){
                System.out.println("1");
            }
            else{
                System.out.println("0");
            }
        }

        sc.close();
    }
}