#include<iostream>
#include<vector>

using namespace std;

struct Student{
    int x;
    int y;
    bool visited = false;
};

bool can_reach(int x1, int y1, int x2, int y2){
    if(abs(x1-x2) + abs(y1-y2) <= 2){
        return true;
    }
    else{
        return 0;
    }
}

void dfs(Student student, vector<Student> &students){
    student.visited = true;
    for(auto i:students){
        if(can_reach(student.x, i.x, student.y, i.y) && !i.visited){
            dfs(i, students);
        }
    }
}

int main(){
    int count = 0;
    int n;
    cin >> n;
    int n_groups = 0;
    vector<Student> students;
    for(int i = 0 ; i < n; i++){
        int u, j;
        cin >> u >> j;
        students.push_back({u, j});
    }
    bool flag = true;
    while(flag){
        flag = false;
        for(auto i:students){
            if(!i.visited){
                count ++;
                dfs(i, students);
                flag = true;
            }
        }
    }
    cout << count;
    return 0;
}