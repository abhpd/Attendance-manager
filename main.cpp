#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "displayscreen.cpp"
#include "class.cpp"

using namespace std;

int main()
{
    int initsetup=0;
    fstream fin,fout;
    fin.open("subject.txt",ios::in|ios::app);
    fin.seekg(0);
    int sub_count;
    fin>>sub_count;
    vector<subject> s;

    for(int i=0;i<sub_count;i++){
        subject se;
        se.load_data(i);
        s.push_back(se);
    }

    for(int i=0;i<sub_count;i++){
        s[i].print_data();
    }
    
/*
    while(true){
        system("CLS");
        if(initsetup==0){
            setupmenu();
            getchar();
        }
        else{
            display_menu();
            return 0;
        }
    }*/
    return 0;
}
