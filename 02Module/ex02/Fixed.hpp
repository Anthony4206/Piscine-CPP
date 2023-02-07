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

        Fixed   &operator=(Fixed const &object);

        bool    operator>(Fixed const &object) const;
        bool    operator<(Fixed const &object) const;
        bool    operator>=(Fixed const &object) const;
        bool    operator<=(Fixed const &object) const;
        bool    operator==(Fixed const &object) const;
        bool    operator!=(Fixed const &object) const;

        Fixed   operator+(Fixed const &object);
        Fixed   operator-(Fixed const &object);
        Fixed   operator*(Fixed const &object);
        Fixed   operator/(Fixed const &object);

        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);

        float   toFloat(void) const;
        int     toInt(void) const;

        static Fixed        &min(Fixed &first, Fixed &second);
        static Fixed const  &min(Fixed const &first, Fixed const &second);
        static Fixed        &max(Fixed &first, Fixed &second);
        static Fixed const  &max(Fixed const &first, Fixed const &second);
};

std::ostream   &operator<<(std::ostream &out, Fixed const &object);

#endif
