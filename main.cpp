//
//  main.cpp
//  twelvedays_xmas
//
//  Created by Isabella Wloch on 1/5/21.
//

#include <iostream>
using namespace std;


string wordDay [12];
string giftName [12];



int main() {
    string wordDay[] = {"first" , "second", "third", "fourth" , "fifth" , "sixth", "seventh", "eighth", "ninth" , "tenth", "eleventh" , "twelfth"} ;
    
    string giftName[] = {" a partridge in a pear tree!", ", two turtle doves, and " , ", three french hens" , ", four calling birds" , ", five golden rings" , ", six geese a-laying" , ", seven swans a swimming" , ", eight maids a-milking" , ", nine ladies dancing" , ", ten lords a-leaping" , ", eleven pipers piping", ", twelve drummers drumming"} ;
    
        for( int i= 0; i < 12; i++){
            
            cout << "On the " << wordDay[i] << " day of Christmas, my true love gave to me" << giftName[i];
            for( int u= i - 1; u >= 0; u--) {
                cout << giftName[u];
                }
            cout << endl;
            }
    return 0;
        }



