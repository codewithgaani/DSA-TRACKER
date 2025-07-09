package programs;
 class averagenumbers {
    public static void main(String args[]){
        if(args.length==0){
            System.out.println("no integers provided");
        }
        int sum=0;
        int count =0;
        for(int i=0;i<args.length;i++){
            sum=sum+Integer.parseInt(args[i]);
            count++;
        }
        if(count==0) {
            System.out.println("No valid integers provided");
        }
        else{
            double av=(double)sum/count;
            System.out.println("Average:"+av);
        }
    }   
}
