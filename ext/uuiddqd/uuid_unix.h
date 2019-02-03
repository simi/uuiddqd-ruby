#include "ruby.h"
#include <uuid/uuid.h>

VALUE method_generate(VALUE self) {
  uuid_t uuid;
  char string_uuid[36];

  uuid_generate_random(uuid);
  uuid_unparse(uuid, string_uuid);
  return rb_str_new(string_uuid, 36);
}
