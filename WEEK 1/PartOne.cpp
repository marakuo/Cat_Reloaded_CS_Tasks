// checking if the number is palindrome 
#include <iostream>

bool isPalindrome(int x) {
    int reversed = 0, digit =0, original = x;
    while (x > 0) {
        digit = x % 10;
        reversed = reversed * 10 + digit;
        x/=10;
    }
  return (reversed == original);

}
using namespace std;
int main() {
    int x;
    cin >> x;
if (isPalindrome(x)) cout<<"true"<<endl;
    else cout<<"false"<<endl;


    return 0;
    }
/////////////////////////////////////////////////
// PLUS ONE 
#include <iostream>
using namespace std;

int main() {


    int digits[100];
    int n;
    cin >>n;

    for (int i = 0; i < n; i++) {
        cin >> digits[i];
    }


    digits[n - 1]++;


    for (int i = n - 1; i > 0; i--) {
        if (digits[i] == 10) {
            digits[i] = 0;
            digits[i - 1]++;
        }
    }


    if (digits[0] == 10) {
        cout << 1 << " ";
        digits[0] = 0;
    }


    for (int i = 0; i < n; i++) {
        cout << digits[i] << " ";
    }

    return 0;
}



////////////////////////












