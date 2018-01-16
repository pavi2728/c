import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
       
        Scanner sc=new Scanner(System.in);
        String a=sc.nextLine();
        char c[]=a.toCharArray();
        int count=0;
        for(int i=0;i<a.length();i++)
       {
          if(c[i]!=' ')
          count++;

	}
   System.out.println(count);
}
}
