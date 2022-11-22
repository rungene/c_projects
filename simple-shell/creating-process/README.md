# Creating processes

The system call **fork** (man 2 **fork**) creates a new child process, almost identical to the parent (the process that calls **fork**). Once **fork** successfully returns, two processes continue to run the same program, but with different stacks, datas and heaps.

## Function

- System call fork() is used to create process. Takes two arguments

## Return Value

- pid of the child in the parent
- 0 in the child
- -1 if successful

## Parameters

None

## Basic Operation

- After a new child process is created, both process will execute the next instruction following the fork() system call.
- When child exits, it returns back to the parent
- If parent has already exited before child returns, the child gets stranded in what is called an **orphan process**. This is a running process whose parent has finished/terminated.

## Syntax

fork()

## Header file

<unistd.h>

## How code ran

- Parent executes and terminates before child.
- Child becomes an orphan because its parent died while it was alive (executing)
- The init process (mother of all processes) adopts the child and becomes its parent untill it terminates.
- This adoption changes the ppid of the child to 1 (the pid of the init process) during its execution.
- The init process then removes or reaps the child from the process tabel after execution.
- This explains why we couldn't find the child process in the process tabel with "ps -eaf" command.

