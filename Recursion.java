public class Recursion {
    public static void subString(String s, int i, String sub) {
        if (i == s.length()) {
            System.out.println(sub);
            return;
        }
        char currentCharacter = s.charAt(i);
        subString(s, i + 1, sub + currentCharacter);
        subString(s, i + 1, sub);
    }

    public static void main(String[] args) {
        String s = "abc";
        int i = 0;
        subString(s, i, "");
    }
}
