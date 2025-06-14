#include <iostream>

int getUserInput();
int getXPixel(int,int);
int getYPixel(int,int);

int getXPixel(int rows, int x){
    return rows * x;
}

int getYPixel(int columns, int y){
    return columns * y;
}


int getUserInput(){

    int user_value;

    do
    {
        if (std::cin >> user_value)
        {
            return user_value;
        }
        else
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            std::cout << "Please use a number" << std::endl;
            std::cin >> user_value;
        }

    } while (!(std::cin >> user_value));

    std::cin.clear();
    std::cin.ignore(1000, '\n');

    return 0;
}

int main(){

    int rows{},columns{},pixel_x{},pixel_y{},answer;

    do
    {
        
        
        std::cout<<"Enter number of rows you want your sheet to be:";
        rows = getUserInput();
        
        std::cout<<"Enter number of columns you want your sheet to be:";
        columns = getUserInput();
        
        std::cout<<"Enter the dimensions of your pixel art in x dimension:";
        pixel_x = getUserInput();
        
        std::cout<<"Enter the dimensions of your pixel art in y dimension:";
        pixel_y = getUserInput();
        
        
        int fin_pixel_x{ getXPixel(rows,pixel_x) },fin_pixel_y{ getYPixel(columns,pixel_y) };
        
        std::cout<<fin_pixel_x<<"x"<<fin_pixel_y<<std::endl;
    
        std::cout<<"Calculate another spritesheet?"
                    "\nEnter 1 to quit 0 (or anything)"<<std::endl;
        answer = getUserInput();

    } while (!(answer == 1));

    return 0;
}