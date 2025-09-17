#include <iostream>
using namespace std;
//oops
class on_or_off{
    public:
    int val;
    bool display_current=true;
    on_or_off(){
        cout<<"getting the current status";
        //get input from sensor if the voltage is 1 or 0(ir sensor)
        cin>>val;
    }
    void detail(){
        if(val==0){
            display_current=false;
            return s1.display(display_current);
        }
    }
        
    
};

int main() {
    on_or_off s1;
    bool k;
    k=s1.detail();
    if(k==true){
        cout<<"the robot moving forward";
    }
    else{
        cout<<"the robot staying rest";
    }
    return 0;
}