#include<iostream>
#include<vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    string num;
    vector<unsigned long long int> bin;

    cout << "Enter a num string: ";
    getline(cin, num);

    unsigned long long int number = stoi(num);

    while(number>0){
        int lastDigit = number % 10; 
        bin.push_back(lastDigit);
        number = number / 10;
    }

    reverse(bin.begin(), bin.end());

    for (int i = 0; i < bin.size(); i++)
    {
        if(bin[i]<5){
            bin[i]=0;
        }
        else{
            bin[i]=1;
        }
    }
    
    ostringstream oss;
    string str;

    for (int num : bin) {
        oss << num;
    }

    str = oss.str();

    cout << "Отриманий рядок: " << str << endl;
  
    return 0;
}