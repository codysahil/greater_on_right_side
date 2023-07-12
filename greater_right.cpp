	void nextGreatest(int arr[], int n) {
        int g = -1;
        
        for(int i= n-1; i >=0; i--)
        {
            int tmp = arr[i];
            arr[i] = g;
            g = max(g,tmp);
        }
}
