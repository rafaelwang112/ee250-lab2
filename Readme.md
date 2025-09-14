# Lab 2

## Team Members
- Rafael Wang
- Robert Fan

## Lab Question Answers

Answer for  QA.1: Because of the 50% loss, the reliability of the UDP decreases as some numbers do not arrive at all. This is because UDP has unreliable delivery because it lacks any way of acknowledging successful data transfer. Thus, if there is packet loss, the receiver never knows that the packet was sent in the first place and it will be lost. 

Answer for QA.2: Despite the 50% loss, the reliability of TCP doesn't change and remains stable because if the receiver doesn't receive a packet, it will send a signal to the sender that it didn't receive it and will wait until it is received before moving on to the next packet.

Answer for QA.3: The speed of the TCP response became slower because TCP acknowledges the transfer of data, and thus if the receiver doesn't receive a packet, it will wait until the packet is successfully resent to the receiver. This maintains TCP's sequential transfer of data, but may cause the response to becomes slower because of having to wait until the current packet is received.

Answer for QC.1: argc tells you how many arguments there are in argv. argv is an array of C-string pointers of all the command line arguments passed to the program.

Answer for QC.2: A UNIX file descriptor is a unique identifier, such as an integer, associated with a file or socket that is used by the OS to access the file or socket. A file descriptor table is a data structure that stores the file descriptors for each process. 

Answer for QC.3: A struct is a data type (similar to a class) that groups several related variables under one name. The structure of sockaddr_in is: 
```
     struct sockaddr_in {
         short            sin_family;
         unsigned short   sin_port;
         struct in_addr   sin_addr;
         char             sin_zero[8];
     };
```
Answer for QC.4: The input parameters are domain (specifies the communication domain), type (the type of socket created), and protocol (the protocol to be used with the socket). The return value is a file descriptor, or, in the case of an error, -1. 

Answer for QC.5: For bind(), the input parameters are sockfd (the file descriptor), addr (a pointer to a struct sockaddr containing the address to bind to), and addrlen (size of the address structure). The input parameters for listen() are sockfd (the file descriptor) and backlog (the number of pending connections that can be queued).  

Answer for QC.6: The while(1) loop is used so that the server runs indefinitely and can continuously accept and handle incoming connections. Based on the code structure, if there are multiple simultaneous connections to handle, the program can only handle one connection at a time before accepting the next, so this may cause problems in terms of delays. 

Answer for QC.7: fork() creates a new child process running in sync with the parent process. It can be applied here to better handle multiple connections because when a new connection is incoming, the fork() commmand will create a child process that handles the connection while the parent process continues to accept new connections. In turn, this allows the processing of multiple connections.

Answer for QC.8: A system call is a way for the program to request a service from the kernel of the OS.

Answer for QA.4: LLMs were not used for this lab.
