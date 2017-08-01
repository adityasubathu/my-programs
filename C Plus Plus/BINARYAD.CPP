#include<iostream.h>
#include<conio.h>
int main()
{
  int a[60],beg=0,mid,last,item,temp;
  cout<<"Enter the number of elements: ";
  cin>>last;
  cout<<"Enter element of the array: "<<endl;
  for(int i=0;i<last;i++)
    {
      cout<<i<<") ";
      cin>>a[i];
    }


    cout<<"Enter element you want to search: ";
    cin>>item;

    for (int i=0;i<last;i++)
    {
      for (int j=0;j<item;j++)
      {
        if (a[j]>a[j+1])
        {
            a[j+1]=temp;
            a[j]=a[j+1];
            temp=a[j];
        }
        else
        {
            continue;
        }
      }
    }

  while(beg<=last)
  {
    mid=(beg+last)/2;
    if(a[mid]==item)
    {
      cout<<"Element found at position "<<mid;
      break;
    }
    else if(a[mid]<item)
    {
      beg=mid+1;
    }
    else
    {
      last=mid-1;
    }
  }
  return 0;
}
