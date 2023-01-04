/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csejault <csejault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:30:35 by csejault          #+#    #+#             */
/*   Updated: 2022/01/14 12:36:32 by csejault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Class_Name = ShrubberyCreationForm

#include "ShrubberyCreationForm.hpp"

//debug{
//priv_debug{
bool	ShrubberyCreationForm::_verbose = true;
//priv_debug - END}

//pub_debug{
void	ShrubberyCreationForm::set_verbose( bool status ) {
	if (ShrubberyCreationForm::_verbose) std::cout << COL_YELLOW << "[ShrubberyCreationForm] - Set _verbose to [" << COL_GREEN << status << COL_YELLOW << "]" << COL_NORMAL <<std::endl;
	ShrubberyCreationForm::_verbose = status;
}

bool	ShrubberyCreationForm::get_verbose( void ) {
	if (ShrubberyCreationForm::_verbose) std::cout << COL_YELLOW << "[ShrubberyCreationForm] - Get _verbose" << COL_NORMAL <<std::endl;
	return (ShrubberyCreationForm::_verbose);
}
//pub_debug - END}
//debug - END}


//pub_constructor{
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", target, 145, 137) {
	if (ShrubberyCreationForm::_verbose) std::cout << COL_YELLOW << "[ShrubberyCreationForm] - Default constructor called" << COL_NORMAL <<std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm( void ) {
	if (ShrubberyCreationForm::_verbose) std::cout << COL_YELLOW << "[ShrubberyCreationForm] - Destructor called" << COL_NORMAL <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : AForm(src) {
	if (ShrubberyCreationForm::_verbose)std::cout << COL_YELLOW << "[ShrubberyCreationForm] - Copy constructor called" << COL_NORMAL <<std::endl;
	*this = src;
}

//pub_constructor - END}


//pub_operator{
ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {
	if (ShrubberyCreationForm::_verbose) std::cout << COL_YELLOW << "[ShrubberyCreationForm] - Assignation operator called" << COL_NORMAL <<std::endl;

	if ( this != &rhs )
		AForm::operator=(rhs);
	return *this;
}
//pub_operator - END}


//pub_getter{

//pub_getter - END}


//pub_setter{

//pub_setter - END}


//priv_constructor{
ShrubberyCreationForm::ShrubberyCreationForm( void ) {
}
//priv_constructor - END}


//pub_fct{
AForm * ShrubberyCreationForm::create( std::string target ) {
	return (new ShrubberyCreationForm(target));
}

void ShrubberyCreationForm::job( void ) const {
	std::string s(get_target() + "_shrubbery");
	std::ofstream file;
	file.open(s.c_str());
	if (file.fail())
		throw std::ofstream::failure("Fail to open file : " + s);
	file <<
		"                        %% ///                                                                          %% ///                                                  " << std::endl <<
		"                         % ///                                                                           % ///                                                  " << std::endl <<
		"                  ((( ((  &/  (    %%%        %                                                   ((( ((  &/  (    %%%        %                                 " << std::endl <<
		"                   (((     &  (( %%%%         %%%  //    %%                                        (((     &  (( %%%%         %%%  //    %%                     " << std::endl <<
		"               //,         &((  .     ///      %%#(((    %%                                    //,         &((  .     ///      %%#(((    %%                     " << std::endl <<
		"                // *%% &  & (( *%%(( ///    ((  & %%%  //   (((                                 // *%% &  & (( *%%(( ///    ((  & %%%  //   (((                 " << std::endl <<
		"             (((( &     &&  & %%%   &  %%%  ((   %%%     /(((                                (((( &     &&  & %%%   &  %%%  ((   %%%     /(((                   " << std::endl <<
		"               (((&     & /   %%&   %#       &  &    ((((% ( %%%                               (((&     & /   %%&   %#       &  &    ((((% ( %%%                " << std::endl <<
		"           %        &  &   //      &%% (/// %   &      #  ((        ((                     %        &  &   //      &%% (/// %   &      #  ((        ((          " << std::endl <<
		"           %%%    ((  &&(    &    &         ,%%% &.& ((     //////%%((                     %%%    ((  &&(    &    &         ,%%% &.& ((     //////%%((          " << std::endl <<
		"            %%%   ((    &     & ((((((     (( %%%& (((           %%                         %%%   ((    &     & ((((((     (( %%%& (((           %%             " << std::endl <<
		"         ((((( %&&&/&&&&&&&   &&  //     & ((    &.  * #&      &&  ((((                  ((((( %&&&/&&&&&&&   &&  //     & ((    &.  * #&      &&  ((((         " << std::endl <<
		"               ((( //// %%&&& &&  //  %%%  & (  &&#((    %%  &///////                          ((( //// %%&&& &&  //  %%%  & (  &&#((    %%  &///////           " << std::endl <<
		"   %%        %%      //%     &&&    %      .&((( &///   %%%  (((                   %%        %%      //%     &&&    %      .&((( &///   %%%  (((                " << std::endl <<
		"   %% //     %%% ((((( &%(((((  &&         &&  ( //   ((%%     ( %%%               %% //     %%% ((((( &%(((((  &&         &&  ( //   ((%%     ( %%%            " << std::endl <<
		" ((  ///    //*&   &    & &&&&&/&&&&&    &&          ( &  (((   %%%/(((   (      ((  ///    //*&   &    & &&&&&/&&&&&    &&          ( &  (((   %%%/(((   (     " << std::endl <<
		"   ((&  (((     (((       &    //   ((& &&   %%  & .&((((((   &  (     (( ((       ((&  (((     (((       &    //   ((& &&   %%  & .&((((((   &  (     (( ((    " << std::endl <<
		"    /  &%&&&&     (((&  #%   &   /(.  &&&& %%%%  &          &     ((( ((  &((((     /  &%&&&&     (((&  #%   &   /(.  &&&& %%%%  &          &     ((( ((  &(((( " << std::endl <<
		"      %%   &&&  &&    &  %%%%% *,  %   &&&%%    &      &&&&&&&&&&  &&&& %%%%%         %%   &&&  &&    &  %%%%% *,  %   &&&%%    &      &&&&&&&&&&  &&&& %%%%%   " << std::endl <<
		"     %%%    %%        &&&&      &  %%%% &&     & &&&&( &&        ///   (             %%%    %%        &&&&      &  %%%% &&     & &&&&( &&        ///   (        " << std::endl <<
		"      %     *%%   // &&   &&&&  &     %(&&&  &&&      (((  &    ///    ((             %     *%%   // &&   &&&&  &     %(&&&  &&&      (((  &    ///    ((       " << std::endl <<
		"               ( &/(  %%%%(   &&&      *&&&&&    ///        & & &,(((                          ( &/(  %%%%(   &&&      *&&&&&    ///        & & &,(((           " << std::endl <<
		"                 (((     %%%%    &&&   &&&&     /*      (((( %%/                                 (((     %%%%    &&&   &&&&     /*      (((( %%/                " << std::endl <<
		"                     ((((///      &&&&/&&&  &    %%%%% (((                                           ((((///      &&&&/&&&  &    %%%%% (((                      " << std::endl <<
		"                        /           &&&&&&   ((((                                                       /           &&&&&&   ((((                               " << std::endl <<
		"                                     &&&&                                                                            &&&&                                       " << std::endl <<
		"                                     &&&&                                                                            &&&&                                       " << std::endl <<
		"                                     &&&&                                                                            &&&&                                       " << std::endl <<
		"                                    &&&&&                                                                           &&&&&                                       " << std::endl <<
		"                                    &&&&&                                                                           &&&&&                                       " << std::endl <<
		"                                    &&&&&                                                                           &&&&&                                       " << std::endl <<
		"                                    &&&&&&                                                                          &&&&&&                                      " << std::endl <<
		"                                    &&&&&&&                                                                         &&&&&&&                                     " << std::endl <<
		"                                    &&&&&&&,                                                                        &&&&&&&,                                    " << std::endl <<
		"                                     &&&&&&&  " << std::endl;

	file.close();
}
//pub_fct - END}
