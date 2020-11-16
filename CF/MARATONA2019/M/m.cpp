#include <iostream>
#include <vector>

using namespace std;

bool solve(long long mid, vector<int> &p, long long c, long long qtd_come) {
     
    long long parti = 0;
    long long sum = 0;

    for(int i = 0; i < p.size(); i++) {
        
        if(p[i] > qtd_come) {
            return false;
        }
        
        sum += p[i];

        if(sum > qtd_come) {
            parti++;
            sum = p[i];
        }        
    }
    
    if(parti + 1 > c){ 
        return false;
    }

    return true;   
}

int main() {

    long long sp, c, t;
    cin >> sp >> c >> t;

    vector<int> p (sp);

    for(int i = 0; i < sp; i++){
        cin >> p[i];
    }

    long long mid = 0, str = 1, end = 10000000010;
    
    while(str < end) {    
        mid = (str + end) / 2;
                
        if(solve(mid, p, c, t * mid)) {            
            end = mid;
        } else {
            str = mid + 1;
        }
    }

    cout << str << endl;

    return 0;
}