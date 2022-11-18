#Process Identifier (PID) and Parent Process Identifier(PPID)

**What is a process?**

It is an instance of an executing program. It has a unique ID. It is basically a program execution.

**pid_t**

*pid_t* data type is a signed interger types capable of representing a process id

###include

\#include <unistd.h>

**0-pid-ppid.c**

Demonstrates PID

**1-pid-ppid.c**

Demonstrates both PID and PPID 

**pid_max.sh**

A shell script that prints maximum value of process id.
