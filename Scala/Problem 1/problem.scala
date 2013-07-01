object problem {
	def multi(n: Int): Int = {
		if(n > 0) {
			if(n % 3 == 0 || n % 5 == 0) {
				return n + multi(n-1)
			}
			else
			{
				return 0 + multi(n-1)
			}
		}
		return 0 
	}

	def main(args: Array[String]){
		println(multi(999))
	}
}