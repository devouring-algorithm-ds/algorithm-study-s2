package backjoon;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Strfry {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String[] init = new String[Integer.parseInt(bufferedReader.readLine())];

        for (int i = 0; i < init.length; i++) {
            init[i] = bufferedReader.readLine();
        }


        for (String s : init) {
            String[] data = s.split(" ");

            StringBuffer stringBuffer = new StringBuffer();

            for (int i = data[0].length()-1; i >= 0 ; i--) {
                stringBuffer.append(data[0].charAt(i));
            }

            if(data[1].equals(stringBuffer.toString())) {
                System.out.println("Possible");
            } else {
                System.out.println("Impossible");
            }
        }
    }
}
