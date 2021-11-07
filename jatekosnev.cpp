#include <iostream>
#include <string>

using namespace std;

int main(){
    string jatekos1;
    string jatekos2;

    cin >> jatekos1;
    cin >> jatekos2;
    if (jatekos1 == jatekos2){
        cout << "egyforma" << endl;
    } else {
        cout << "kulonbozo" << endl;
    }
    return 0;

}
/*
 #include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << ((s1 == s2) ? "egyforma" : "kulonbozo") << endl;
    return 0;
}
 */
