import java.io.*;
import java.util.*;

public class solution 
{
    private static String solve(String input) 
    {
        int len = input.length();
        int i = 0;
        while (i < len - 1) 
        {
            char current = input.charAt(i);
            char next = input.charAt(i+1);
            if (current == next) 
            {
                input = input.substring(0, i) + input.substring(i+2);
                len = input.length();
                i = 0;
                continue;
            }
            i++;
        }
        if (input.length() == 0) 
        {
            return "Empty String";
        }
        return input;
    }

    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        System.out.println(solve(s.next()));
    }
}
