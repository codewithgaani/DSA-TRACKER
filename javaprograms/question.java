class question{
    public static void main(String args[]){
        if(args.length==0){
            System.out.println("no arguments were passed");
        }
        for(int i=args.length-1;i>=0;i--){
            System.out.print(args[i]+" ");
        }
        System.out.println();
    }
}
