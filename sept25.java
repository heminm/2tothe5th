import java.util.Random;
/**
	Prints "cerner"
	Reference: http://stackoverflow.com/questions/15182496/why-does-this-code-using-random-strings-print-hello-world
*/
public class Sept25 {
	
	public static void main(String[] args) {
		System.out.println(randomString(-1550710720));
	}
	
	public static String randomString(int i)
	{
	    Random ran = new Random(i);
	    StringBuilder sb = new StringBuilder();
	    for (int n = 0; ; n++)
	    {
	        int k = ran.nextInt(27);
	        if (k == 0)
	            break;

	        sb.append((char)('`' + k));
	    }

	    return sb.toString();
	}
}