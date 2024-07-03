import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		ArrayList<BOJ_User> list = new ArrayList<>();

		int n = sc.nextInt();

		for(int i = 0; i < n; i++){
			BOJ_User input = new BOJ_User(i, sc.nextInt(), sc.next());

			int idx = binarySearch(list, input, 0, list.size() - 1);
			
			list.add(idx, input);
		}

		for(int i = 0; i < list.size(); i++){
		   System.out.println(list.get(i));
		}

		sc.close();
	}
	public static int binarySearch(ArrayList<BOJ_User> list, BOJ_User p, int start, int end){
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

	public static boolean numberingId(BOJ_User p1, BOJ_User p2){
		if(p1.age < p2.age){
			return true;
		}
		else if(p1.age == p2.age){
			if(p1.id < p2.id){
				return true;
			}
			else{
				return false;
			}
		}
		return false;
	}
}

class BOJ_User {
	int id, age;
	String name;

	public BOJ_User(int id, int age, String name){
		this.id = id;
		this.age = age;
		this.name = name;
	}

	public String toString(){
		return age + " " + name;
	}
}
