# Wait system call

The **wait** system call(man 2 **wait**) suspends execution of the calling process until one of its children terminates.

## Zombie process.

There is one process tabel per system. The size ofthe process table is finite. If too many zombie processes are generated, the process tablewill be full. i.e the system will not be able to generate any new process, then the system will come to a standstill. Hence, we need to prevent the creation of zombie processes.
