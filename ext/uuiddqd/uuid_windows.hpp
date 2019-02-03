#include "ruby.h"
#include <Rpc.h>

VALUE method_generate(VALUE self) {
  UUID uuid;
  RPC_CSTR string_uuid;
  VALUE ruby_uuid;

  ::UuidCreate(&uuid);

  ::UuidToStringA(&uuid, &string_uuid);
  ruby_uuid = rb_str_new2((char*) string_uuid);
  ::RpcStringFreeA(&string_uuid);

  return ruby_uuid;
}
