import java.util.Stack;

public class Solution {

    public String removeOuterParentheses(String s) {
        StringBuilder result = new StringBuilder();
        String[] inputTexts = s.split("");
        Stack<String> stack = new Stack<>();

        for (String text : inputTexts) {
            if (text.equals("(")) {
                if (stack.size() >= 1) {
                    result.append(text);
                }
                stack.push(text);
                continue;
            }
            if (text.equals(")")) {
                if (stack.size() > 1) {
                    result.append(text);
                }
                stack.pop();
            }
        }
        return result.toString();
    }
}