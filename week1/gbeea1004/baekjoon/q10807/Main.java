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
        final int findNo = Integer.parseInt(br.readLine());

        bw.write(String.valueOf(new Solution().solution(N, numbers, findNo)));

        bw.close();
        br.close();
    }
}

class Solution {
    public long solution(int N, int[] numbers, int findNo) {
        return Arrays.stream(numbers).filter(no -> no == findNo).count();
    }
}
