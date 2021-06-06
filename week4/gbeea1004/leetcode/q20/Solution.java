import java.util.Stack;

public class Solution {
    public boolean isValid(String s) {
        String[] inputTexts = s.split("");
        Stack<String> stack = new Stack<>();
        for (String text : inputTexts) {
            if (text.equals("(") || text.equals("{") || text.equals("[")) {
                stack.push(text);
                continue;
            }
            if (stack.isEmpty()) {
                return false;
            }
            String peek = stack.peek();
            if ((text.equals(")") && peek.equals("(")) || (text.equals("}") && peek.equals("{")) || (text.equals("]") && peek.equals("["))) {
                stack.pop();
            } else {
                return false;
            }
        }
        return stack.isEmpty();
    }
}
