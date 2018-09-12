class Data
 {
   private:
         int x;
         float y;

   public:
        Data()
  {
    x=0;
    y=0.0;
  } 


  Data( int a , float b)
   {
      x=a;
      y=b;
   }
 
  int getx()
  { 
    return x;
  }

  float gety()
  { 
    return y;
  }
 
  void setx (int a)
     { 
       x=a;
     }
  void set y (float a)
     {
         y=a;
     }
};

