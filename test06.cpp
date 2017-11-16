/******************************************************************************
 *
 * Name:    		test06.cpp
 * Version:		NA
 * Purpose: 		- To practice stringstream
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
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
    string mystr;
    float price = 0;
    int quantity = 0;

    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline(cin, mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;

    return 0;
}
