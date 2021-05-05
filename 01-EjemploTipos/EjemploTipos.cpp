#include <iostream>
#include <cassert>
using namespace std;

int main() {
    //Data Type: Boolean
        //Operation: ==
        assert(true == true);
        //Operation: !=
        assert(true != false);
        //Operation: &&
        assert(true && true);
        //Operation: ||
        assert(true || false);
        //Operation: !
        assert(!false);
    
    //Data Type: int
        //Operation: ==
        assert(3 == 3);
        //Operation: !=
        assert(2 != 3);
        //Operation: <=
        assert(-3 <= 2);
        //Operation: 
        assert(2 >= -3);
        //Operation: +
        assert(2+3 == 5);
        //Operation: -
        assert(2-3 == -1);
        //Operation: *
        assert(2*3 == 6);
        //Operation: /
        assert(-12/3 == -4);
        //Operation: %
        assert(5%2 == 1);

    //Data Type: unsigned
        //Operation: ==
        assert(3 == 3);
        //Operation: !=
        assert(2 != 3);
        //Operation: <=
        assert(3 <= 5);
        //Operation: 
        assert(2 >= 1);
        //Operation: +
        assert(2+3 == 5);
        //Operation: -
        assert(4-3 == 1);
        //Operation: *
        assert(2*3 == 6);
        //Operation: /
        assert(12/3 == 4);
        //Operation: %
        assert(5%2 == 1);

    //Data Type: double
        //Operation: ==
        assert(134.64534 == 134.64534);
        //Operation: !=
        assert(134.64534 != 1.45689);
        //Operation: <=
        assert(45E12 <= 2E14);
        //Operation: 
        assert(2.45678 >= 2.45676);
        //Operation: +
        assert(4.564 + 5.435  == 4.564 + 5.435);
        //Operation: -
        assert(4.456-2.23 == 4.456-2.23);
        //Operation: *
        assert(2.145*3.166 == 2.145*3.166);
        //Operation: /
        assert(27.65849/3.23 == 27.65849/3.23);

    //Data Type: char
        //Operation: ==
        assert('a' == 'a');
        //Operation: !=
        assert('c' != 'b');
        //Operation: <=
        assert('x' <= 'y');
        //Operation: 
        assert('z' >= 'm');
        //Operation: +
        assert('a' + 'b' == 195);
        //Operation: -
        assert('a'-'b' == -1);
        //Operation: *
        assert(' '*'!' == 1056);
        //Operation: /
        assert('@' / ' ' == 2);
        //Operation: %
        assert('A'%' ' == 1);

    //Data Type: string
        string ca = "ca";
        string sa = "sa";
        string as = "as";
        string azul = "azul";
        //Operation: ==
        assert("casa" == "casa");
        //Operation: !=
        assert("πa" != "π");
        //Operation: <=
        assert(as <= sa);
        //Operation: 
        assert(sa >= ca);
        //Operation: +
        assert(ca + sa == "casa");
        //Operation: length
        assert(azul.length() == 4);
        
    return 0;
}