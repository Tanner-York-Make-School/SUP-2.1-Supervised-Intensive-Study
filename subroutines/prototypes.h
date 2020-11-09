/* This if-statment makes sure that this file cannot be imported twice in the same file 
by checking if the HEADER_H_ variable is alread defined and if not, intializing it and
add the contents of this file to the file importing it.*/
#ifndef HEADERS_H_ 
#define HEADERS_H_

void doSomething(); // This is a prototype in a header file

#endif /* HEADER_H_ */