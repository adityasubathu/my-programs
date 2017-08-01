#include<iostream>

using namespace std;
class stu
{
  int info;
  char a,ang;
  public:
  void push();
  void pop();
  stu *next,*top,*temp,*node,*ptr;
};

void stu::push()
{
  node=new stu;
  cout<<"Enter Marks: ";
  cin>>node->info;
  if(node=='\0')
  {
    cout<<"OVERFLOW!!!!!!!!!!!!!"<<endl;
  }
  if (top=='\0')
  {
    top=node;
    top->next='\0';
  }
  else
  {
    node->next=top;
    top=node;
  }
  cout<<"Do you want to enter more marks? ";
  cin>>ang;

  if(ang=='y'||ang=='Y')
  {
    push();
  }
}

 void stu::pop()
 {
   ptr=top;
   while(ptr->next!='\0')
   {
     cout<<ptr->info<<"\t";
     ptr=ptr->next;
   }

   if (top->next=='\0')
   {
     cout<<"UNDERFLOW!!!!!!!!!!!!!!!!"<<endl;
   }
   else
   {
     cout<<"\nElement to pop is: ";
     cout<<top->info<<endl;
     temp=top;
     top=top->next;
     delete(temp);
   }
   cout<<"Do you want to delete more data? ";
   cin>>a;

   if(a=='y'||a=='Y')
   {
     pop();
   }
}

int main()
{
  stu s;
  s.push();
  s.pop();

  getch();
  return 0;
}
