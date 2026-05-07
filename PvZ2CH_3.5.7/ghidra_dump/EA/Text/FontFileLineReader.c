// Class: EA::Text::FontFileLineReader


/* EA::Text::FontFileLineReader::~FontFileLineReader() */

void __thiscall EA::Text::FontFileLineReader::~FontFileLineReader(FontFileLineReader *this)

{
  if (1 < *(long *)(this + 0x10) - *(long *)this) {
    FUN_05368718();
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontFileLineReader::FontFileLineReader() */

void __thiscall EA::Text::FontFileLineReader::FontFileLineReader(FontFileLineReader *this)

{
  FontFileLineReader *pFVar1;
  long lVar2;
  fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator> afStack_18 [16];
  long lStack_8;
  
  pFVar1 = this + 0x28;
  lStack_8 = ___stack_chk_guard;
  eastl::fixed_vector_allocator<8ul,1ul,8ul,0ul,true,eastl::allocator>::fixed_vector_allocator
            (afStack_18,pFVar1);
  eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
  ::basic_string((basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
                  *)this,(fixed_vector_allocator *)afStack_18);
  *(FontFileLineReader **)(this + 8) = pFVar1;
  lVar2 = ___stack_chk_guard;
  *(FontFileLineReader **)this = pFVar1;
  *(FontFileLineReader **)(this + 0x10) = this + 0x1028;
  this[0x28] = (FontFileLineReader)0x0;
  if (lStack_8 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EA::Text::FontFileLineReader::ReadLine(EA::IO::IStream*) */

void __thiscall EA::Text::FontFileLineReader::ReadLine(FontFileLineReader *this,IStream *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  char local_12;
  undefined1 uStack_11;
  char acStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  eastl::basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
  ::resize((basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
            *)this,0);
  uVar4 = 0;
  do {
    lVar2 = (**(code **)(*(long *)param_1 + 0x68))(param_1,&local_12,1);
    if (lVar2 != 1) {
      if (uVar4 == 0) {
        uVar4 = 0xfffffffffffffffe;
      }
LAB_0536a7c8:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar4);
      }
      return;
    }
    if ((uVar4 == 0) && (local_12 == '\t')) {
      (**(code **)(*(long *)param_1 + 0x68))(param_1,acStack_10,8);
      iVar1 = atoi(acStack_10);
      uVar4 = (ulong)iVar1;
      eastl::
      basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
      resize((basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
              *)this,uVar4);
      uVar3 = FUN_05368570(*(undefined8 *)this);
      (**(code **)(*(long *)param_1 + 0x68))(param_1,uVar3,uVar4);
      goto LAB_0536a7c8;
    }
    if ((local_12 == '\n') || (local_12 == '\r')) {
      if (local_12 == '\r') {
        (**(code **)(*(long *)param_1 + 0x68))(param_1,&uStack_11,1);
      }
      goto LAB_0536a7c8;
    }
    eastl::
    basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>::
    push_back((basic_string<char,eastl::fixed_vector_allocator<1ul,4096ul,1ul,0ul,true,eastl::allocator>>
               *)this,local_12);
    uVar4 = uVar4 + 1;
  } while( true );
}

