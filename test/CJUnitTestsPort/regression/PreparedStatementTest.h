/* Copyright (C) 2007 - 2008 MySQL AB, 2008 - 2009 Sun Microsystems, Inc.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; version 2 of the License.

There are special exceptions to the terms and conditions of the GPL
as it is applied to this software. View the full text of the
exception in file EXCEPTIONS-CONNECTOR-C++ in the directory of this
software distribution.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "../BaseTestFixture.h"

/**
 * @author 
 */

namespace testsuite
{
namespace regression
{

class PreparedStatementTest : public BaseTestFixture
{
private:

  typedef BaseTestFixture super;

  DatabaseMetaData dbmd;

protected:

  /**
   * setUp() function for tests
   */
  /* throws std::exception * */
  void setUp();

public:

  TEST_FIXTURE(PreparedStatementTest)
  {
    TEST_CASE( testStmtClose      );
  }


  void testStmtClose();


};

REGISTER_FIXTURE(PreparedStatementTest);

} //namespace regression
} //namespace testsuite
