#include <stdio.h>  
   
int main()  
{    
    int arr[] = {5, 2, 8, 1, 7, 2, 3, 5, 1};   
      
    int n = sizeof(arr)/sizeof(arr[0]);  
       
    int freq[n];  //to stpre the frequencies
    int visited = -1;  
      
    for(int i = 0; i < n; i++)
    {  
        int count = 1;  
        for(int j = i+1; j < n; j++)
        {  
            if(arr[i] == arr[j])
            {  
                count++;  
                freq[j] = visited;  
            }  
        }  
        if(freq[i] != visited)  
            freq[i] = count;  
    }  
      
    //Displays the frequency of each element present in array  
    for(int i = 0; i < n; i++){  
        if(freq[i] != visited){  
            printf("%d - ", arr[i]);  
        
            printf("%d\n", freq[i]);  
        }  
    }  
   
    return 0;  
}  