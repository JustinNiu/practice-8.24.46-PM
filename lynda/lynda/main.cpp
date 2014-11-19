//
//  main.cpp
//  lynda
//
//  Created by MusicTech on 11/14/14.
//  Copyright (c) 2014 MusicTech. All rights reserved.
//

#include <iostream>

#define swap(a,b){
a^=b;
b^=a;
a^=b;
}

using namespace std;

int main(int argc, const char * argv[]) {
    int this=23;
    int that=11;
    cout << "this is "<<this<<" that is "<<that<<endl;
    swap(this, that);
    cout << "this is "<<this<<" that is "<<that<<endl;
    return 0;
}
