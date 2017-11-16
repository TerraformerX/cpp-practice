/******************************************************************************
 *
 * Name:    		test04.cpp
 * Version:		NA
 * Purpose: 		- To practice getline
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

    cout << "What's your name? ";
    getline(cin, mystr);
    cout << "Hello, " << mystr << ".\n";
    cout << "What is your favorite team? ";
    getline (cin, mystr);
    cout << "I like " << mystr << ", too!\n";

    return 0;
} 
