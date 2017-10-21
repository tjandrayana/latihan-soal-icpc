#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int T;

    cin >> T;

    for(int i=0;i<T;i++){
        int days,party,n;
        cin >> days;

        cin >> party;
        int arrParty[party+1];
        vector<int> vi;

        int sum = 0;
        for(int j =0; j < party; j++){
            cin >> n;
            arrParty[j] = n;
        }
                 
        for(int j = 1; j <= days; j++){
            if(j%7!=6 && j%7!=0){
                for(int k = 0; k < party;k++){
                    if(j%arrParty[k]==0){
                        vi.push_back(j);
                    }
                }
            }
        }

        sort(vi.begin(),vi.end());
        int temp = -1;
        
        for(int j=0;j<vi.size();j++){            
            if(vi[j]!=temp){
                sum++;
                temp = vi[j];
            }
        }
        
        cout <<  sum << endl;

    }
}