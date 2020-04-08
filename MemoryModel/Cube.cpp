namespace experiment{
class Cube {
  public:
   void setSideLength(int length){
       length_ = length;
   };
   int getVolume(){
       return (length_ *length_* length_);
   }

  private:
    int length_;

};
};