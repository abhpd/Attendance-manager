using namespace std;

class subject{
    string code;
    string name;
    int lecture_count;
    int present_count;
    int absent_count;
    int leave_count;
public:
    string return_code(){return code;}
    void present(){lecture_count++;present_count++;}
    void absent(){lecture_count++;absent_count++;}
    void leave(){lecture_count++;leave_count++;}

    void load_data(int i){
        fstream fin;
        fin.open("log.txt",ios::in|ios::app);
        fin.seekg(0);
        
        for(int j=0;j<i;j++){
            fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            fin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        fflush(stdin);
        getline(fin,code);
        fflush(stdin);
        getline(fin,name);
        fflush(stdin);
        fin>>lecture_count;
        fin>>present_count;
        fin>>absent_count;
        fin>>leave_count;

        fin.close();
    }

    void setup_data(){
        cout<<"Enter code>";
        fflush(stdin);
        getline(cin,code);
        cout<<"Enter name>";
        fflush(stdin);
        getline(cin,name);

        fflush(stdin);

        cout<<"Lecture count>";
        cin>>lecture_count;
        cout<<"Present count>";
        cin>>present_count;
        cout<<"Absent count>";
        cin>>absent_count;
        cout<<"Leave count>";
        cin>>leave_count;

        fstream fs;
        fs.open("log.txt",ios::out|ios::in|ios::app|ios::ate);
        fs<<code<<endl;
        fs<<name<<endl;
        fs<<lecture_count<<" "<<present_count<<" "<<absent_count<<" "<<leave_count<<endl;
    }

    void print_data(){
        cout<<code<<" "<<name<<endl;
        cout<<"Lecture count :"<<lecture_count<<endl;
        cout<<"Present count :"<<present_count<<endl;
        cout<<"Absent count :"<<absent_count<<endl;
        cout<<"Leave count :"<<leave_count<<endl;
    }
};
/*
class student{
    vector<subject> subj;
public:
    int subject_count;
    void add_subj(string code,string name){
        subject s(code,name);
        subj.push_back(s);
    }
    void remove_subj_by_code(string code){
        for(int i=0;i<subj.size();i++){
            if(code.compare(subj[i].return_code())==0){
                subj.erase(subj.begin()+i);
            }
        }
    }
    void log(){
        string query_code;
    }
};*/