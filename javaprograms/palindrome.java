class palindrome {
     public static void main(String args[]){
    if(args.length!=1){
            System.out.println("NOT inputted single word");
            return;
        }
        String input=args[0];
        String rev="";
        for(int i=input.length()-1 ; i>=0;i--){
            rev+=input.charAt(i);
        }
        if(input.equals(rev)){
            System.out.println(input+" is a palindrome");
        }
        else{
            System.out.println(input+" is not a palindrome");
        }
     }
}
