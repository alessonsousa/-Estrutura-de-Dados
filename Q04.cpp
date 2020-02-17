#include <iostream>

int fum();
int fdois();
int ftres();


int main(int argc, char** argv) {
	int um, dois, tres;
	
	printf("Comecando agora:\n");
	um =  fum();
	dois = fdois();
	tres = ftres();
	printf("Pronto!\n");
	
	return 0;
}

int fum(){
	printf("Um ");
	return 0;
}
int fdois(){
	printf("dois ");
	return 0;
}
int ftres(){
	printf("tres ");
	return 0;
}
