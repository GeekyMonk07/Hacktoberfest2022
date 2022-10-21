class sample
 {
    void triangle(int base,int height)
    {
      double area=0.5*(base*height);
      System.out.println(area);
    }
 }
  class TriangleArea
   {
      public static void main(String[] args)
       {
          new sample().triangle(7,4);
       }
   }
