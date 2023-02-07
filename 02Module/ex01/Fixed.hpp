#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {
    private:
        int                 _raw_bits;

        static int const    s_bits = 8;
    public:
        Fixed(void);
        Fixed(int const i);
        Fixed(float const f);
        Fixed(Fixed const &object);
        ~Fixed(void);
        Fixed &operator=(Fixed const &object);

        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream   &operator<<(std::ostream &out, Fixed const &object);

#endif
