/********************************************************
* Print -- format files for printing *
********************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

int verbose = 0;                //Verbose mode (default = false)
char *out_file = "print.out";   //Output file name (pointer to "print.out")
char *program_name;             //Name of the program
int line_max = 66;              //No of lines per page


/********************************************************
* do_file -- dummy routine to handle a file *
* *
* Parameter *
* name -- name of the file to print *
********************************************************/
void do_file(char *name){
    cout << "Verbose" << verbose << " Lines " << line_max <<
    " Input " << name << " Output " << out_file << endl;
}


/********************************************************
* Usage -- tell the user how to use this program and *
* exit *
********************************************************/
void usage(void){
    cerr << "Usage is " << program_name << " [options] [file-list] \n";
    cerr << "Options\n";
    cerr << "        -v            verbose\n";
    cerr << "        -l<number>    Number of lines\n";
    cerr << "        -o<name>      Set output filename\n";
    exit (8);

}

main(int argc, char *argv[]){
    //Save the program name for future use
    program_name = argv[0];

    /*
    * Loop for each option
    * Stop if we run out of arguments
    * or we get an argument without a dash
    */

   while ((argc > 1) && (argv[1][0] == '-'))
   {
       /* argv[1][1] is the actual option character */
       switch (argv[1][1])
       {
           /* -v verbose */
       case 'v':
           verbose = 1;
           break;
       /*
        * -o<name> output file
        * [0] is the dash
        * [1] is the "o"
        * [2] starts the name
        */

       case '0':
           out_file = &argv[1][2];
           break;
        /*
         * -l<number> set max number of lines
         */
        case 'l':
           line_max = atoi(&argv[1][2]);
           break;
       default:
            cerr << "Bad option " << argv[1] << endl;
            usage();
        }
    /*
     * Move the argument list up one
     * Move the count down one
     */
    ++argv;
    --argc;
   }
   /*
    * At this point all the options have been processed.
    * Check to see if we have no files in the list
    * and, if so, we need to list just standard in
    */
    if (argc == 1){
        do_file("print.in");
    }
    else {
        while (argc > 1){
            do_file(argv[1]);
            ++argv;
            --argc;
        }
    }
    return (0);


}