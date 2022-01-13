double avg(int arr[],int size){
    int sum=0;
    double avg;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    avg=(double)sum/size;
    return(avg);
}

double SD(int arr[], int size){
    double S;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=pow((arr[i]-avg(arr,size)),2);
    }
    SD=(double)sqrt(sum/(size-1));      
    return(SD);
}