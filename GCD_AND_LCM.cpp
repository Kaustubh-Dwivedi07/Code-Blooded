Short method to find gcd and lcm of two numbers in CPP

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
     int cin >> a >> b;
     int lcm = std::lcm(a,b) , gcd = __gcd(a,b);
     cout << lcm << " " << gcd;
     return 0;
}
