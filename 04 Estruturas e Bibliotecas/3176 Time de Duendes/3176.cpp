#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

struct Elf {
    string name;
    int age;
};

bool lambda(Elf& e1, Elf& e2){
    if (e1.age != e2.age) return e1.age > e2.age;
    return e1.name < e2.name;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<Elf> elfs(n);

    for(int i = 0; i < n; i++){
        string name; int age;
        cin >> name >> age;
        elfs[i] = {name, age};
    }

    sort(elfs.begin(), elfs.end(), lambda);
    for(int i = 0; i < n/3; i++){
        cout << "Time " << i+1 << endl;
        for(int k = i; k < n; k += (n/3)){
            cout << elfs[k].name << " " << elfs[k].age << endl;
        }
        cout << endl;
    }
}