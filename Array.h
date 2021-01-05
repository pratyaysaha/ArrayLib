#include<iostream>
#include<ctime>
#include<climits>
using namespace std;


template<class tp>
class Array
{
    protected :
        tp *arr;
        int size;
    public:
        Array():size(0){}
        Array(int n):size(n)
        {
            arr=new tp[n];
        }
        void get_size()
        {
            if(size>0){delete[] arr;}
            cout<<"Size: ";
            cin>>size;
            arr= new tp[size];
        }
        void inputData()
        {
            if(size<=0){cout<<"Empty Array !!"; return;}
            cout<<"Data : ";
            for(int i=0;i<size;i++)
            {
                cin>>arr[i];
            }
        }
        void pushData(tp data, int index)
        {
            if(index>size || index <0 ) {cout<<"Out of Bounds !!"; return;}
            arr[index]=data;
        }
        void createRandom(int n=0)
        {
            if(size!=0) delete[] arr;
            arr=new tp[n];
            size=n==0?size:n;
            srand(time(0));

            for (int i = 0; i < size; i++)
            {
                arr[i] = (rand() % 100) + 1;
            }
        }
        void display()
        {
            /*Displays thr contents of the array*/
            if(size<=0){cout<<"Empty Array !!"; return;}
            for(int i=0;i<size;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        tp& operator[](int index)
        {
            if(index>size || index<0)
            {
                cout<<"Out of bound!!"<<endl;
                exit(0);
            }
            return arr[index];
        }
        int length()
        {
            return size;
        }
        tp sum(int start=0,int end=-1)
        {
            end=end==-1?(length()-1):end;
            tp res=0;
            for(int i=start;i<=end;i++)
            {
                res+=arr[i];
            }
            return res;
        }
        tp mul(int start=0, int end=-1)
        {
            end=end==-1?(length()-1):end;
            tp res=1;
            for(int i=start;i<=end;i++)
            {
                res*=arr[i];
            }
            return res;
        }
        
};

