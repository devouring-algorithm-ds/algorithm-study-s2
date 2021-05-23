import java.io.*;
import java.util.LinkedHashMap;
import java.util.Map;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        bw.write(new Solution().solution(br.readLine()));

        bw.close();
        br.close();
    }
}

class Solution {
    public String solution(String word) {
        char[] alphabets = word.toCharArray();
        StringBuilder sb = new StringBuilder();
        Map<Character, Integer> result = initAlphabetAmount();

        updateAlphabetAmount(alphabets, result);
        initResultText(sb, result);

        return sb.toString().trim();
    }

    private Map<Character, Integer> initAlphabetAmount() {
        Map<Character, Integer> result = new LinkedHashMap<>();

        result.put('a', 0);
        result.put('b', 0);
        result.put('c', 0);
        result.put('d', 0);
        result.put('e', 0);
        result.put('f', 0);
        result.put('g', 0);
        result.put('h', 0);
        result.put('i', 0);
        result.put('j', 0);
        result.put('k', 0);
        result.put('l', 0);
        result.put('m', 0);
        result.put('n', 0);
        result.put('o', 0);
        result.put('p', 0);
        result.put('q', 0);
        result.put('r', 0);
        result.put('s', 0);
        result.put('t', 0);
        result.put('u', 0);
        result.put('v', 0);
        result.put('w', 0);
        result.put('x', 0);
        result.put('y', 0);
        result.put('z', 0);

        return result;
    }

    private void updateAlphabetAmount(char[] alphabets, Map<Character, Integer> result) {
        for (char alphabet : alphabets) {
            result.put(alphabet, result.get(alphabet) + 1);
        }
    }

    private void initResultText(StringBuilder sb, Map<Character, Integer> result) {
        for (Integer amount : result.values()) {
            sb.append(amount);
            sb.append(" ");
        }
    }
}
