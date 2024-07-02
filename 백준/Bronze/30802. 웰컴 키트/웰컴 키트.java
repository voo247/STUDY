import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int[] shirt = new int[6];

		for(int i = 0; i < shirt.length; i++){
			shirt[i] = sc.nextInt();
		}

		int t = sc.nextInt();
		int p = sc.nextInt();

		int cnt = 0;
		for(int i = 0; i < shirt.length; i++){
			cnt += ((shirt[i] / t) < (double)shirt[i] / t) ? shirt[i] / t + 1 : shirt[i] / t;
		}

		System.out.println(cnt);
		System.out.println((n / p) + " " + (n % p));

		sc.close();
	}
}
