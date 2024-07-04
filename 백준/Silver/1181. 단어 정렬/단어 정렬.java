import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		ArrayList<String> list = new ArrayList<>();

		int n = sc.nextInt();

		for(int i = 0; i < n; i++){
			String input = sc.next();

			if(list.contains(input))
				continue;

			int idx = binarySearch(list, input, 0, list.size() - 1);
			
			list.add(idx, input);
		}

		for(int i = 0; i < list.size(); i++){
		   System.out.println(list.get(i));
		}

		sc.close();
	}
	public static int binarySearch(ArrayList<String> list, String p, int start, int end){
		if(start <= end){
			int idx = (start + end) / 2;

			if(!numberingId(list.get(idx), p)){
				return binarySearch(list, p, start, idx - 1);
			}
			else{
				return binarySearch(list, p, idx + 1, end);
			}
		}
		return start;
	}

	public static boolean numberingId(String str1, String str2){
		if(str1.length() < str2.length()){
			return true;
		}
		else if(str1.length() > str2.length()){
			return false;
		}
		else{
			return (str1.compareTo(str2) < 0) ? true : false;
		}
	}
}