import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        final int N = Integer.parseInt(br.readLine());
        int[] numbers = Arrays.stream(br.readLine().split(" "))
                              .mapToInt(Integer::parseInt)
                              .toArray();
        final int X = Integer.parseInt(br.readLine());

        bw.write(String.valueOf(new Solution().solution(N, numbers, X)));

        bw.close();
        br.close();
    }
}

class Solution {
    private int n;
    private int x;
    private int result;

    public int solution(int n, int[] numbers, int x) {
        Arrays.sort(numbers);
        this.n = n;
        this.x = x;

        for (int i = 0; i < n - 1; i++) {
            calculateResultCount(i, numbers);
        }

        return result;
    }

    private void calculateResultCount(int i, int[] numbers) {
        int numberA = numbers[i];

        for (int j = n - 1; j > i; j--) {
            int numberB = numbers[j];

            if (numberA + numberB == x) {
                result++;
                return;
            }
        }
    }
}
