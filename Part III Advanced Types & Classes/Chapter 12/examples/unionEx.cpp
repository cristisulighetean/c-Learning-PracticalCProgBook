/*
* Define a variable to hold an integer or
* a real number (but not both)
*/
union value {
    long int i_value; // The real number
    float f_value; // The floating point number
} data;

int i; // Random integer
float f; // Random floating point numb

int main( ){

    data.f_value = 5.0;
    data.i_value = 3; // Data.f_value overwritten

    i = data.i_value; // Legal
    f = data.f_value; // Not legal; will generate error
    
    data.f_value = 5.5; // Put something in f_value/c
    i = data.i_value; // Not legal; will generate error
    
    return (0);
}