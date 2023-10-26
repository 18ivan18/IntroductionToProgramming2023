    //     Given the following program:

   int main()
   {
      int option_viewed{ 0x01 };
      int option_edited{ 0x02 };
      int option_favorited{ 0x04 };
      int option_shared{ 0x08 };
      int option_deleted{ 0x10 };

      int myArticleFlags;

      return 0;
   }

    // a) Write a line of code to set the article as viewed.


    // b) Write a line of code to check if the article was deleted.


    // c) Write a line of code to clear the article as a favorite.


    // d) why are the following two lines identical?

    // myflags &= ~(option4 | option5); // turn options 4 and 5 off
    // myflags &= ~option4 & ~option5; // turn options 4 and 5 off