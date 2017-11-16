/******************************************************************************
 *
 * Name:    		test03.cpp
 * Version:		NA
 * Purpose: 		- To practice the setw manipulator
 * Author:  		s0s, or TerraformerX on github
 * Date created:	2017/Nov/15
 * Date modified:	2017/Nov/15
 * Usage:   		NA
 * License:		AGPL v3
 * Contact:             http://www.techstuffonly.com/
 *                      s0s@techstuffonly.com 
 *                      irc://irc.spotchat.org:6667/darkCyde
 *                      Direct all spam/flames/hate to /dev/null
 * Modifications:	- NA
 *
 ******************************************************************************/

#include <iostream>
using namespace std;
#include <iomanip>

int main(int argc, char *argv[])
{
    float basic, ta, da, gs;
    basic = 10000; ta = 800; da = 5000;
    gs = basic + ta + da;
    cout<<setw(20)<<"Basic"<<setw(10)<<basic<<endl
    <<setw(20)<<"ta"<<setw(10)<<ta<<endl
    <<setw(20)<<"da"<<setw(10)<<da<<endl
    <<setw(20)<<"gs"<<setw(10)<<gs<<endl;

    return 0;
} 
