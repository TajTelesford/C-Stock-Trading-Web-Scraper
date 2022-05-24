//
//  main.cpp
//  Playground
//
//  Created by Taj Telesford on 5/24/22.
//

#include <iostream>
#include <curl/curl.h>


char function(char &x){
    return x;
}

void display(char(*operation)(char), char x){
    std::cout << operation(x) << std::endl;
}

int main(int argc, const char * argv[]) {
    
    std::cout << "Hello World" << std::endl;
    
    
    return 0;
}
