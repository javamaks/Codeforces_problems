#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    int n;
    cin >> n;
    
    string num;
    for(int i = 0; i < n; i++){
        cin >> num;
        
        if(num.find("--") != string::npos){
            x--;
        }
        if(num.find("++") != string::npos){
            x++;
        }
    }
    cout << x << endl;
    return 0;
}

