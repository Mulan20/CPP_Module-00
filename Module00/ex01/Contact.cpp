class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phoneNum;
        std::string secret;
        int num = 0; 
    public:
        Contact(void) 
        {
            first_name = NULL;
            last_name = NULL;
            nickname = NULL;
            phoneNum = NULL;
            secret = NULL; 
            num += 1;
        }

        Contact (std::string fn, std::string ln, std::string nn, std::string p, std::string s)
        {
            first_name = fn;
            last_name = ln;
            nickname = nn;
            phoneNum = p;
            secret = s;
            num += 1;
        }

        void add(std::string fn, std::string ln, std::string nn, std::string p, std::string s)
        {
            Contact(fn, ln, nn, p, s);
            num += 1; 
        }

        void search(int index)
        {

        }
}