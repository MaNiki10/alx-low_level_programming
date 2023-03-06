#include "main.h"                                                                                              
  2 #include <unistd.h>                                                                                            
  3                                                                                                                
  4 /**                                                                                                                                         
  5  * _putchar - writes the character c to stdout                                                                                              
  6  * @c: The character to print                                                                                                               
  7  *                                                                                                                                          
  8  * Return: On success 1.                                                                                                                    
  9  * On error, -1 is returned, and errno is set appropriately.                                                                                
 10  */                                                                                                            
 11 int _putchar(char c)                                                                                           
 12 {                                                                                                              
 13         return (write(1, &c, 1));                                                                              
 14 }
