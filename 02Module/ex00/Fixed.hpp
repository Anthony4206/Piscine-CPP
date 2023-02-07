#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    private:
        int                 _raw_bits;

        static int const    s_bits = 8;
    public:
        Fixed(void);
        Fixed(Fixed const &object);
        ~Fixed(void);
        Fixed &operator=(Fixed const &object);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif
