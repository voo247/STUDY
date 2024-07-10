import java.util.Scanner;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) {
		StringBuilder rslt = new StringBuilder();
		Scanner sc = new Scanner(System.in);

		int toPick = sc.nextInt();

		char[] item = new char[sc.nextInt()];

		for(int i = 0; i < item.length; i++){
			item[i] = sc.next().charAt(0);
		}

		Arrays.sort(item);

		int[] bucket = new int[toPick];
		pick(item, bucket, toPick, 1, 2, rslt);

		System.out.println(rslt);

		sc.close();
	}

	public static void pick(char[] item, int[] bucket, int toPick, int toPickVowel, int toPickConsonant, StringBuilder rslt){
		if(toPick == 0){
			if(toPickVowel <= 0 && toPickConsonant <= 0){
				for(int i = 0; i < bucket.length; i++){
					rslt.append(item[bucket[i]]);
				}
				rslt.append('\n');
			}
			return;
		}

		int lastIdx = bucket.length - toPick - 1;
		int smallest = (lastIdx < 0) ? -1 : bucket[lastIdx];

		for(int i = smallest + 1; i < item.length; i++){
			bucket[lastIdx + 1] = i;

			int tmpVowel = toPickVowel;
			int tmpConsonant = toPickConsonant;

			if(checkIsVowel(item[bucket[lastIdx + 1]]))
				tmpVowel--;
			else
				tmpConsonant--;
			
			if(toPick - 1 < tmpVowel || toPick - 1 < tmpConsonant)
				continue;

			pick(item, bucket, toPick - 1, tmpVowel, tmpConsonant, rslt);
		}

		return;
	}

	public static boolean checkIsVowel(char ch){
		switch (ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				return true;
			default:
				return false;
		}
	}
}