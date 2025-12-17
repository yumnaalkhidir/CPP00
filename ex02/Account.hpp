// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {


public:

	typedef Account		t;

	static int	getNbAccounts( void ); //done
	static int	getTotalAmount( void ); //done
	static int	getNbDeposits( void ); //done
	static int	getNbWithdrawals( void ); //done
	static void	displayAccountsInfos( void ); //done

	Account( int initial_deposit ); //done
	~Account( void ); //done

	void	makeDeposit( int deposit ); //done
	bool	makeWithdrawal( int withdrawal ); //done
	int		checkAmount( void ) const; //done
	void	displayStatus( void ) const; //done


private:

	static int	_nbAccounts; //counts how many Accounts object currently exists
	static int	_totalAmount; //sum of all the accounts amount value
	static int	_totalNbDeposits; //total number of deposits across all accounts
	static int	_totalNbWithdrawals; //total number of withdrawal across all accounts

	static void	_displayTimestamp( void ); //done

	int				_accountIndex; //unique account ID
	int				_amount; //balance of the account
	int				_nbDeposits; //number of depsits made on an account
	int				_nbWithdrawals; //number of withdrawals made on an account

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
