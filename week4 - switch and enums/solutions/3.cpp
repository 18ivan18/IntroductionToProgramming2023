#include <iostream>

int main()
{

    int day, month;
    std::cin >> day >> month;

    switch (month)
    {
    case 1:
    {
        std::cout << (day <= 19 ? "Capricorn" : "Aquarius") << std::endl;
    };
    break;
    case 2:
    {
        std::cout << (day <= 18 ? "Aquarius" : "Pisces") << std::endl;
    };
    break;
    case 3:
    {
        std::cout << (day <= 19 ? "Pisces" : "Aries") << std::endl;
    };
    break;
    case 4:
    {
        std::cout << (day <= 19 ? "Aries" : "Taurus") << std::endl;
    };
    break;
    case 5:
    {
        std::cout << (day <= 20 ? "Taurus" : "Gemini") << std::endl;
    };
    break;
    case 6:
    {
        std::cout << (day <= 20 ? "Gemini" : "Cancer") << std::endl;
    };
    break;
    case 7:
    {
        std::cout << (day <= 22 ? "Cancer" : "Leo") << std::endl;
    };
    break;
    case 8:
    {
        std::cout << (day <= 22 ? "Leo" : "Virgo") << std::endl;
    };
    break;
    case 9:
    {
        std::cout << (day <= 22 ? "Virgo" : "Libra") << std::endl;
    };
    break;
    case 10:
    {
        std::cout << (day <= 22 ? "Libra" : "Scorpio") << std::endl;
    };
    break;
    case 11:
    {
        std::cout << (day <= 21 ? "Scorpio" : "Sagittarius") << std::endl;
    };
    break;
    case 12:
    {
        std::cout << (day <= 21 ? "Sagittarius" : "Capricorn") << std::endl;
    };
    break;
    default:
        std::cout << "Invalid input!" << std::endl;
    }

    enum Sign
    {
        Capricorn = 1,
        Aquarius,
        Pisces,
        Aries,
        Taurus,
        Gemini,
        Cancer,
        Leo,
        Virgo,
        Libra,
        Scorpio,
        Sagittarius
    };
    int input;
    std::cin >> input;
    switch (input)
    {
    case Capricorn:
        std::cout << "Dec 22 - Jan 19" << std::endl;
        break;
    case Aquarius:
        std::cout << "Jan 20 - Feb 18" << std::endl;
        break;
    case Pisces:
        std::cout << "Feb 19 - Mar 20" << std::endl;
        break;
    case Aries:
        std::cout << "Mar 21 - Apr 19" << std::endl;
        break;
    case Taurus:
        std::cout << "Apr 20 - May 20" << std::endl;
        break;
    case Gemini:
        std::cout << "May 21 - Jun 20" << std::endl;
        break;
    case Cancer:
        std::cout << "Jun 21 - Jul 22" << std::endl;
        break;
    case Leo:
        std::cout << "Jul 23 - Aug 22" << std::endl;
        break;
    case Virgo:
        std::cout << "Aug 23 - Sept 22" << std::endl;
        break;
    case Libra:
        std::cout << "Sept 23 - Oct 22" << std::endl;
        break;
    case Scorpio:
        std::cout << "Oct 23 - Nov 21" << std::endl;
        break;
    case Sagittarius:
        std::cout << "Nov 22 - Dec 21" << std::endl;
        break;
    default:
        std::cout << "Wrong input!" << std::endl;
    }
}
