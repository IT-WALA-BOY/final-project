 class B
 {
    private:
        int m;
        
    protected:
        int n;
    public:
        void setM(int M){
            m = M;
        }
        int getM(){
           return m; 
        }
        void setN(int N){
            n = N;
        }
        int getN(){
            return n;
        }
    };
    
    class D : public B{
        
    protected:
        float q;
        float r;
        
    public:
        
        void setQ(float Q){
            q = Q;
        }
        
        float getQ(){
           return q; 
        }
        
        void setN(float R){
            r = R;
        }
        float getR()
		{
            return r;
        }
        virtual int calc() override{
            return r*q;
        }
    };
