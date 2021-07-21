#include<iostream>
#include <string>
using namespace std;


    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) { return false; }
        if (s == goal) { return true; }
        int count = 0;
        while(count!=s.size())
        {
           char ch= goal[0];
            goal.erase(0,1);
            goal+=ch;
            cout<<goal<<endl;
            if(s==goal)
            {
                return true;
            }
            count++;
        }
   
    return false;
    }