#include <iostream>
int main() {
    char a[] ="abrakadabra";
    char b[] ="rakada";
    int alen=sizeof(a)-1;
    int blen=sizeof(b)-1;
    bool bInA=false;
    std::cout<<alen<<"\n";
    std::cout<<blen<<"\n";

    for (int i=0;i<alen & !bInA;i++) {
        if (*(a+i)==*(b+0)) {
            int k=1;
            bool found = true;
            for (int j=1;j<blen & found;j++) {
                if (*(b + j)==*(a+i+j)) {
                    k++;
                } else {
                    found =false;
                }
            }
            if (k==blen) {
                bInA=true;
            }
        }
    }
    if (bInA) {
        std::cout<<"Yes";
    } else {
        std::cout<<"No";
    }
}
