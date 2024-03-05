class Solution {
public:
    int romanToInt(string s) {
        int count = 0;
        for(size_t i = 0; i<s.length(); i++){
            switch(s[i]){
                case 'I':
                    if(s[i+1]=='V'){
                        count = count + 4;
                        i++;
                    }
                    else if(s[i+1]=='X'){
                        count = count + 9;
                        i++; 
                    }
                    else{
                        count++;
                    }
                    break;
                case 'V':
                    count = count + 5;
                    break;
                case 'X':
                    if(s[i+1]=='L'){
                        count = count + 40;
                        i++;
                    }
                    else if(s[i+1]=='C'){
                        count = count + 90;
                        i++; 
                    }
                    else{
                        count = count + 10;
                    }
                    break;
                case 'L':
                    count = count + 50;
                    break;
                case 'C':
                    if(s[i+1]=='D'){
                        count = count + 400;
                        i++;
                    }
                    else if(s[i+1]=='M'){
                        count = count + 900;
                        i++; 
                    }
                    else{
                        count = count + 100;
                    }
                    break;
                case 'D':
                    count = count + 500;
                    break;
                case 'M':
                    count = count + 1000;
            }
        }
        return count;
    }
};