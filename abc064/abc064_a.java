import java.util.*;

public class Main {
	
	public static void sol(String str) {
		str = str.replaceAll("\\s+", "");
		int n = Integer.parseInt(str);
		if(n%4 == 0)
			System.out.println("YES");
		else
			System.out.println("NO");
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String str;
		str = s.nextLine();
		sol(str);
	}

}
