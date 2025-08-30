// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     int health;

// };
// int main(){

//     //creation of Object
//     Hero h1;

//     cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }




// #include<iostream>
// using namespace std;
// class Hero{

    
// };
// int main(){

//     //creation of Object
//     Hero h1;

//     cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }








// #include<iostream>
// using namespace std;
// class Hero{

//     public:
//     //properties
//     int health;

//     private:
//     char level;


//     void print(){
//         cout<<level<<endl;
//     }
    
// };
// int main(){

//     //creation of Object
//     Hero ramesh;

//     cout<<"Health is: "<< ramesh.health<<endl;
//     cout<<"Level is: "<< ramesh.level<<endl;

//     // cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }









// #include<iostream>
// using namespace std;
// class Hero{

//     public:
//     //properties
//     int health;
//     char level;


//     void print(){
//         cout<<level<<endl;
//     }
    
// };
// int main(){

//     //creation of Object
//     Hero ramesh;


//     ramesh.health=70;
//     ramesh.level='A';

//     cout<<"Health is: "<< ramesh.health<<endl;
//     cout<<"Level is: "<< ramesh.level<<endl;

//     // cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }







// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;


//     void print(){
//         cout<<level<<endl;
//     }


//     // yaha pr ham health ko access nhi kr payenge kyuki yeh private hai aur error bhi ayega access krne me helth ko to is case me ham kya kr skte hai? to yaha pr ek concept hai getter aur setter ka uska use krne wale hai
    
// };
// int main(){

//     //creation of Object
//     Hero ramesh;


//     ramesh.health=70;
//     ramesh.level='A';

//     cout<<"Health is: "<< ramesh.health<<endl;
//     cout<<"Level is: "<< ramesh.level<<endl;

//     // cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }










// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;


//     void print(){
//         cout<<level<<endl;
//     }

//     //getter
//     int getHealth(){
//         return health;
//     }

//     char getLevel(){
//         return level;
//     }

//     //setter
//     void setHealth(int h){ 
//         health=h;
//     }

//     void setLevel(char l){
//         level=l;
//     }
    
// };
// int main(){

//     //creation of Object
//     Hero ramesh;

//     cout<<"Remesh health is: "<<ramesh.getHealth()<<endl;


//     // ramesh.health=70;
//     ramesh.level='A';

//     cout<<"Health is: "<< ramesh.getHealth()<<endl;
//     cout<<"Level is: "<< ramesh.level<<endl;

//     // cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }
















// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;


//     void print(){
//         cout<<level<<endl;
//     }

//     //getter
//     int getHealth(){
//         return health;
//     }

//     char getLevel(){
//         return level;
//     }

//     //setter
//     void setHealth(int h){ 
//         health=h;
//     }

//     void setLevel(char l){
//         level=l;
//     }
    
// };
// int main(){

//     //creation of Object
//     Hero ramesh;

//     cout<<"Remesh health is: "<<ramesh.getHealth()<<endl;
//     ramesh.setHealth(70);
//     ramesh.level='A';

//     cout<<"Health is: "<< ramesh.getHealth()<<endl;
//     cout<<"Level is: "<< ramesh.level<<endl;

//     // cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }








// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;



//     Hero(){
//         cout<<"Constructor called"<<endl;
//     }


//     //parameterized constructor
//     Hero(int health){
//         health=health;
//     }

//     void print(){
//         cout<<level<<endl;
//     }

//     //getter
//     int getHealth(){
//         return health;
//     }

//     char getLevel(){
//         return level;
//     }

//     //setter
//     void setHealth(int h){ 
//         health=h;
//     }

//     void setLevel(char l){
//         level=l;
//     }
    
// };
// int main(){

//     //object created statically 
//     cout<<"Befor Constructor"<<endl;
//     Hero ramesh;
//     cout<<"After Constructor"<<endl;

//     //dynamically 
//     Hero *h=new Hero;





// /*
//     //static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout<<"Level is "<<a.level<<endl;
//     cout<<"health is "<<a.getHealth()<<endl;

//     //dynamically 
//     Hero *b=new Hero; //heap me memory allocate hui hogi 
//     b->setLevel('A');
//     b->setHealth(70);
//     cout<<"Level is "<<(*b).level<<endl;
//     cout<<"health is "<<(*b).getHealth()<<endl;
//     //or
//     cout<<"Level is "<<b->level<<endl;
//     cout<<"health is "<<b->getHealth()<<endl;

// */

//     return 0;
// }









// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;



//     Hero(){
//         cout<<"Constructor called"<<endl;
//     }


//     //parameterized constructor
//     Hero(int health){
//         cout<<"this-> "<<this<<endl;
//         this->health=health;
//     }
// };

// int main(){

//     //object created statically 
//     Hero ramesh(10);
//     cout<<"Address of ramesh "<<&ramesh<<endl;

//     //dynamically 
//     Hero *h=new Hero();


//     return 0;
// }








// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     private:
//     int health;

//     public:
//     char level;

//     Hero(){
//         cout<<"Constructor called"<<endl;
//     }


//     //parameterized constructor
//     Hero(int health){
//         this->health=health;
//     }


//     Hero(int health,char level){
//         this->level=level;
//         this->health=health;
//     }

//     void print(){
//         cout<<level<<endl;
//     }
// };

// int main(){

//     //object created statically 
//     Hero ramesh(10);
//     cout<<"Address of ramesh "<<&ramesh<<endl;
//     ramesh.print();

//     //dynamically 
//     Hero *h=new Hero(11);
//     h->print()

//     Hero temp(22,'B');
//     temp.print();


//     return 0;
// }






#include<iostream>
using namespace std;
class Hero{

    //properties

    public:
    int health;

    char level;

    Hero(){
        cout<<"Simple Constructor called"<<endl;
    }


    //parameterized constructor
    Hero(int health){
        this->health=health;
    }


    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    //copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;

    }


    //getter
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //setter
    void setHealth(int h){ 
        health=h;
    }

    void setLevel(char l){
        level=l;
    }
};

int main(){

    Hero suresh(70,'C');
    suresh.print();

    //copy constructor call
    Hero ritesh(suresh);
    ritesh.print();

    return 0;
}















// #include<iostream>
// using namespace std;
// class Hero{

//     //properties
//     public:

//     int health;
//     char level;
    
// };
// int main(){

//     //creation of Object
//     Hero ramesh;

//     cout<<"size of ramesh is : "<< sizeof(ramesh)<<endl;    

//     return 0;
// }








// #include<iostream>
// #include "Hero.cpp"
// using namespace std;

// int main(){

//     //creation of Object
//     Hero h1;

//     cout<<"size : "<< sizeof(h1)<<endl;    

//     return 0;
// }
