#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>  
int main() 
{       
    int pid = fork(); 
    if (pid == 0) { 
        printf("Child Process\n"); 
        printf("Process ID : %d\n", getpid()); 
        printf("Parent ID : %d\n", getppid()); 
    } 
  
    else { 
        printf("Parent Process\n"); 
        printf("Process ID : %d\n", getpid()); 
        printf("Parent ID : %d\n", getppid()); 
    } 
    return 0; 
} 
