#include <iostream>
using namespace std;

int openscrable(int p, int b){
    int totaln=14;

    cout<<"enter the Number of  tiles with players: "<<endl;
    cin>>p;


    cout<<"\nenter Number of tiles in the bag: "<<endl;
    cin>>b;

  int score=b-totaln-p;
  cout<<"\n this is the score "<<score<<endl;

  return score;


}


float leverage(float dw, float tw){
    float totalnumber=24;
    cout<<"Double-Word squares remaining: "<<endl;
    cin>>dw;


    cout<<"\nTriple-Word squares remaining: "<<endl;
    cin>>tw;

    float lscore=(dw+tw)/totalnumber;

    return lscore;

    
}



int dscore(int p1, int p2){
    cout<<"Enter the score of 1st player "<<endl;
    cin>>p1;

    cout<<"\nEnter the score of 2nd player "<<endl;
    cin>>p2;

    return p1-p2;
    
}


int luckscore(bool y){
    cout<<"enter yes or not if z is in the game: "<<endl;
    cin>>y;
    int z;
    if(y==1){
        z=10;
    } else{
        z=0;
    }
    cout<<"enter yes or not if x is in the game: "<<endl;
    cin>>y;
    int x;
    if(y==1){
        x=8;
    } else{
        x=0;
    }
    

    cout<<"enter yes or not if q is in the game: "<<endl;
    cin>>y;
    int q;
    if(y==1){
        q=10;
    } else{
        q=0;
    }


    cout<<"enter yes or not if j is in the game: "<<endl;
    cin>>y;
    int j;
    if(y==1){
        j=8;
    } else{
        j=0;
    }



   

    return z+x+q+j;
    
    
}




int main() {
   int p;
   int k;
   float dw, tw;
   int p1, p2;
   bool y;
   int result1=openscrable(p, k);
   float result2= leverage(dw, tw);
   int result3= dscore(p1, p2);
   int result4=luckscore(y);

if(result3<0){
  float playerone= result1*result2+result3-result4;
  cout<<playerone<<endl;
  float playertwo= result1*result2+abs(result3)-result4;
  cout<<playertwo<<endl;
  if(playerone>playertwo){
    cout<<playerone<<" playerone is winning "<<endl;

  } else{
    cout<<playertwo<<" playertwo is winning "<<endl;

  } 
  }else{
    float playerone= result1*result2+result3-result4;
  cout<<playerone<<endl;
  float playertwo= result1*result2+result3-result4;
  cout<<playertwo<<endl;
  if(playerone>playertwo){
    cout<<playerone<<" playerone is winning "<<endl;

  } else{
    cout<<playertwo<<" playertwo is winning "<<endl;

  } 

  }



  


    return 0;
}
