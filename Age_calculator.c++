#include<iostream>
using namespace std;
int main(){
int i,number,choice,ans,c,birthday,celebrate,birthyear;
cout<<"Select number between 1 to 9 -"<<endl;
cin>>number;
if(number>9){
cout<<"Select number between 1 to 9 -"<<endl;
cin>>number;}
else{
    cout<<"\n choose between 9";
}
cout<<"\n case:1 for already celebrate birthday this year"<<"\n case:2 for not celebrate birthday this year";
cout<<"\n Enter choice"<<endl;
cin>>choice;
do{
switch(number){
case 1:
    cout<<"\n enter 1761";
    cin>>birthday;
    break;

case 2:
    cout<<"\n enter 1760";
    cin>>celebrate;
    break;
}
}
while(false);


    cout<<"\n Enter birthyear"<<endl;
    cin>>birthyear;
    ans=(number*2+5)*(50)+1761-birthyear+10;
    cout<<ans<<" \n \t first is your chosen number and second two is your age";


return 0;
}
