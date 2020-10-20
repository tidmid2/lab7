#include <iostream>
using namespace std;
int main() {
  int age, agev ;
  int stage, stagev;
  bool duration;
  bool status;
  bool moneytype;
  int sum, sumv;
  int prosro4ka;
  int doxod;
  int item;
  cout << "age: ";
  cin >> age;
  
  cout << "stage: ";
  cin >> stage;
  
  cout << "POL: ";
  cin >> duration;
  if(duration == true){cout<<"Male" << endl;}
  else{cout << "Female" << endl;}

  cout << "status: ";
  cin >> status;
  if(status == true){cout<<"Phis" << endl;}
  else{cout << "Jur" << endl;}

  cout << "moneytype: ";
  cin >> moneytype;
  if(status == true){cout<<"Nal" << endl;}
  else{cout << "BNal" << endl;}

  cout << "prosro4eno: ";
  cin >> prosro4ka;

  cout << "Doxod: ";
  cin >> doxod;

  cout << "imuwestvo: ";
  cin >> item;

  cout<<"summa kredita: ";
  cin>> sum ;

  if(status == 1){
      if(moneytype == 1){
          if(duration == 1){
            if(age>=18 && age<=63){
              if(stage>=2){
                  if(doxod>=720000/12){
                    if(prosro4ka>0){cout<<"otkaz";}
                    else{
                      if(sum<=3000000+item){
                        cout<<"odobreno";
                      }
                      else{
                        cout<<"otkaz";
                      }
                    }
                  }
                  else{cout<<"otkaz";}
              }
              else{cout<<"otkaz";}
            }
            else{cout<<"otkaz";}
          }
          else{
            if(age>=18 && age<=58){
              if(stage>=2){
                  if(doxod>=720000/12){
                    if(prosro4ka>0){cout<<"otkaz";}
                    else{
                      if(sum<=3000000+item){
                        cout<<"odobreno";
                      }
                      else{
                        cout<<"otkaz";
                      }
                    }
                  }
                  else{cout<<"otkaz";}
              }
              else{cout<<"otkaz";}
            }
            else{cout<<"otkaz";}
          }


      }//beznal
      else{
          if(duration == 1){
            if(age>=18 && age<=63){
              if(stage>=2){
                  if(doxod>=720000/12){
                    if(prosro4ka>0){cout<<"otkaz";}
                    else{
                      if(sum<=3000000+item){
                        cout<<"odobreno";
                      }
                      else{
                        cout<<"otkaz";
                      }
                    }
                  }
                  else{cout<<"otkaz";}
              }
              else{cout<<"otkaz";}
            }
            else{cout<<"otkaz";}
          }
          else{
            if(age>=18 && age<=58){
              if(stage>=2){
                  if(doxod>=720000/12){
                    if(prosro4ka>0){cout<<"otkaz";}
                    else{
                      if(sum<=3000000+item){
                        cout<<"odobreno";
                      }
                      else{
                        cout<<"otkaz";
                      }
                    }
                  }
                  else{cout<<"otkaz";}
              }
              else{cout<<"otkaz";}
            }
            else{cout<<"otkaz";}
          }
      }
  }

//jur
  else{
      if(status==1){cout<<"otkaz";}
      else{
          if(duration == 1){
            if(age>=18 && age<=63){
              if(stage>=5){
                  if(doxod>=3000000/12){
                    if(prosro4ka>0){cout<<"otkaz";}
                    else{
                      if(sum<=30000000+item){
                        cout<<"odobreno";
                      }
                      else{
                        cout<<"otkaz";
                      }
                    }
                  }
                  else{cout<<"otkaz";}
              }
              else{cout<<"otkaz";}
            }
            else{cout<<"otkaz";}
          }
          else{
            if(age>=18 && age<=58){
              if(stage>=5){
                  if(doxod>=3000000/12){
                    if(prosro4ka>0){cout<<"otkaz";}
                    else{
                      if(sum<=30000000+item){
                        cout<<"odobreno";
                      }
                      else{
                        cout<<"otkaz";
                      }
                    }
                  }
                  else{cout<<"otkaz";}
              }
              else{cout<<"otkaz";}
            }
            else{cout<<"otkaz";}
          }
      }
  }
}
