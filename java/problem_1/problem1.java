public class problem1 
{
	public static void main(String[] args)
	{
		Integer i;
		Integer num = 0;
			
		for(i = 1; i < 1000; i++)
		{
			if(i%3 == 0 || i % 5 == 0)
				num += i;			
		}
		System.out.println("Answer: " + num);
	}	
}
