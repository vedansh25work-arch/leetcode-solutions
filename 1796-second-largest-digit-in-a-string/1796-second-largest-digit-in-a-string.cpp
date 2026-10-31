class Solution {
public:
bool isdigit(char c){
    return c=='1'|| c=='2'|| c=='3'||c=='4'||c=='5'|| c=='6'|| c=='7'|| c=='8'||c=='9'||c=='0';
}
    int secondHighest(string s) {
       int maxi =-1;
       int maxi2= -1;
       for ( int i =0;i<s.size();i++){
        if(isdigit(s[i])){
            if(s[i]-'0'>maxi)maxi = s[i]-'0';
           
        }
       } 
         for ( int i =0;i<s.size();i++){
        if(isdigit(s[i])){
            
            if(s[i]-'0'>=maxi2 && s[i]-'0'<maxi) maxi2=s[i]-'0';
        }
       } 
       
       return maxi2;
    }
};