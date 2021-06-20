package backjoon;

import java.io.*;

public class 알파벳_개수 {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        String input = bufferedReader.readLine();
        int[] size = new int[26];

        for (int i = 0; i < input.length(); i++) {
            String data = String.valueOf(input.charAt(i));
            switch (data) {
                case "a" : size[0] += 1;
                    break;
                case "b" : size[1]+= 1;
                    break;
                case "c" : size[2]+= 1;
                    break;
                case "d" : size[3]+= 1;
                    break;
                case "e" : size[4]+= 1;
                    break;
                case "f" : size[5]+= 1;
                    break;
                case "g" : size[6]+= 1;
                    break;
                case "h" : size[7]+= 1;
                    break;
                case "i" : size[8]+= 1;
                    break;
                case "j" : size[9]+= 1;
                    break;
                case "k" : size[10]+= 1;
                    break;
                case "l" : size[11]+= 1;
                    break;
                case "m" : size[12]+= 1;
                    break;
                case "n" : size[13]+= 1;
                    break;
                case "o" : size[14]+= 1;
                    break;
                case "p" : size[15]+= 1;
                    break;
                case "q" : size[16]+= 1;
                    break;
                case "r" : size[17]+= 1;
                    break;
                case "s" : size[18]+= 1;
                    break;
                case "t" : size[19]+= 1;
                    break;
                case "u" : size[20]+= 1;
                    break;
                case "v" : size[21]+= 1;
                    break;
                case "w" : size[22]+= 1;
                    break;
                case "x" : size[23]+= 1;
                    break;
                case "y" : size[24]+= 1;
                    break;
                case "z" : size[25]+= 1;
                    break;
            }
        }

        for (int i : size) {
            bufferedWriter.write(i + "");
        }
        bufferedWriter.flush();
    }
}
