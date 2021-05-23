import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        final int N = Integer.parseInt(br.readLine());
        String[] inputTexts = new String[N];

        for (int i = 0; i < N; i++) {
            inputTexts[i] = br.readLine();
        }

        String[] resultTexts = new Solution().solution(N, inputTexts);
        for (String resultText : resultTexts) {
            bw.write(resultText);
            bw.newLine();
        }

        bw.close();
        br.close();
    }
}

class Solution {
    public String[] solution(int N, String[] inputTexts) {
        String[] result = new String[N];

        for (int i = 0; i < N; i++) {
            String[] texts = splitBlankText(inputTexts[i]);
            char[] textA = sortText(texts[0]);
            char[] textB = sortText(texts[1]);

            result[i] = checkChangeableText(textA, textB);
        }

        return result;
    }

    private String[] splitBlankText(String text) {
        return text.split(" ");
    }

    private char[] sortText(String changedText) {
        char[] text = changedText.toCharArray();
        Arrays.sort(text);
        return text;
    }

    private String checkChangeableText(char[] textA, char[] textB) {
        return new String(textA).equals(new String(textB)) ? "Possible" : "Impossible";
    }
}
