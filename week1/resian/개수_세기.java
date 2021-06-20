package backjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class 개수_세기 {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String[] input = new String[3];

        for (int i = 0; i < 3; i++) {
            input[i] = bufferedReader.readLine();
        }

        int size = 0;
        int number = Integer.parseInt(input[2]);
        String[] data = input[1].split(" ");

        for (int i = 0; i < data.length; i++) {

            if(Integer.parseInt(String.valueOf(data[i])) == number) {
                size++;
            }
        }
        System.out.println(size);
    }
}
