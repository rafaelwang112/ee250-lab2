// Server side C/C++ program to demonstrate Socket programming 
// Here's some include statements that might be helpful for you
#include <string> 
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <sys/socket.h> 
#include <netdb.h>
#include <netinet/in.h> 
#include <arpa/inet.h>
#include <unistd.h>

int main(int argc, char const *argv[]) 
{ 
	// check to see if user input is valid
	char socket_read_buffer[1024];
	
	std::string server_ip = "localhost"; //address to connect to (for connecting to Pi, change IP to that of the Pi: 172.20.10.2)
	std::string server_port = "6666";

	int opt = 1;
	int client_fd = -1;
 
	client_fd = socket(AF_INET, SOCK_STREAM, 0); //creating the client socket

	// Enable reusing address and port
	if (setsockopt(client_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) { 
		return -1;
	}

	// Check if the client socket was set up properly
	if(client_fd == -1){
		printf("Error- Socket setup failed");
		return -1;
	}
	
	// Helping you out by pepping the struct for connecting to the server
	struct addrinfo hints;
	struct addrinfo *server_addr;
	memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	getaddrinfo(server_ip.c_str(), server_port.c_str(), &hints, &server_addr);

	connect(client_fd, (*server_addr).ai_addr, (*server_addr).ai_addrlen); //connecting to the server with parameters of the client socket, the server's socket address, and its length 

	char buffer[256];
	std::cout << "Type input: "; //get the user input
	std::cin.getline(buffer, 256);
	if (std::cin.fail()){
		return -1;
	}

	send(client_fd, buffer, strlen(buffer), 0); //sending the data to the server

	int n;
	n = read(client_fd, socket_read_buffer, 1023);
	socket_read_buffer[n] = '\0';
	std::cout << socket_read_buffer << std::endl;

	close(client_fd); //closing the client socket

	return 0; 
} 
