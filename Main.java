// Superclass
class Library {
    String libraryName;

    Library(String name) {
        this.libraryName = name;
    }

    void displayLibrary() {
        System.out.println("Welcome to " + libraryName + " Library!");
    }
}

// Subclass
class Book extends Library {
    String title;

    Book(String libraryName, String title) {
        super(libraryName);   // Call parent constructor
        this.title = title;
    }

    void borrow() {
        System.out.println("You have borrowed the book: " + title);
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        // Create a Book object
        Book myBook = new Book("UICT", "Introduction to Java");

        // Use inherited method
        myBook.displayLibrary();

        // Use subclass method
        myBook.borrow();
    }
}