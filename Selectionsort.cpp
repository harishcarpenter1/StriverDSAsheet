// Assume ith index as a mini element index and compare with each other elements to get the actual mini element index and swap ith index element and mini element index 
// so that mini elements will placed at first. do it for all n-1 elements.

class Solution
{
    public:
    int select(int arr[], int n)
    {
        return 0;
    }
    
    void selectionSort(int arr[], int n)
    {
        for(int i = 0; i<n-1; i++){
            int mini = i;
            for(int j = i+1; j<n; j++){
                if(arr[j] < arr[mini]){
                    mini = j;
                }
            }
            swap(arr[mini],arr[i]);
        }
    }
};
