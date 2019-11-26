object problem {
	
	def fib(n: Int): Int = n match{
		case 0 | 1 => 1
		case _ => fib(n-1) + fib(n-2)
	}

	def main(args: Array[String]){
		var i = 0
		var num = 0 
		for(i <- 1 to 4000000){
			if(fib(i) % 2 == 0){
				num += fib(i) // Stupid, we calculate fib() two times
			}
		}
		println(num)
	}
}
