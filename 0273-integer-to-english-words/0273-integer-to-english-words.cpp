class Solution {
public:
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        return divide(num);
    }
private:
    const vector<string> NumsBelowTwenty{
        "","One" ,"Two" , "Three" , "Four" , "Five","Six","Seven","Eight" , "Nine","Ten",
        "Eleven","Twelve" ,"Thirteen" , "Fourteen" , "Fifteen" , "Sixteen","Seventeen" ,
        "Eighteen" , "Nineteen"
    };
    const vector<string>Tens{
        "","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"
    };

    string divide(int n){
        string s;
        if(n < 20) s = NumsBelowTwenty[n];
        else if(n < 100) s = Tens[n/10] + " " + NumsBelowTwenty[n%10];
        else if(n < 1000) s = divide(n/100) + " Hundred " + divide(n%100);
        else if(n < 1000000) s = divide(n/1000) + " Thousand " + divide(n%1000);
        else if(n < 1000000000 ) s = divide(n/1000000) + " Million " + divide(n%1000000);
        else  s =  divide( n / 1000000000) + " Billion " + divide(n%1000000000);
        Trim(s);
        return s;
    }

    void Trim (string& s){
        s.erase(s.find_last_not_of(' ') + 1);
        s.erase(0,s.find_first_not_of(' '));
    }
   
};