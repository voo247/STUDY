import java.util.Scanner;
import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		StringBuilder str = new StringBuilder();
		Scanner sc = new Scanner(System.in);

		ArrayList<Path> list = new ArrayList<>();

		int k = sc.nextInt();

		moveHanoiTower(list, k, '1', '2', '3');
		
		System.out.println(list.size());
		for(int i = 0; i < list.size(); i++){
			str.append(list.get(i)).append('\n');
		}
		System.out.println(str);

		sc.close();
	}

	public static void moveHanoiTower(ArrayList<Path> list, int disk, char from, char tmp, char to){
		if(disk <= 1){
			list.add(new Path(from, to, disk));
		}
		else{
			moveHanoiTower(list, disk - 1, from, to, tmp);
			list.add(new Path(from, to, disk));
			moveHanoiTower(list, disk - 1, tmp, from, to);
		}
		return;
	}
}

class Path{
	char from, to;
	int disk;

	public Path(char from, char to){
		this.from = from;
		this.to = to;
	}
	public Path(char from, char to, int disk){
		this(from, to);
		this.disk = disk;
	}

	@Override
	public String toString() {
		return from + " " + to;
	}
}