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
            size=n==0?size:n;
            if(n!=0)
                arr=new tp[size];
            srand(time(0));

            for (int i = 0; i < size; i++)
            {
                arr[i] = rand();
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
        void insertionSort(int order)
        {
            int j;
            for (int i = 1; i < size; i++)
            {
                int key = arr[i];
                j = i - 1;
                if(order==1)
                {
                    while (j > -1 && arr[j] < key)
                    {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                }
                else
                {
                    while (j > -1 && arr[j] > key)
                    {
                        arr[j + 1] = arr[j];
                        j--;
                    }
                }
                
                arr[j + 1] = key;
            }
        }
        void removeDuplicateBySorting()
        {
            insertionSort(0);
            int j=0;
            for(int i=0;i<size-1;i++)
            {
                if(arr[i]!=arr[i+1])
                {
                    arr[j++]=arr[i];
                }  
            }
            arr[j++]=arr[size-1];
            size=j;
        }
};

