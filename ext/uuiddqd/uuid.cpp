#include "ruby.h"

#if defined(_WIN32)
  #include "uuid_windows.hpp"
#else
  #include "uuid_unix.h"
#endif

VALUE Uuiddqd = Qnil;

extern "C" void Init_uuiddqd();

VALUE method_generate(VALUE self);

extern "C" void Init_uuiddqd() {
  Uuiddqd = rb_define_module("Uuiddqd");
  rb_define_singleton_method(Uuiddqd, "generate", (VALUE(*)(ANYARGS))method_generate,0);
}
