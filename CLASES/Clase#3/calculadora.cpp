class calculadora
{
 private:
  float x;
  float y;
  float resultado;

 public:



   float getX()
    {
        return this->x;
    }
    void setX(float x)
    {
      this->x = x;
    }
   
 float getY()
    {
        return this->y;
    }
    void setY(float y)
    {
      this->y = y;
    }
   

    float sumar(float x, float y)
    {
       this->resultado =  x + y;
       return resultado;
    }

    float restar(float x, float y)
    {
       this->resultado =  x - y;
       return resultado;
    }
    float multipilcar(float x, float y)
    {
       this->resultado =  x * y;
       return resultado;
    }

float dividir(float x, float y)
    {
     
       this->resultado =  x / y;
       return resultado;
    }
    




};
