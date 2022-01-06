#include <iostream>
using namespace
std
;
int
main () {
int
*
px
;
//declare pointer
int
x = 5;
//declare
int
variable
p
x
= &x;
//assign address of the variable to the pointer
cout
<<"Address of x: "<<&x<<
endl
;
cout<<“Value of x: "<<x<<endl;
cout<<"Value of pointer px: "<<px<<endl;
cout
<<"
Px
points to: "<<*
px
<
endl
;
// &
-
reference, *
-
dereference
return 0;
}
