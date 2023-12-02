# Operating Systems Assignment 2
 
Hello! This program uses the banker's algorithm to decide the most efficient order to run a set of processes based on the amount of resources available. This solution uses multidimensional arrays and vectors in order to store the information from a text file. After the information is stored within the multidimensional array the data is then reversed to be processes by the banker's algorithim. After the available resources are taken from the info vector and put into a multidimensional array the amount of resources needed for each process is determined and stored into a separate array. After this the Banker's algorithm is used to determine the order for the processes to run without causing deadlock. It loops through the processes' needed resources to determine if can service it with the resources available and if so would place it into the queue and free the resources to determine the process to run.

# Problem

The Banker's algorithm is used specifically to prevent deadlock within the system. Deadlock is a situation where one process is holding the resources that another process needs and is waiting on another resource to run. If multiple processes are waiting for resources and not sending messages to each other the system is not executing and progressing further. Banker's algorithm ensures that a situation where a process requests more resources than available does not occur within the system.

# Usage

In order to run this program you need to use these commands within a Linux terminal.
$ g++ banker.cpp -o banker
$ ./banker
Also ensure that you have downloaded the input.txt file to run with banker.cpp.
A typical output should look like this:
The following is the safe sequence for the processes to run:
 P1 -> P3 -> P4 -> P0 -> P2