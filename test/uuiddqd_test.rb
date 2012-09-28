require 'helper'

class TestUuiddqd < MiniTest::Unit::TestCase
  def setup
    @uuid = Uuiddqd.generate
  end

  def test_return_string
    assert_kind_of String, @uuid
  end

  def test_return_proper_length
    assert_equal 36, @uuid.length
  end

  def test_not_same
    another_uuid = Uuiddqd.generate
    refute_equal another_uuid, @uuid
  end

end
