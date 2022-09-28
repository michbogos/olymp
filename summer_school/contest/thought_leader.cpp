#include<iostream>
#include<vector>

using namespace std;

void update_new_leader(int new_leader, vector<string> &students){
    students[new_leader-1].insert(0, "L");
    for(int i = new_leader ; i < students.size(); i = i+new_leader){
        students[i].push_back('S');
    }
}

void remove_leader(int new_leader, vector<string> &students){
    students[new_leader-1].erase(0, 1);
    for(int i = new_leader; i < students.size(); i = i+new_leader){
            students[i].pop_back();
    }
}


int main(){
    int n, q;
    cin >> n >> q;
    vector<string> students(n, "");
    for(int i = 0; i < q; i++){
        char command;
        int id;
        cin >> command >> id;
        if(command == '+'){
            update_new_leader(id, students);
        }
        if(command == '?'){
            if(students[id-1] == ""){
                cout << "Neutral\n";
            }
            else{
                if(students[id-1].at(0) == 'L'){
                    cout << "Leader\n";
                }
                if(students[id-1].at(0) == 'S'){
                    cout << "Supporter\n";
                }
            }
        }
        if(command == '-'){
            remove_leader(id, students);
        }
    }
    return 0;
}