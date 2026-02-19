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
// longest common prefix 


#include <iostream>
using namespace std;
string commonPrefix(string str1, string str2) {
    string result = "";
    int minLength;
    if (str1.length() < str2.length()) minLength = str1.length();
    else if (str1.length() > str2.length()) minLength = str2.length();
    for (int i =0 ; i < minLength ; i++) {
        if (str1[i] == str2[i]) {
            result += str1[i];

        }else break;

    }
    return result;
}
string commonLongestPrefic(string arr[], int size) {
    if (size == 0) return "";
   string common = arr[0];
    for (int i =0 ; i < size ; i++) {
        common = commonPrefix(common, arr[i]);
        if (common == "") return "";


    }
    return common;

}
int main() {
    string arr[] ={"john", "johan", "johnathan"};
    cout << commonLongestPrefic(arr, 3) << endl;

    

    return 0;
}










