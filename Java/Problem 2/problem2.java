public class problem2 
{
	public static void main(String[] args)
	{	
		Integer i;
		Integer tmp;
		Integer prev = 1;
		Integer next = 2;
		Integer answer = 2;
		for(i = 3; i < 33; ++i)
		{
			tmp = prev + next;
			prev = next;
			next = tmp;
			if(next % 2 == 0)
				answer += next;
		}
		System.out.println("Answer: " + answer);
	}
}
