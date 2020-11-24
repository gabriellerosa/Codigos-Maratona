#include <iostream>
#include <vector>

using namespace std;

int simula(vector<int> &blog, int qtd_convencer) {

    int bloggers_convencidos = 0;
    
    for(int i = 0; i < blog.size(); i++){

        if(bloggers_convencidos < blog[i]){
            if(qtd_convencer > 0) {
                bloggers_convencidos++;
                qtd_convencer--;
            }
        } else {
            bloggers_convencidos++;
        }   
    }

    return bloggers_convencidos;

}

int main(){

    int n, m;

    cin >> n >> m;

    vector<int> blog (n);

    for(int i = 0; i < n; i++){
        cin >> blog[i];
    }

    int str = 0, end = n;
    int mid;
    
    while(str <= end){

        mid = (str + end)/ 2;

        int reviews = simula(blog, mid);

        if(reviews < m) {
            str = mid + 1;
        } else {
            
            if(mid - 1 >= 0 && simula(blog, mid - 1) >= m){
                end = mid - 1;
            } else {
                break;
            }
        }
    }

    cout << mid << endl;

    return 0;
}