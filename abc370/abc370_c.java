import java.util.*;

public class Main {
	static Scanner sc = new java.util.Scanner(System.in);

    public static void main(String[] args) {
        String start = sc.nextLine();
        String target = sc.nextLine();

        transform(start, target);
    }

    public static void transform(String start, String target) {
    	String current = start;
        int len = current.length();
        int cnt = 0;
        List<String> ls = new ArrayList<String>();

        while (!current.equals(target)) {
            String next = null;

            for (int i = 0; i < len; i++) {
                if (current.charAt(i) != target.charAt(i)) {
                    // Try changing the i-th character to match the target
                    char[] chars = current.toCharArray();
                    chars[i] = target.charAt(i);
                    String candidate = new String(chars);

                    // Pick the lex smallest among candidates
                    if (next == null || candidate.compareTo(next) < 0) {
                        next = candidate;
                    }
                }
            }

            ls.add(next);
            cnt++;
            current = next;
        }
        
        System.out.println(cnt);
        for(String s : ls) {
        	System.out.println(s);
        }
    }
}