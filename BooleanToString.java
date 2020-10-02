package Conversion;
public class BooleanToString
{
	public static void main(String[] args)
	 {
		//method 1using valueOf()
		boolean boovar=true;
		String str=String.valueOf(boovar);
		System.out.println("String is: "+str);
		//method 2 using toString();
		boolean boovar2=false;
		String str2=Boolean.toString(boovar2);
		System.out.println("String is: "+str2);
	}
}