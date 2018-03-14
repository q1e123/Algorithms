#include<iostream>

#define MAX 10

int v[MAX],n;

void read(){
    std::cin>>n;
}

void write () {
    for(int i=1; i<=n; i++)
         std::cout<<v[i];
    std::cout<<"\n";
}

bool verify (int k) {
    return 1;
}
void bt(int k) {
    for(int i=1; i<=n; i++) {
        v[k]=i;
        if(verify(k))
            if(k==n) write();
            else bt(k+1);
    }
}
int main () {
    read();
    bt(1);
    return 1;
}
