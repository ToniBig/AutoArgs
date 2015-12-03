// The MIT License (MIT)
//
// Copyright (c) 2013-2015 Tino Bog
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef AUTOARGS_DEFAULTHELPMESSAGECREATOR_HPP_
#define AUTOARGS_DEFAULTHELPMESSAGECREATOR_HPP_

// --- Internal Includes ---
#include "DriverData.hpp"

// --- Standard Includes ---
#include <string>

namespace adhocpp
{
namespace utilities
{

class DefaultHelpMessageCreator
{
public:
  DefaultHelpMessageCreator( );
  virtual ~DefaultHelpMessageCreator( );

  static std::string getHelpMessage( const DriverData& driverData );

private:
  explicit DefaultHelpMessageCreator( const DefaultHelpMessageCreator& );
  DefaultHelpMessageCreator& operator=( const DefaultHelpMessageCreator& );

  static std::string createUsageBlock( const DriverData& driverData );

  static std::string createPurposeBlock( const DriverData& driverData );

  static std::string createRequiredArgumentsBlock( const DriverData& driverData );

  static std::string createOptionalArgumentsBlock( const DriverData& driverData );

  static std::string createBuiltInArgumentsBlock( const DriverData& driverData );

  static std::string appendWhiteSpace( const std::string& input,
                                       size_t finalWidth );

  static std::string createArgumentsBlock( const std::vector<adhocpp::utilities::ArgumentData>& arguments,
                                           const std::string& argumentsType,
                                           const std::string& prefix );
};

} // namespace utilities
} // namespace adhocpp
#endif // AUTOARGS_DEFAULTHELPMESSAGECREATOR_HPP_
