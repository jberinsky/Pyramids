# Jason Berinsky
# CS 50 Problem Set 6
# Creates a pyramid of # blocks of an inputted size

from cs50 import get_int

# Prints the blocks


def blocks(n):
    for j in range(n):
        print("#", end="")

# Prints the spaces leading up to the first block


def spaces(n):
    for k in range(1, n):
        print(" ", end="")


# Gets an input value between 1 and 8 inclusive
while True:
    height = get_int("Height: ")
    if height >= 1 and height <= 8:
        break


# Creates the block pyramid
level = height
for i in range(1, height + 1):
    spaces(level)
    blocks(i)
    print("  ", end="")
    blocks(i)
    print()
    level = level - 1