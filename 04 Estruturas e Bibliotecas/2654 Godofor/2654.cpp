#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

struct Person {
    string name;
    int power;
    int kills;
    int deads;
};

bool lambda(Person& p1, Person& p2){
    if (p1.power != p2.power){
        return p1.power > p2.power;
    } else if (p1.kills != p2.kills){
        return p1.kills > p2.kills;
    } else if (p1.deads != p2.deads){
        return p1.deads < p2.deads;
    } else {
        return p1.name < p2.name;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<Person> persons(n);
    for(int i = 0; i < n; i++){
        string name; int p, k, d;
        cin >> name >> p >> k >> d;

        persons[i] = {name, p, k, d};
    }

    sort(persons.begin(), persons.end(), lambda);
    cout << persons[0].name << endl;
}