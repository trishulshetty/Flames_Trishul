#include <iostream>
using namespace std;
int noOfMatches(string boy,string girl);
string match(int count);
int finalCount(int count);
int main()
{   
    string boy,girl;
    cout<<"Enter Boy's Name: "<<endl;
    getline(cin,boy);
    cout<<"Enter Girl's Name: "<<endl;
    getline(cin,girl);
    for(int i=0;i<boy.size();i++)
    tolower(boy[i]);
    for(int i=0;i<boy.size();i++)
    tolower(girl[i]);
    int count=noOfMatches(boy,girl);
     string fin=match(count);
    if(fin=="f")
    cout<<"Friends"<<endl;
    if(fin=="l")
    cout<<"Lovers"<<endl;
    if(fin=="a")
    cout<<"Attraction"<<endl;
    if(fin=="m")
    cout<<"Marrige"<<endl;
    if(fin=="e")
    cout<<"Enemies"<<endl;
    if(fin=="s")
    cout<<"Siblings"<<endl;

    return 0;
}

int noOfMatches(string boy,string girl)
{
   int b=boy.size();
   int g=girl.size();
   int count=0;
   for(int i=0;i<b;i++)
   {
    for(int j=0;j<g;j++)
    {   
        if(boy[i]==' ')
        {
            continue;
        }
        if(boy[i]==girl[j])
        {
            count++;
            girl.erase(j,1);
            break;
        }
    }
   }
   return (count);
}


int finalCount(int count)
{
    if(count<=6)
    return count;

    return(count-6);

}
   
string match(int count)
{
  string s="flames";
  while(s.length()!=1)
  {
      if(s.length()>=count)
       s.erase(count-1,1);
      else
       s.erase((count-s.length())-1,1);
  }
  return (s);
}

