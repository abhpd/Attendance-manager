using namespace std;
class subject{
    string code;
    string name;
    int lecture_count;
    int present_count;
    int absent_count;
    int leave_count;
public:
    subject(string c,string n){
        code=c;
        name=n;
    }
    string return_code(){return code;}
    void present(){lecture_count++;present_count++;}
    void absent(){lecture_count++;absent_count++;}
    void leave(){lecture_count++;leave_count++;}
};

class student{
    vector<subject> subj;
public:
    void add_subj(string code,string name){
        subject s(code,name);
        subj.push_back(s);
    }
    void remove_subj_by_code(string code){
        for(int i=0;i<subj.size();i++){
            if(code.compare(subj[i].return_code)==0){
                subj.erase(subj.begin()+i);
            }
        }
    }
    void log(){
        string query_code;
        cout<<"Enter subject code or select from the list displayed followed by X(X=P/A/L)>";
    }
};