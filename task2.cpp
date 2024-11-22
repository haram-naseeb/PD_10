#include<iostream>
using namespace std;
int rotations(string array[],int length);
main()
{
    int rotation;
    cout<<"Enter the length of array: ";
    int length;
    cin>>length;
    string array[length];
    cout<<"Enter directions (right or left): "<<endl;
    for(int j=0;j<length;j++)
    {
    cin>>array[j];
    }
    rotation=rotations(array, length);
    cout<<"No of total rotations: "<<abs(rotation);
}

int rotations(string array[],int length)
{
    int spun=0;
    for(int i=0;i<length;i++)
    {
    if(array[i]=="right")
    {
        spun=spun+90;
    }
    else if(array[i]=="left")
    {
        spun=spun-90;
    }
    }
    spun=spun/360;
    return spun;
}
