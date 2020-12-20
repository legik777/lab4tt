// Copyright 2020 Petr Portnov <gh@progrm-jarvis.ru>

#include <iostream>
#include <string>
int main(int n, char* arr[]) {
	std::string path_to_ftp;
	if (n != 1){
		path_to_ftp = arr[1];
	} else {
		path_to_ftp = arr[0];
	}
	std::cout << path_to_ftp << std::endl;


}
