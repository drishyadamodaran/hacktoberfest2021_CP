int binsearch(int A[], int low, int high, int key){
    
    if (low<=high){
        int mid = low + (high-low)/2;

        if(key== A[mid]){
            return mid;
        }
        
        else if (key<A[mid]){
            return binsearch(A, low, mid-1, key);
        }
        
        else
        {
            return binsearch(A, low, mid+1, key);
        }
    }
    return -1;
}

int main(){
    int m;
    cout<<"Enter length of the array: ";
    cin>>m;
    int A[m];

    for(int i=0; i<m; i++){
        cin>>A[i];
    }
    //Example code to call the binary function
    //cout<<binsearch(A,0,m-1,1);
  
    return 0;
}

  
