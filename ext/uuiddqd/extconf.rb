# Loads mkmf which is used to make makefiles for Ruby extensions
require 'mkmf'

$CFLAGS = "-Wall -Wno-multichar -luuid"

# Give it a name
extension_name = 'uuiddqd'

unless find_library("uuid", 'uuid_generate')
  abort "Install libuuid!\n"
end

pkg_config('uuid')

# The destination
dir_config(extension_name)

# Do the work
create_makefile(extension_name)
