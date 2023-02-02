#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;

        std::string   _valid_entry(std::string type);
    public:
        Contact(void);
        ~Contact(void);

        void    get_info();
        void    set_contact(int i);
        void    contact_info();
};

#endif
