#!/usr/bin/env python

def main():
    num = 0
    for i in xrange(1,1000):
        if(i % 3 == 0 or i % 5 == 0):
            num += i
    print num	

if __name__ == "__main__":
    main()
