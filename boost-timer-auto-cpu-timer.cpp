//  Copyright Dwight Wilkins 2018
// Dwight Wilkins 2018 DwightWilkins@gmail.com //

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

//  See http://www.boost.org/libs/timer for documentation.

#include <boost/timer/timer.hpp>
#include <iostream>

void test() 
	{
		boost::timer::auto_cpu_timer t2(std::cerr, 10, "\n\n\n%w wall %u user %s system %t user   system %p%\n");
		
		for (int n = 0; n != 200000000; ++n) continue;
	}

	int main()
	{
		boost::timer::auto_cpu_timer t(std::clog,5,"\n\n\nEnding program %w times.wall %u times.user %s times.system %t times.user   times.system %p%\n");

		for (int i = 0; i < 3; i++) test();
	}
