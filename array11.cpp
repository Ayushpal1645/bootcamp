
    #include<iostream>
    using namespace std;
    int main(){
        int r,c;
        cin>>r>>c;
        int arr[100][100];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>arr[i][j];
            }
        }
        int maxsum=0;
        int maxrow=0;
        for(int i=0;i<r;i++){
            int sum=0;
            for(int j=0;j<c;j++){
                sum+=arr[i][j];
            }
            if(sum>maxsum){
                maxsum=sum;
                maxrow=i;
            }
        }
        for(int i=maxrow;i<r-1;i++){
            for(int j=0;j<c;j++){
                arr[i][j]=arr[i+1][j];
            }
        }
        r--;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }