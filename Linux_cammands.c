#include <stdio.h>

int main() {

       
       int cammand;
       
       // Linux cammands 
       printf("Enter the cammand :\n");
       scanf("%d",&cammand);
      
      
       // case 1 --> ls
       // case 2 --> ll
         // case 3 --> mkdir
         // case 4 --> uname -a
         // case 5 --> working Directory
        // case 6 --> touch
      // case 7 ---> df
      // case 8 ---> man
       
       switch(cammand){
       
       
           // print ls cammand
            case(1):
           
               printf("~ jarvis_localhost $ ls \n");
               printf(" ");
               printf("Desktop music  Downloads Documents  temp");
               break;
               
              //print ll cammand  
            case(2):
           
                printf("~ Jarvis_localhost $ : ll\n");
                printf(" ");
                
                
                
                while(2){
                
                printf("drwxr-xr-x root root 4096 file.txt ...\n");
                printf(" ");
                printf("drwxr-xr-x root root 402k log.txt ...\n");
                
                printf(" ");
                printf("drwxr-xr-x root root 42M Hello.py ...\n");
                printf(" ");
                
                printf("drwx------.3 root user 3.4K Feb\n");
                printf(" ");
                printf("-rw-------.1 root u1-user  172k.bash_history");
            
                
                break;
        
           
           }
               break;
              
              // case 3 mkdir
              case(3):
              
                  
                  
                  printf("\n~ jarvis_localhost $ mkdir\n");
                  
                
                  
                  printf("~ jarvis_localhost $ Kali/");
                  
                  printf("\n~ jarvis_localhost $ cd Kali/\n");
                  
                  printf("~ home/jarvis/kali/ $ touch linux.sh\n");
                  printf("~ home/jarvis/Kali/ $ ls \n");
                  
                  printf("~ home/jarvis/Kali/ $ linux.sh \n");
                  printf("~ home/jarvis/Kali/ $ cd ~ \n");
                  
                  printf("~ home/jarvis_localhost $  \n");
                  
                  
                  break;
              
              // print the uname -a  
              case(4):
              
                  printf("HOSTNAME :\n");
                  printf("\nUbuntu Jarvis 5.4.0-91-generic #102-Ubuntu SMP Wed Apr 21 14:56:35 UTC 2021 x86_64 x86_64 x86_64 GNU/Linux\n");
                  printf("===========*=========");
                  
                  break;
                  
               // prints current working directory   
              case(5):
              
                   printf("\ncd /path/to/directory");
                   
                   break;
                   
              case(6):
              
                  printf("\n~ jarvis_localhost $ touch new_file.txt");
                  printf(" ");
                  printf("\n~ jarvis_localhost $ ls");
                  printf(" ");
                  printf("\n~ jarvis_localhost $ new_file.txt");
                  break;
                  
                  
              case(7):
                 
                 printf("\n ~ jarvis_localhost $\n");
              
                 printf("'\nFilesystem     1K-blocks    Used Available Use Mounted dev-sda1 2698680 7478'");
                 break;
                 
                 
              case(8):
              
              
                printf("\n ~ jarvis_localhost $ man \n");  
                
                printf("\n :man [-acfhklw]×[-C file] [-M path]×[-m path]×[-S subsection]×[[-s] section] name");
                
                break;
                 
              
           
           default:
           
               printf("\nCammand not found || pkg not installed!!");
           
       }
       



    return 0;
}
