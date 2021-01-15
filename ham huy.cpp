#include <iostream>  
using namespace std;  
class NhanVien  {  
   public:  
        NhanVien() {    
            cout << "Ham xay dung duoc goi" << endl;    
        }    
        ~NhanVien() {    
            cout << "Ham huy duoc goi" << endl;    
        }  
};  
int main(void) {  
    NhanVien n1;   
    NhanVien n2; 
    return 0;  
}
