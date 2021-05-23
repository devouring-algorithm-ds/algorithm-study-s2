package backjoon.atcode;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Abc127_a {
    //AC /87ms / 32552KB
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String[] init = bufferedReader.readLine().split(" ");

        if(5 >= Integer.parseInt(init[0])) {
            System.out.println(0);
        }

        if (init[0].equals("12") || init[0].equals("6")) {
            System.out.println(Integer.parseInt(init[1])/2);
        }

        if(13 <= Integer.parseInt(init[0])) {
            System.out.println(init[1]);
        }
    }
}
