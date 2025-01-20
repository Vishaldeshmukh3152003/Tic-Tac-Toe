#include<iostream>
using namespace std;
/*===========================================================X*/
void X(int arr[][3],int x)
{
     int h=0,k=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
     if(arr[i][j]==x)
     {
        h=i;k=j;
     }
    }
}


switch (x)
{
    case 1:
  arr[h][k]=-1;
    break;
    case 2:
  arr[h][k]=-1;
    break;
    case 3:
  arr[h][k]=-1;
    break;
    case 4:
  arr[h][k]=-1;
    break;
    case 5:
  arr[h][k]=-1;
    break;
    case 6:
  arr[h][k]=-1;
    break;
    case 7:
  arr[h][k]=-1;
    break;
    case 8:
  arr[h][k]=-1;
    break;
    case 9:
  arr[h][k]=-1;
    break;

default:
cout<<"the argument is not match:"<<endl;
    break;
} 



    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
     cout<<arr[i][j]<<"   ";
    }

    cout<<endl<<endl<<endl;
    }




}


/*==================================================O*/


void O(int arr[][3],int o)
{
     int h=0,k=0;
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
     if(arr[i][j]==o)
     {
        h=i;k=j;
     }
    }
}


switch (o)
{
    case 1:
  arr[h][k]=0;
    break;
    case 2:
  arr[h][k]=0;
    break;
    case 3:
  arr[h][k]=0;
    break;
    case 4:
  arr[h][k]=0;
    break;
    case 5:
  arr[h][k]=0;
    break;
    case 6:
  arr[h][k]=0;
    break;
    case 7:
  arr[h][k]=0;
    break;
    case 8:
  arr[h][k]=0;
    break;
    case 9:
  arr[h][k]=0;
    break;

default:
cout<<"the argument is not match:"<<endl;
    break;
} 


    for(int i=0;i<3;i++) 
    {
    for(int j=0;j<3;j++)
    {
     cout<<arr[i][j]<<"   ";
    }

    cout<<endl<<endl<<endl;
    }  



}

/*=================================check Y*/
bool checkX(int arr[][3])
{
/*row*/
if(arr[0][0]==-1&&arr[0][1]==-1&&arr[0][2]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}
if(arr[1][0]==-1&&arr[1][1]==-1&&arr[1][2]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}
if(arr[2][0]==-1&&arr[2][1]==-1&&arr[2][2]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}

/*col*/
if(arr[0][0]==-1&&arr[1][0]==-1&&arr[2][0]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}
if(arr[0][1]==-1&&arr[1][1]==-1&&arr[2][1]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}
if(arr[0][2]==-1&&arr[1][2]==-1&&arr[2][2]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}
/*diagonal*/

if(arr[0][0]==-1&&arr[1][1]==-1&&arr[2][2]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}
if(arr[0][2]==-1&&arr[1][1]==-1&&arr[2][0]==-1)
{
cout<<"X win the match:"<<endl;
return true;
}


return false;
}



/*=======================================chackO*/
bool checkO(int arr[][3])
{
/*row*/
if(arr[0][0]==0&&arr[0][1]==0&&arr[0][2]==0)
{
cout<<"O win the match:"<<endl;
return true;
}
if(arr[1][0]==0&&arr[1][1]==0&&arr[1][2]==0)
{
cout<<"O win the match:"<<endl;
return true;
}
if(arr[2][0]==0&&arr[2][1]==0&&arr[2][2]==0)
{
cout<<"O win the match:"<<endl;
return true;
}

/*col*/
if(arr[0][0]==0&&arr[1][0]==0&&arr[2][0]==0)
{
cout<<"O win the match:"<<endl;
return true;
}
if(arr[0][1]==0&&arr[1][1]==0&&arr[2][1]==0)
{
cout<<"O win the match:"<<endl;
return true;
}
if(arr[0][2]==0&&arr[1][2]==0&&arr[2][2]==0)
{
cout<<"O win the match:"<<endl;
return true;
}
/*diagonal*/

if(arr[0][0]==0&&arr[1][1]==0&&arr[2][2]==0)
{
cout<<"O win the match:"<<endl;
return true;
}
if(arr[0][2]==0&&arr[1][1]==0&&arr[2][0]==0)
{
cout<<"O win the match:"<<endl;
return true;
}


return false;
}
/*=================================================project*/
int project(int arr[][3])
{

int index=0;
while(index<9)
{

cout<<"this is x turn presss:"<<endl;
    int x=0;
    cin>>x;
    X(arr,x);
     index++;
     bool x1=checkX(arr);
     if(x1==true)
     {
        break;
     }
     

if(index>=9)
{
    break;
}

cout<<"this is O turn press:"<<endl;
    int o=0;
    cin>>o;
    O(arr,o);    
      bool y=checkO(arr);
     if(y==true)
     {
        break;
     } 
    index++;
}


}

int main()
{

int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};



for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<arr[i][j]<<"   ";
    }

    cout<<endl<<endl<<endl;
}





 project(arr);

return 0;
}