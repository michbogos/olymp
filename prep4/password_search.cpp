#include<fstream>
#include<map>
#include<string>

using namespace std;

int main(){
    map<string, int> d;
    ifstream input("input.txt");
    ofstream output("output.txt");
    int n;
    string str;
    while(!input.eof()){
        input >> n;
        input >> str;
        d.clear();
        for(int i = 0; i <= str.length()-n; i++){
            try
            {
                d[str.substr(i, n)] += 1;
            }
            catch(const std::exception& e)
            {
                d[str.substr(i, n)] = 1;
                
            }
            
        }
        int max = 0;
        string sol = "";
        for (auto const& x : d){
            if(x.second > max){
                max = x.second;
                sol = x.first;
            }
        }
        output << sol << "\n";
    }
    return 0;
}
