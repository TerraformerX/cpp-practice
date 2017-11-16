/******************************************************************************
 *
 * Name:    		test05.cpp
 * Version:		NA
 * Purpose: 		- To practice pointers
 * Author:  		s0s, or TerraformerX on github
 * Date created:	2017/Nov/16
 * Date modified:	2017/Nov/16
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
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string mystr;
//    string *ptr;

    cout << "Say something: ";
    getline(cin, mystr);
    cout << "Size of mystr: " << sizeof(mystr) << "\n";
    cout << "Length of mystr: " << mystr.length() << "\n";
    cout << "Contents of mystr: " << mystr << "\n";
    cout << "Value of &mystr: " << &mystr << "\n";
    cout << "Size of &mystr: " << sizeof(&mystr) << "\n";

    return 0;
}
