//https://www.hackerrank.com/challenges/two-characters
//Created by G(powe0101@naver.com)
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    final static String alphabets = "abcdefghijklmnopqrstuvwxyz";
    
    public static StringBuffer findSpecificAlphabets(String s)
    {
        StringBuffer buffer = new StringBuffer();
        for(int i = 0; i < alphabets.length(); ++i)
        {
            char ch = alphabets.charAt(i);
            if(s.indexOf(ch) != -1 )
                buffer.append(ch);
        }
        
        return buffer;
    }
    
    public static boolean findDuplicateAlphabets(StringBuffer resultBuffer)
    {
        for(int i = 0; i < resultBuffer.length() - 1; ++i) //두개씩 비교 - 1
        {
            char ch = resultBuffer.charAt(i);
            if( ch == resultBuffer.charAt(i+1))
                return false;
            
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int len = in.nextInt();
        String s = in.next();
        
        StringBuffer chBuffer = findSpecificAlphabets(s);  /* 문자열 분해 */       //System.out.println(chBuffer);
        
        int length = 0; // 최종 출력 길이
        
        StringBuffer tBuffer = new StringBuffer();
        for(int i = 0; i < chBuffer.length(); ++i) //두개씩 비교 - 1
        {
            char ch = chBuffer.charAt(i);
            for(int k = i+1; k < chBuffer.length() ; ++k)
            {
                char ch2 = chBuffer.charAt(k);
            
                tBuffer.setLength(0);
  
                for(int j = 0; j < s.length(); ++j)
                {
                     char ch_pos =  s.charAt(j);
                     if((ch_pos == ch) || (ch_pos == ch2))
                         tBuffer.append(ch_pos);
                }
                
                if( findDuplicateAlphabets(tBuffer)) /* 문자열 중복 검사 */ 
                    length = Math.max(length,tBuffer.length());
            }
        }
        
        System.out.println(length);
    }
}
