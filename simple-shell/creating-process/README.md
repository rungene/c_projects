#Creating processes

The system call **fork** (man 2 **fork**) creates a new child process, almost identical to the parent (the process that calls **fork**). Once **fork** successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.

##Function

- System call fork() is used to create process. Takes two arguments

##Return Value

- pid of the child in the parent
- 0 in the child
- -1 if successful

##Parameters

None

##Basic	Operation

- After a new child process is created, both process will execute the next instruction following the fork() system call.
- When child exits, it returns back to the parent
- If parent has already exited befpre child returns, the child gets stranded in what is called a **zombie** state
##Syntax
fork()

##Header file

<unistd.h>
