import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int[] inputValues = Arrays.stream(br.readLine().split(" "))
                                  .mapToInt(Integer::parseInt)
                                  .toArray();

        bw.write(String.valueOf(new Solution().solution(inputValues[0], inputValues[1])));

        bw.close();
        br.close();
    }
}

class Solution {
    public int solution(int A, int P) {
        return ((A * 3) + P) / 2;
    }
}