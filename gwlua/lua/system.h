const unsigned char gwlua_lua_system_lua[] = {
  0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x20,
  0x3d, 0x20, 0x7b, 0x7d, 0x0d, 0x0a, 0x0d, 0x0a, 0x72, 0x65, 0x74, 0x75,
  0x72, 0x6e, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28,
  0x20, 0x4d, 0x20, 0x29, 0x0d, 0x0a, 0x20, 0x20, 0x4d, 0x2e, 0x6c, 0x6f,
  0x61, 0x64, 0x75, 0x6e, 0x69, 0x74, 0x20, 0x3d, 0x20, 0x66, 0x75, 0x6e,
  0x63, 0x74, 0x69, 0x6f, 0x6e, 0x28, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x20,
  0x29, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x20,
  0x3d, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x2e, 0x2e, 0x20, 0x27, 0x2e,
  0x6c, 0x75, 0x61, 0x27, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f,
  0x63, 0x61, 0x6c, 0x20, 0x75, 0x6e, 0x69, 0x74, 0x20, 0x3d, 0x20, 0x63,
  0x61, 0x63, 0x68, 0x65, 0x5b, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x5d,
  0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20,
  0x69, 0x66, 0x20, 0x75, 0x6e, 0x69, 0x74, 0x20, 0x74, 0x68, 0x65, 0x6e,
  0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75,
  0x72, 0x6e, 0x20, 0x75, 0x6e, 0x69, 0x74, 0x0d, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x65, 0x6e, 0x64, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a,
  0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x62, 0x69,
  0x6e, 0x20, 0x3d, 0x20, 0x4d, 0x2e, 0x6c, 0x6f, 0x61, 0x64, 0x62, 0x69,
  0x6e, 0x28, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x20, 0x29, 0x0d, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20,
  0x62, 0x69, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x6e, 0x0d, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x6c, 0x20, 0x65, 0x72,
  0x72, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x69,
  0x74, 0x2c, 0x20, 0x65, 0x72, 0x72, 0x20, 0x3d, 0x20, 0x6c, 0x6f, 0x61,
  0x64, 0x28, 0x20, 0x62, 0x69, 0x6e, 0x2c, 0x20, 0x6e, 0x61, 0x6d, 0x65,
  0x2c, 0x20, 0x27, 0x74, 0x27, 0x20, 0x29, 0x0d, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x69,
  0x66, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x75, 0x6e, 0x69, 0x74, 0x20, 0x74,
  0x68, 0x65, 0x6e, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x28, 0x20, 0x65, 0x72, 0x72, 0x20,
  0x29, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e, 0x64,
  0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x75, 0x6e, 0x69, 0x74, 0x20, 0x3d, 0x20, 0x75,
  0x6e, 0x69, 0x74, 0x28, 0x29, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x20, 0x63, 0x61, 0x63, 0x68, 0x65, 0x5b, 0x20, 0x6e, 0x61, 0x6d, 0x65,
  0x20, 0x5d, 0x20, 0x3d, 0x20, 0x75, 0x6e, 0x69, 0x74, 0x0d, 0x0a, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20,
  0x75, 0x6e, 0x69, 0x74, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x65, 0x6e,
  0x64, 0x0d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x20,
  0x20, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x28, 0x20, 0x27, 0x75, 0x6e, 0x69,
  0x74, 0x20, 0x27, 0x20, 0x2e, 0x2e, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x20,
  0x2e, 0x2e, 0x20, 0x27, 0x20, 0x6e, 0x6f, 0x74, 0x20, 0x66, 0x6f, 0x75,
  0x6e, 0x64, 0x27, 0x20, 0x29, 0x0d, 0x0a, 0x20, 0x20, 0x65, 0x6e, 0x64,
  0x0d, 0x0a, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61,
  0x6c, 0x20, 0x63, 0x6c, 0x61, 0x73, 0x73, 0x20, 0x3d, 0x20, 0x4d, 0x2e,
  0x6c, 0x6f, 0x61, 0x64, 0x75, 0x6e, 0x69, 0x74, 0x20, 0x27, 0x63, 0x6c,
  0x61, 0x73, 0x73, 0x27, 0x0d, 0x0a, 0x20, 0x20, 0x0d, 0x0a, 0x20, 0x20,
  0x4d, 0x2e, 0x74, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x20, 0x3d, 0x20,
  0x63, 0x6c, 0x61, 0x73, 0x73, 0x2e, 0x6e, 0x65, 0x77, 0x28, 0x29, 0x0d,
  0x0a, 0x0d, 0x0a, 0x20, 0x20, 0x66, 0x75, 0x6e, 0x63, 0x74, 0x69, 0x6f,
  0x6e, 0x20, 0x4d, 0x2e, 0x74, 0x6f, 0x62, 0x6a, 0x65, 0x63, 0x74, 0x3a,
  0x6e, 0x65, 0x77, 0x28, 0x29, 0x0d, 0x0a, 0x20, 0x20, 0x65, 0x6e, 0x64,
  0x0d, 0x0a, 0x65, 0x6e, 0x64, 0x0d, 0x0a
};
const unsigned int gwlua_lua_system_lua_len = 631;
