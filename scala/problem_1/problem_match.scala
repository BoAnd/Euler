object Main extends App {
    def f(arr: Int): Int = arr match {
        case 2 => 0;
        case x if x % 3 == 0 || x % 5 == 0 => x + f(x-1)
        case x => f(x-1) 
    }
    System.out.println(f(999));
}
