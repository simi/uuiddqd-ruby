#include "ruby.h"
#include <uuid/uuid.h>

VALUE method_generate(VALUE self) {
  uuid_t my_uuid;
  uuid_generate(my_uuid);

  char stringy[36];
  uuid_unparse(my_uuid, stringy);
  return rb_str_new2(stringy);
}
