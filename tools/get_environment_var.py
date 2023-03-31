#!/usr/bin/env python3

import os
import sys

def main():
    if len(sys.argv) <= 1:
        print("name of environment variable as argument required!")
        sys.exit(1)
    print(os.environ.get(sys.argv[1], ''), end='')

if __name__ == '__main__':
    main()
