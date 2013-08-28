#!/usr/bin/env python

def main():
    tmp = 0
    prev = 1
    nexxt = 2	
    answer = 2

    for i in xrange(3,33):
        tmp = prev + nexxt
        prev = nexxt
        nexxt = tmp
        if(nexxt % 2 == 0):
            answer += nexxt
	
    print answer	

if __name__ == "__main__":
    main()
