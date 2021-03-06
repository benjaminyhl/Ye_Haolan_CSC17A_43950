/* 
 * File:   Date.h
 * Author: Haolan YE(Benjamin)
 * Created on April 30, 2015, 2:48 PM
 * Purpose: Gaddis_8thEd_Chap13_ProgChal 1
 */

#ifndef DATE_H
#define	DATE_H

class Date {
    protected:
        int yr;//year
        int mt;//month
        int dy;//day
    public:
        Date();//Default constructor
        Date(int yr,int mt,int dy);//constructor
        void setYear(int yr);
        void setMnth(int mt);
        void setDay(int dy);
        void pntDate() const;
};

#endif	/* DATE_H */

