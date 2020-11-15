#include <iostream>
#include <vector>

using namespace std;

int main(){

    long long n;
    cin >> n;

    vector<long long> nums (n);
    vector<long long> acumulado (n);

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    acumulado[0] = nums[0];
    for(int i = 1; i < n; i++) {
        acumulado[i] = acumulado[i - 1] + nums[i]; 
    }
    
    long long pos = 0;
    long long ans = 0; 
    long long maiorAcumulado = 0;

    for(int i = 0; i < n; i++){
        maiorAcumulado = max(maiorAcumulado, acumulado[i]);        
        ans = max(ans, pos + maiorAcumulado);

        pos += acumulado[i];    
    }

    cout << ans << endl;

    return 0;
}