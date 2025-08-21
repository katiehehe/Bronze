//
// Created by Katie He on 2/23/25.
//

#include <iostream>
#include <unordered_map>
#include <sstream>
#include <cstdlib>
using namespace std;

/*
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    unordered_map<string, int> zodiac;
    zodiac.insert({"Ox", 0});
    zodiac.insert({"Tiger", 1});
    zodiac.insert({"Rabbit", 2});
    zodiac.insert({"Dragon", 3});
    zodiac.insert({"Snake", 4});
    zodiac.insert({"Horse", 5});
    zodiac.insert({"Goat", 6});
    zodiac.insert({"Monkey", 7});
    zodiac.insert({"Rooster", 8});
    zodiac.insert({"Dog", 9});
    zodiac.insert({"Pig", 10});
    zodiac.insert({"Rat", 11});
    unordered_map<string, int> m;
    m.insert({"Bessie", 0});

    for(int i = 0; i < n; ++i)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        string name, temp, when, zodiacSign, refPerson;
        ss >> name >> temp >> temp >> when >> zodiacSign >> temp >> temp >> refPerson;
        int rel = m[refPerson];
        int change = (zodiac[zodiacSign] - (rel % 12) + 12) % 12;
        if(when == "previous")
        {
            change -= 12;
        }
        if(change == 0)
        {
            change = 12;
        }
        m.insert({name, rel + change});
    }
    cout << abs(m["Elsie"]);
}
 */