public class problem3
{
	Array prime = new Array();
	Integer idx = 2;

	public Integer isprime(Integer num)
	{
		Integer z;
		for (z = 2; z < idx; ++z)
			if(num % z = 0)
				return 0;
		prime[++idx] = num;
		return 1;
	}


	public static void main(String[] args)
	{
		Integer i,z;
		prime[0] = 2;
		prime[1] = 3;
		prime[2] = 5;

		for(i = 5; i < 100000; ++i)
			if(isprime())
		
		for(i = 0; i < idx; ++i)
			if(600851475143 % prime[i] == 0)
				System.out.println("P: " + prime[i]);
	}
}
