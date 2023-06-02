#include <iostream>
using namespace std;
// break and continue;
int main(){
  for(int i=1; i<=10; i++){

    //----------------break statement-------------
    // if(i==5){
    //     break;
    // }else{
    //     cout<<i;
    // }
    
    //---------------continue statement--------------
    
    if(i==5){
        continue;
    }else{
        cout<<i<<"\n";
    }

  }
  return 0;
}