/**
 * @file    feature_spatial_function_merge_objects.h
 * @author  Thomas M. Howard (tmhoward@csail.mit.edu)
 *          Matthew R. Walter (mwalter@csail.mit.edu)
 * @version 1.0
 *
 * @section LICENSE
 *
 * This file is part of h2sl.
 *
 * Copyright (C) 2014 by the Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see
 * <http://www.gnu.org/licenses/gpl-2.0.html> or write to the Free
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 * @section DESCRIPTION
 *
 * The interface for a class used to check for a match between a grounding spatial_function's object and a child spatial_function object
 */

#ifndef H2SL_FEATURE_SPATIAL_FUNCTION_MERGE_PARTIALLY_KNOWN_SPATIAL_FUNCTIONS_H
#define H2SL_FEATURE_SPATIAL_FUNCTION_MERGE_PARTIALLY_KNOWN_SPATIAL_FUNCTIONS_H

#include <iostream>

#include <h2sl/feature.h>

namespace h2sl {
  class Feature_Spatial_Function_Merge_Objects: public Feature {
  public:
    Feature_Spatial_Function_Merge_Objects( const bool& invert = false );
    virtual ~Feature_Spatial_Function_Merge_Objects();
    Feature_Spatial_Function_Merge_Objects( const Feature_Spatial_Function_Merge_Objects& other );
    Feature_Spatial_Function_Merge_Objects& operator=( const Feature_Spatial_Function_Merge_Objects& other );

    virtual bool value( const unsigned int& cv, const Grounding* grounding, const std::vector< std::pair< const Phrase*, std::vector< Grounding* > > >& children, const Phrase* phrase, const World* world );

    virtual void to_xml( xmlDocPtr doc, xmlNodePtr root )const;

    virtual void from_xml( xmlNodePtr root );

    virtual inline const feature_type_t type( void )const{ return FEATURE_TYPE_GROUNDING; };

  protected:

  private:

  };
  std::ostream& operator<<( std::ostream& out, const Feature_Spatial_Function_Merge_Objects& other );
}

#endif /* H2SL_FEATURE_SPATIAL_FUNCTION_MERGE_PARTIALLY_KNOWN_SPATIAL_FUNCTIONS_H */