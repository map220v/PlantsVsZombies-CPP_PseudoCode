// Class: Sexy::RtSerialRtonDecodeBuffer


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonDecodeBuffer::RtSerialRtonDecodeBuffer() */

void __thiscall
Sexy::RtSerialRtonDecodeBuffer::RtSerialRtonDecodeBuffer(RtSerialRtonDecodeBuffer *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  RtSerialBuffer::RtSerialBuffer((RtSerialBuffer *)this,(uchar *)0x0,0);
  eastl::
  hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
  ::hash_map((allocator *)(this + 0x30));
  eastl::
  hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
  ::hash_map((allocator *)(this + 0x60));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Sexy::RtSerialRtonDecodeBuffer::~RtSerialRtonDecodeBuffer() */

void __thiscall
Sexy::RtSerialRtonDecodeBuffer::~RtSerialRtonDecodeBuffer(RtSerialRtonDecodeBuffer *this)

{
  eastl::
  hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
  ::~hash_map((hash_map<std::wstring,unsigned_int,eastl::string_hash<std::wstring>,eastl::equal_to<std::wstring>,eastl::allocator,false>
               *)(this + 0x60));
  eastl::
  hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
  ::~hash_map((hash_map<std::string,unsigned_int,eastl::string_hash<std::string>,eastl::equal_to<std::string>,eastl::allocator,false>
               *)(this + 0x30));
  RtSerialBuffer::~RtSerialBuffer((RtSerialBuffer *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::RtSerialRtonDecodeBuffer::Build(unsigned char const*, unsigned int) */

void __thiscall
Sexy::RtSerialRtonDecodeBuffer::Build(RtSerialRtonDecodeBuffer *this,uchar *param_1,uint param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  RtSerialBuffer aRStack_b0 [45];
  undefined1 auStack_83 [3];
  RtSerialBuffer *local_80;
  RtSerialRtonDecodeBuffer *local_78;
  vector<bool,std::allocator<bool>> avStack_70 [88];
  RtSerialRtonDecodeBuffer *local_18;
  RtSerialRtonDecodeBuffer *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (uchar *)0x0 || param_2 == 0) {
    bVar1 = false;
  }
  else {
    RtSerialBuffer::RtSerialBuffer(aRStack_b0,param_1,param_2);
    FUN_051c7378(auStack_83);
    iVar3 = RtSerialBuffer::ReadInt32Fixed(aRStack_b0);
    bVar1 = false;
    if (iVar3 == 0x4e4f5452) {
      sVar2 = RtSerialBuffer::ReadInt16Fixed(aRStack_b0);
      if ((sVar2 == 1) && (sVar2 = RtSerialBuffer::ReadInt16Fixed(aRStack_b0), sVar2 == 0)) {
        FUN_051c7370(this + 0x2d);
        RtSerialBuffer::WriteInt32Fixed((RtSerialBuffer *)this,0x4e4f5452);
        RtSerialBuffer::WriteInt16Fixed((RtSerialBuffer *)this,1);
        RtSerialBuffer::WriteInt16Fixed((RtSerialBuffer *)this,1);
        RtSerialBuffer::WriteInt8Fixed((RtSerialBuffer *)this,0xffffffb8);
        FUN_051cac30(&local_80);
        local_18 = this + 0x30;
        local_10 = this + 0x60;
        local_80 = aRStack_b0;
        local_78 = this;
        std::vector<bool,std::allocator<bool>>::push_back
                  (avStack_70,param_1 == (uchar *)0x0 || param_2 == 0);
        FUN_051cdbb4(&local_80,0);
        std::vector<bool,std::allocator<bool>>::pop_back(avStack_70);
        iVar3 = RtSerialBuffer::ReadInt32Fixed(aRStack_b0);
        bVar1 = iVar3 == 0x454e4f44;
        if (bVar1) {
          RtSerialBuffer::WriteInt32Fixed((RtSerialBuffer *)this,0x454e4f44);
        }
        FUN_051caee4(&local_80);
      }
    }
    RtSerialBuffer::~RtSerialBuffer(aRStack_b0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}

