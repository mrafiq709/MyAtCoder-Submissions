public class Main {
	private static int findPos(String s1, String s2) {
		int minL = Math.min(s1.length(), s2.length());
		int maxL = Math.max(s1.length(), s2.length());
		for(int i = 0; i < minL; i++) {
			if(s1.charAt(i) != s2.charAt(i)) {
				return i + 1;
			}
		}
		if(minL != maxL) return minL + 1;
		
		return 0;
	}
	private static void sol() {
		java.util.Scanner scanner = new java.util.Scanner(System.in);
		String S = scanner.next();
		String T = scanner.next();
		System.out.println(findPos(S, T));
	}

	public static void main(String[] args) {
		sol();
	}
}