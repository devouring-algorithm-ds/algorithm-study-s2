package backjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class 두_수의_합 {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int size = Integer.parseInt(bufferedReader.readLine());
        String[] input = bufferedReader.readLine().split(" ");
        int number = Integer.parseInt(bufferedReader.readLine());

        int reSize = 0;

        for (int i = 0; i < input.length; i++) {
            int one = Integer.parseInt(String.valueOf(input[i]));

            for (int j = i+1; j < input.length; j++) {
                int two = Integer.parseInt(String.valueOf(input[j]));
                if((one+two) == number) {
                    reSize++;
                }
            }
        }
        System.out.println(reSize);
    }
}
