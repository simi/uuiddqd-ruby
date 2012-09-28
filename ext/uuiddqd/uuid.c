#include <stdio.h>
#include <uuid/uuid.h>
#include "ruby.h"

VALUE Uuiddqd = Qnil;

void Init_uuiddqd();

VALUE method_generate(VALUE self);

void Init_uuiddqd() {
  Uuiddqd = rb_define_module("Uuiddqd");
  rb_define_singleton_method(Uuiddqd, "generate", method_generate, 0);
}

VALUE method_generate(VALUE self) {
  uuid_t my_uuid;
  uuid_generate(my_uuid);

  char stringy[36];
  uuid_unparse(my_uuid, stringy);
  return rb_str_new2(stringy);
}
