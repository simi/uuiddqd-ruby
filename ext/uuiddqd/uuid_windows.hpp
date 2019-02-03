#include "ruby.h"
#include <Rpc.h>
#pragma comment(lib, "Rpcrt4.lib")

VALUE method_generate(VALUE self) {
  UUID uuid = {0};
  char * uuid_string;

  ::UuidCreate(&uuid);

  RPC_CSTR szUuid = NULL;
  if (::UuidToStringA(&uuid, &szUuid) == RPC_S_OK)
  {
    uuid_string = (char*) szUuid;
    ::RpcStringFreeA(&szUuid);
  }

  return rb_str_new2(uuid_string);
}
