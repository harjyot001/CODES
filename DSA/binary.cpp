 #include<iostream>      
using namespace std;      
void print(int a[], int n){    
int i;    
    for(i = 0; i < n; i++)      
    {      
       cout<<a[i]<<" ";       
    }          
}    
 void bubble(int a[], int n){    
 int i, j, temp;   
   bool isSwapped = false;  
   for(i = 0; i < n; i++)    {     
      isSwapped = false;  
      for(j = 0; j < n - i - 1; j++)    {      
            if(a[j] > a[j + 1])    {     
                isSwapped = true;  
                temp = a[j];      
                a[j] = a[j + 1];      
                a[j + 1] = temp;      
 }       
        }    
        if(!isSwapped) {  
            break;  
        }  
    }       
 }    
 int binarySearch(int a[], int beg, int end, int val)    
{    
    int mid;    
    if(end >= beg)     
    {        mid = (beg + end)/2;    
        if(a[mid] == val)    
        {                 
            return mid+1;    
        }    
        else if(a[mid] < val)     
        {  
            return binarySearch(a, mid+1, end, val);    
        }    
        else     
        {  
            return binarySearch(a, beg, mid-1, val);    
        }          
    }    
    return -1;     
}   
int main()      
{      
    int i, j,temp;       
    int a[5] = {15, 16, 11, 13, 14 }; 
    int n = sizeof(a)/sizeof(a[0]);     
    cout<<"Before sorting array elements are: \n";    
    print(a, n);    
    bubble(a, n);    
    cout<<"\nAfter sorting array elements are: \n";      
    print(a, n);    
return 0;    
}    