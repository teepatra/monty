0x19. C - Stacks, Queues - LIFO, FIFO

What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables

 The program takes one argument, which is the path to the file containing the byte code. If the user does not provide a file or provides more than one argument, the program should print an error message and exit with status EXIT_FAILURE. If the file cannot be opened, the program should print an error message with the name of the file and exit with status EXIT_FAILURE. If the file contains an invalid instruction, the program should print an error message with the line number and opcode and exit with status EXIT_FAILURE. 

The monty program runs the bytecodes line by line and stops if it executes every line of the file, finds an error in the file, or if an error occurs. If the program cannot allocate any more memory, it should print an error message and exit with status EXIT_FAILURE. The program is only allowed to use malloc and free and cannot use any other function from man malloc (realloc, calloc, ...). 
