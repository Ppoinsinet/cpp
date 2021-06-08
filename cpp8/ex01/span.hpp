#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <exception>
#include <vector>

class span
{
private:
    unsigned int max_size;
    unsigned int size;
    std::vector<int> tab;
public:
class TooSmall : public std::exception
    {
        const char *what() const throw()
        {
            return "The size of the array is too small";
        }
    };

    class TooMany : public std::exception
    {
        const char *what() const throw()
        {
            return "The maximum size of the array has been reached";
        }
    };
    span(unsigned int size);
    ~span();
    void addNumber(int value);
    template<typename iteratorClass>
    void addNumber(iteratorClass begin, iteratorClass end)
    {
        while (begin != end)
        {
            if (size >= max_size)
                throw span::TooMany();
            tab.push_back(*begin);
            size++;
            begin++;            
        }
    }

    int shortestSpan(void);
    int longestSpan(void);

};

#endif