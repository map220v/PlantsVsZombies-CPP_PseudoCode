// Class: PVPLabData


/* PVPLabData::~PVPLabData() */

void __thiscall PVPLabData::~PVPLabData(PVPLabData *this)

{
  _Rb_tree_node *p_Var1;
  
  p_Var1 = (_Rb_tree_node *)FUN_04ac8d50(*(undefined8 *)(this + 0x10));
  std::
  _Rb_tree<PVPLabItemType,std::pair<PVPLabItemType_const,int>,std::_Select1st<std::pair<PVPLabItemType_const,int>>,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
  ::_M_erase((_Rb_tree<PVPLabItemType,std::pair<PVPLabItemType_const,int>,std::_Select1st<std::pair<PVPLabItemType_const,int>>,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
              *)this,p_Var1);
  return;
}


/* PVPLabData::TEMPNAMEPLACEHOLDERVALUE(PVPLabData&&) */

PVPLabData * __thiscall PVPLabData::operator=(PVPLabData *this,PVPLabData *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  std::
  map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
  ::operator=((map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
               *)this,(map *)param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar2 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x38) = uVar1;
  return this;
}


/* PVPLabData::SetUpgradeItem(PVPLabItemType, int, int) */

void __thiscall
PVPLabData::SetUpgradeItem(PVPLabData *this,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  float fVar2;
  
  *(undefined4 *)(this + 0x30) = param_2;
  *(undefined4 *)(this + 0x34) = param_3;
  if (param_4 < 1) {
    uVar1 = PVZ_EOT();
    *(undefined4 *)(this + 0x38) = uVar1;
    return;
  }
  fVar2 = (float)PVZ_T();
  *(float *)(this + 0x38) = fVar2 + (float)param_4;
  return;
}


/* PVPLabData::PVPLabData() */

void __thiscall PVPLabData::PVPLabData(PVPLabData *this)

{
  undefined4 uVar1;
  
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)this);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVPLabData::GetLabItemLevel(PVPLabItemType) */

void __thiscall PVPLabData::GetLabItemLevel(PVPLabData *this,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
             ::find((map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
                     *)this,(PVPLabItemType *)local_24);
  local_10 = std::
             map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::end((map<int,std::wstring,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)this);
  bVar1 = eastl::operator!=((rbtree_iterator *)&local_18,(rbtree_iterator *)&local_10);
  uVar3 = 0;
  if (bVar1) {
    puVar2 = (undefined4 *)
             std::
             map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
             ::operator[]((map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
                           *)this,(PVPLabItemType *)local_24);
    uVar3 = *puVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


/* PVPLabData::SetLabItemLevel(PVPLabItemType, int) */

void __thiscall PVPLabData::SetLabItemLevel(PVPLabData *this,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = param_2;
  puVar1 = (undefined4 *)
           std::
           map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
           ::operator[]((map<PVPLabItemType,int,std::less<PVPLabItemType>,std::allocator<std::pair<PVPLabItemType_const,int>>>
                         *)this,(PVPLabItemType *)&local_4);
  *puVar1 = param_3;
  MessageRouter::Post<int,int,PVPLabItemType,int>
            ((MessageRouter *)gMessageRouter,Message::SetPvPLabLevel,local_4);
  return;
}

