bool saddle(int arr[MAX][MAX],int n){
for(int i=0;i<n;i++){
    int min = arr[i][0],col_ind=0,k;
    for(int j=0;j<n;j++){
        if(min>arr[i][j]){
            min=arr[i][j];
            col_ind=j;
        }

    }
        for(k=0;k<n;k++)    if(min<arr[k][col_ind])     break;
   
            if(k==n) {
                cout<<"\nsaddle point found  "<<min;
                return true;
            }
}
        cout<<"\nno saddle point\n";
        return false;
}