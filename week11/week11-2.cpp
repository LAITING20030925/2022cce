int findMaxI(int* stones, int stonesSize){
    int maxI = 0;
    for(int i=0;i<stonesSize;i++){
        if(stones[i] > stones[maxI]){
            maxI = i;
        }
    }
    return maxI;
}
int lastStoneWeight(int* stones, int stonesSize){
    while(true){
        int i=findMaxI(stones,stonesSize);
        int a = stones[i];
        stones[i] = 0;
        int j=findMaxI(stones,stonesSize);
        int b = stones[j];
        stones[j] = 0;
        printf("%d %d\n",a, b);
        if(a==0 && b==0) return 0;
        if(a!=0 && b==0) return a;

        if(a-b>0){
            stones[i] = a-b;
        }
    }
    return 0;
}
