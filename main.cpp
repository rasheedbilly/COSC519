//
//  main.cpp
//  COSC519_main

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, const char * argv[]) {
    
    if(argc < 2){
        cout << "There are no arguments" << endl;
        return -1;
    }
    
    
    if(strcmp(argv[1], "createDir") == 0){
        
        //createDir(argv[2]);
    }
    else if(strcmp(argv[1], "deleteDir") == 0){

        //deleteDir(argv[2]);
    }
    else if(strcmp(argv[1], "get") == 0){

        //get(argv[2]);
    }
    else if(strcmp(argv[1], "set") == 0){
        
        //set(argv[2]);

    }
    else if(strcmp(argv[1], "move") == 0){
        
        //set(argv[2],argv[3]);
        
    }
    else if(strcmp(argv[1], "read") == 0){
        
        //read(argv[2]);
        
    }
    else if(strcmp(argv[1], "write") == 0){
        
        //write(argv[2]);
        
    }
    else if(strcmp(argv[1], "close") == 0){
        
        //close(argv[2]);
        
    }
    else if(strcmp(argv[1], "open") == 0){
        
        //open(argv[2]);
        
    }
    else if(strcmp(argv[1], "deleteFile") == 0){
        
        //deleteFile(argv[2]);
        
    }
    else if(strcmp(argv[1], "createFile") == 0){
        
        //createFile(argv[2]);
        
    }
    
    return 0;
}
