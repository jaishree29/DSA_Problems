#include<bits/stdc++.h>
using namespace std;
void pattern1(int n) {
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern2(int n) {
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n) {
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern4(int n) {
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void pattern5(int n) {
    for(int i = 1; i<=n; i++){
        for(int j = n; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern6(int n) {
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n) {
    for(int i = 0; i<n; i++){
        //space
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<=n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n) {
    for(int i = 0; i<=n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //star
        for(int j=0; j<2*n-(2*i + 1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        pattern9(n);
    }
    return 0;
}