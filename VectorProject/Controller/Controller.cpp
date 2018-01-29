//
//  Controller.cpp
//  VectorProject
//
//  Created by Morales, Brittney on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller:: Controller()
{
    
}

void Controller:: start()
{
    strVector();
    intVector();
}

string Controller:: strVector()
{
    vector<string> vStr;
    vStr = {"Yokoso","welcome","Bonjour","Huanying","Bienvenidos"};
    
    for(int i = 0; i < vStr.size(); i++)
    {
        cout << "Index is: " << i << ". Inside this is: " << vStr[i] << endl;
    }
    
    return "0";
}

int Controller:: intVector()
{
    vector<int> vInt;
    vInt = {10,100,90,16,45,85,94};
    
    for (int i = 0; i <  vInt.size(); i++)
    {
        cout << "Index is: " << i << ". Inside this is: " << vInt[i] << endl;
    }
    vInt.push_back(98765);
    cout << "The size of my vector is: " << vInt.size() << endl;
    for (int i = 0; i <  vInt.size(); i++)
    {
        cout << "Index is: " << i << ". Inside this is: " << vInt[i] << endl;
    }
    
    vInt.pop_back();
    cout << "The size of my vector is: " << vInt.size() << endl;
    
    for (int i = 0; i <  vInt.size(); i++)
    {
        cout << "Index is: " << i << ". Inside this is: " << vInt[i] << endl;
    }
    return 1;
}
