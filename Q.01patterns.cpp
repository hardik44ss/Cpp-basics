#include<iostream>
using namespace std;

class pattern{
    int r,c;
    public:
        pattern(void){
            cout<<"Enter number of rows : ";
            cin>>r;
            cout<<"Enter number of columns : ";
            cin>>c;
        }
        void onetwothree(void ){
            for (int i=1;i<=r;i++) {
                for (int j = 1; j <= c; j++){
                    cout<<j<<" ";
                }
                cout<<endl;                
            }
            cout<<endl;
        }
        void threetwoone(void ){
            for (int i=1;i<=r;i++) {
                // for (int j = c; j >=1 ; j--){
                for (int j = 1; j <=c ; j++){
                    cout<<c-j+1<<" ";
                }
                cout<<endl;                
            }
            cout<<endl;
        }
        void onetoelement (void){
            int num=1;
            int i=0;
            do{
                int j=0;
                do
                {
                    cout <<num<< " ";
                    j++;
                    num++;
                } while (j<c);
                i++;
                cout<<endl;
            }while(i<r);
            cout<<endl;
        }
        void rightriangle(void){
            int i=1;
            while (i<=r){
                int j=1;
                while (j<=i){
                    cout<<"* "; 
                    j++;
                }
                cout<<endl;
                i++;
                }
            cout<<endl;
            int i1=1;
            while (i1<=r){
                int num=i1;
                int j=1;
                while (j<=i1){
                    cout<<num<<" "; 
                    j++;
                    num++;
                }
                cout<<endl;
                i1++;
                }
            cout<<endl;
            int i2=1;
            while (i2<=r){
                int j=1;
                while (j<=i2){
                    cout<<i2<<" "; 
                    j++;
                }
                cout<<endl;
                i2++;
                }
                cout<<endl;
        }
        void iminusj(void){
            int i=1;
            while(i<=r){
                int j=1;
                while(j<=i){
                    cout<<i-j+1<<" ";
                    j++;
                }
                cout<<endl;
                i++;
            }
            cout<<endl;
        }
        void alpha(void){
            for (char ch='A'; ch < 'A'+r; ch++){
                for(int j=0;j<c;j++){
                    cout<<ch<<" ";
                }
                cout<<endl;
            }  
            cout<<endl;
            cout<<endl;
            for(int i=0;i<r;i++){
                 for (char ch='A'; ch < 'A'+c; ch++){
                    cout<<ch<<" ";
                }
                cout<<endl;
            }  
            cout<<endl;
            char ch='A';
            for(int i=0;i<r;i++){
                 for (int j=0;j<c;j++){
                    cout<<ch<<" ";
                    ch++;
                }
                cout<<endl;
            }  
            cout<<endl;
            
            for(int i=0;i<r;i++){
                char ch='A'+i;
                 for (int j=0;j<c;j++){
                    cout<<ch<<" ";
                    ch++;
                }
                cout<<endl;
            }  
        }
        void alphatriangle(void){
            for (char ch='A';ch<'A'+r;ch++){
                for(char aa='A';aa<=ch;aa++){
                    cout<<ch<<" ";
                }
                cout<<endl;
            }
            for (int i=0;i<r;i++){
                char ch='A'+i;
                for(int j=0;j<=i;j++){
                    cout<<ch<<" ";
                    ch--;
                }
                cout<<endl;
            }
            for (int i=0;i<r;i++){
                char ch='A'+r-i;
                for(int j=0;j<=i;j++){
                    cout<<ch<<" ";
                    ch++;
                }
                cout<<endl;
            }
        }
        void spacestar(void){
            for(int i=1;i<=r;i++){
                for(int j=1;j<=r-i;j++){
                    cout<<"  ";
                }
                for (int j=1;j<=i;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(int i=1;i<=r;i++){
                for(int j=1;j<=r-i+1;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
            cout<<endl;
            for(int i=1;i<=r;i++){

                for(int j=1;j<i;j++){
                    cout<<"  ";
                }
                for(int j=1;j<=r-i+1;j++){
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
        void laddertriangle(void){
            for(int i=1;i<=r;i++){
                for(int j=0;j<r-i;j++){
                    cout<<"  ";
                }
                for(int k=1;k<=i;k++) {
                    cout<<k<<" ";
                }
                for(int k=i-1;k>=1;k--) {
                    cout<<k<<" ";
                }
                cout<<endl;
            }
        }
};

int main () 
{
    pattern p1;
    p1.onetwothree();
    p1.threetwoone();
    p1.onetoelement();
    p1.rightriangle();
    p1.iminusj();
    p1.alpha();
    p1.alphatriangle();
    p1.spacestar();
    p1.laddertriangle();

    return 0;
}
