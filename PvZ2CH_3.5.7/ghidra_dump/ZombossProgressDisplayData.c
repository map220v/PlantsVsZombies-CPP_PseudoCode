// Class: ZombossProgressDisplayData


/* ZombossProgressDisplayData::ZombossProgressDisplayData() */

void __thiscall
ZombossProgressDisplayData::ZombossProgressDisplayData(ZombossProgressDisplayData *this)

{
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)this);
  std::vector<bool,std::allocator<bool>>::vector((vector<bool,std::allocator<bool>> *)(this + 0x28))
  ;
  return;
}


/* ZombossProgressDisplayData::~ZombossProgressDisplayData() */

void __thiscall
ZombossProgressDisplayData::~ZombossProgressDisplayData(ZombossProgressDisplayData *this)

{
  std::vector<bool,std::allocator<bool>>::~vector
            ((vector<bool,std::allocator<bool>> *)(this + 0x28));
  std::vector<bool,std::allocator<bool>>::~vector((vector<bool,std::allocator<bool>> *)this);
  return;
}


/* ZombossProgressDisplayData::TEMPNAMEPLACEHOLDERVALUE(ZombossProgressDisplayData const&) */

ZombossProgressDisplayData * __thiscall
ZombossProgressDisplayData::operator=
          (ZombossProgressDisplayData *this,ZombossProgressDisplayData *param_1)

{
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)this,(vector *)param_1);
  std::vector<bool,std::allocator<bool>>::operator=
            ((vector<bool,std::allocator<bool>> *)(this + 0x28),(vector *)(param_1 + 0x28));
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossProgressDisplayData::GetNumWins() */

void ZombossProgressDisplayData::GetNumWins(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 local_38 [16];
  _Bit_iterator_base local_28 [16];
  undefined1 local_18 [16];
  long local_8;
  
  iVar3 = 0;
  local_8 = ___stack_chk_guard;
  local_38 = std::vector<bool,std::allocator<bool>>::begin();
  local_28 = (_Bit_iterator_base  [16])std::vector<bool,std::allocator<bool>>::end();
  while (cVar2 = std::_Bit_iterator_base::operator!=((_Bit_iterator_base *)local_38,local_28),
        cVar2 != '\0') {
    auVar4 = FUN_03691aa4(local_38._0_8_,local_38._8_8_ & 0xffffffff);
    local_18 = auVar4;
    bVar1 = std::_Bit_reference::operator_cast_to_bool((_Bit_reference *)local_18);
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
    std::_Bit_const_iterator::operator++((_Bit_const_iterator *)local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}

