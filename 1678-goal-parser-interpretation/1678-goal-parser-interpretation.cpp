class Solution {
public:
    string interpret(string command) {
        string temp="";
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G')
                temp+="G";
            else if(command[i]=='(' && command[i+1]==')')
            {
                temp+="o";
                 i++;
            }
            else if(command[i]=='(' && command[i+1]=='a')
            {
                temp+="al";
                i+=2;
            }
        }
        return temp;
    }
};