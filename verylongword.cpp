#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string word;
    
    for (int i = 0; i < n; i++) {
        cin >> word;
        int len = word.length();
        if (len > 10) {
            cout << word[0] << (len - 2) << word[len - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
