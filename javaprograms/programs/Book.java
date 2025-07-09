package programs;
 class Book {
    String title;
    String author;
    float price;
    Book(String title, String author, float price) {
        this.title = title;
        this.author = author;
        this.price = price;
    }
    void showBookInfo() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Price: $" + price);
        System.out.println("------------------------");
    }
    public static void main(String[] args) {
        Book book1 = new Book("Demon Slayer","Gaani", 2000f);
        Book book2 = new Book("Attack on Titan", "Isuyama", 1550f);
        book1.showBookInfo();
        book2.showBookInfo();
    }
}
