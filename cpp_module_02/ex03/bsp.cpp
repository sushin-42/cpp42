#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed checkABpoint;
    Fixed checkABc;

    Fixed checkBCpoint;
    Fixed checkBCa;

    Fixed checkCApoint;
    Fixed checkCAb;

    Fixed checkAB;
    Fixed checkBC;
    Fixed checkCA;

    checkABpoint = ((point.getX() - a.getX()) * (a.getY() - b.getY())) - ((point.getY() - a.getY()) * (a.getX() - b.getX()));
    checkABc = ((c.getX() - a.getX()) * (a.getY() - b.getY())) - ((c.getY() - a.getY()) * (a.getX() - b.getX()));
    checkAB = checkABpoint * checkABc;

    checkBCpoint = ((point.getX() - b.getX()) * (b.getY() - c.getY())) - ((point.getY() - b.getY()) * (b.getX() - c.getX()));
    checkBCa = ((a.getX() - b.getX()) * (b.getY() - c.getY())) - ((a.getY() - b.getY()) * (b.getX() - c.getX()));
    checkBC = checkBCpoint * checkBCa;

    checkCApoint = ((point.getX() - c.getX()) * (c.getY() - a.getY())) - ((point.getY() - c.getY()) * (c.getX() - a.getX()));
    checkCAb = ((b.getX() - c.getX()) * (c.getY() - a.getY())) - ((b.getY() - c.getY()) * (c.getX() - a.getX()));
    checkCA = checkCApoint * checkCAb;

    if (checkAB < Fixed(0) || checkBC < Fixed(0) || checkCA < (0))
        return (false); // out triangle or dot
    else
        return (true); // in triangle
}
// std::cout << "check ABpoint " << checkABpoint << std::endl;
// std::cout << "check ABc " << checkABc << std::endl;
// std::cout << "check BCpoint " << checkBCpoint << std::endl;
// std::cout << "check BCa " << checkBCa << std::endl;
// std::cout << "check CApoint " << checkCApoint << std::endl;
// std::cout << "check CAb " << checkCAb << std::endl;
// std::cout << "check AB " << checkAB << std::endl;
// std::cout << "check BC " << checkBC << std::endl;
// std::cout << "check CA " << checkCA << std::endl;