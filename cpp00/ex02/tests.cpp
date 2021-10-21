// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<int>								  ints_t;
	// ! ints_t  là  một  vector  các  int
	// ! syntax:
	// std::vector<type> ten_bien = {value1, value2, value3};
	// ! ten_bien.push_back(100)
	// ! ten_bien[2] ta se duoc gia tri 100
	// ! ten_bien.size() se duoc 3
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;
	// ! syntax:
	// std::pair<type type> ten_bien(value1, value2)
	// ! acc_int_t  là  một  pair  của  <accounts_t và ints_t>
	// ! pair.first, pair.seccond: se dua ra gia tri cua 2 values trong pair.
	// TODO: iterator là sao? What's pairs?

	// accounts_t  là  một  vector  các  Account // TODO: what's a vector? La mot list nhung size co the thay doi dynamically duoc.
	typedef std::vector<Account::t>							  accounts_t;
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	accounts_t				accounts( amounts, amounts + amounts_size ); // TODO: cái vẹo gì đây? accounts la mot vector voi elemnts giong nhu amounts.
	accounts_t::iterator	acc_begin	= accounts.begin(); // !begin: tra lai gia tri dau tien cua container
	accounts_t::iterator	acc_end		= accounts.end(); // !end: tra lai gia tri cuoi cung cua container
	// TODO: iterator là gi?
	// ! syntax:
	// std::vector<int>::iterator ptr;
	// iterator dùng để chạy qua một data structure nào đó, nó ko phải là int như bình thường nữa. Ví dụ set không có order thì phải dùng iterator vì không thể extract member như này nữa: abc[3].

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	Account::displayAccountsInfos(); // TODO: in ra noi dung account
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
