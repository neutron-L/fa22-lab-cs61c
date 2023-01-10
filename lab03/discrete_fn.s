.globl f # this allows other files to find the function f
.word   6, 61, 17, -38, 19, 42, 5

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (defined above).
# The return value should be stored in a0
f:
    addi a0, a0, 3
    slli a0, a0, 2
    add a1, a1, a0
    lw a0, 0(a1)
    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    jr ra  