/* 
 * File:   PayRoll.h
 * Author: Haolan YE (Benjamin)
 * Created on May 10, 2015, 1:39 AM
 */

#include "PayRoll.h"
#include <iostream>
using namespace std;

//Constructor 1
PayRoll::PayRoll() {
    //initialize to 0
    payRate=0;
    wrkHour=0;
    tPay=0;
}

//Constructor 2
PayRoll::PayRoll(float p,int n) {
    //assign the argument to member variables when they are valid
    if(p>=0&&n>=0&&n<=60) {
        payRate=p;
        wrkHour=n;
        tPay=payRate*wrkHour;
    } else {
        //otherwise, set to 0
        payRate=0;
        wrkHour=0;
        tPay=0;
    }
}

//set the pay rate
void PayRoll::setPyRt(float p) {
    if(p>=0) payRate=p;
    else cout<<"Invalid pay rate"<<endl;
}
//set the working hour
void PayRoll::setWkHr(int n) {
    if(n>=0&&n<=60) wrkHour=n;
    else cout<<"Invalid working hour"<<endl;
}

//output result
void PayRoll::pntRsut() const {
    cout<<"Hourly pay rate: $"<<getPyRt()<<endl;
    cout<<"Hours Worked: "<<getWkHr()<<endl;
    cout<<"Total pay :$"<<getTPay()<<endl<<endl;
}
