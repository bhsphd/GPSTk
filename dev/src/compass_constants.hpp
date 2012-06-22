#pragma ident "$Id: gps_constants.hpp 3140 2012-06-18 15:03:02Z susancummins $"



#ifndef GPSTK_COMPASS_CONSTANTS_HPP
#define GPSTK_COMPASS_CONSTANTS_HPP

/**
 * @file gps_constants.hpp
 * Miscellaneous constants for GPS.
 */

//============================================================================
//
//  This file is part of GPSTk, the GPS Toolkit.
//
//  The GPSTk is free software; you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published
//  by the Free Software Foundation; either version 2.1 of the License, or
//  any later version.
//
//  The GPSTk is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with GPSTk; if not, write to the Free Software Foundation,
//  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
//  
//  Copyright 2004, The University of Texas at Austin
//
//============================================================================

//============================================================================
//
//This software developed by Applied Research Laboratories at the University of
//Texas at Austin, under contract to an agency or agencies within the U.S. 
//Department of Defense. The U.S. Government retains all rights to use,
//duplicate, distribute, disclose, or release this software. 
//
//Pursuant to DoD Directive 523024 
//
// DISTRIBUTION STATEMENT A: This software has been approved for public 
//                           release, distribution is unlimited.
//
//=============================================================================






namespace gpstk
{
   /** @addtogroup ephemcalc */
   //@{

      /** The maximum number of active satellites in the GPS
       * constellation. */
   const long MAX_PRN_COM     = 30;

   // ---------------- COMPASS ----------------------------------
      /// COM B1 carrier frequency in Hz.
   const double B1_FREQ_COM   = 1561.098e6;     
      /// COM B2 carrier frequency in Hz.
   const double B2_FREQ_COM   = 1207.140e6;    
      /// COM B3 carrier frequency in Hz.
   const double B3_FREQ_COM   = 1268.52e6;
      
      /// COM B1 carrier wavelength in meters
   const double B1_WAVELENGTH_COM  = 0.192039486310276;
      /// COM B2 carrier wavelength in meters.
   const double B2_WAVELENGTH_COM  = 0.248349369584307; //0.24834937;
      /// COM B3 carrier wavelength in meters.
   const double B3_WAVELENGTH_COM  = 0.236332464604421; //0.236332246460442;


   //@}

} // namespace 

#endif