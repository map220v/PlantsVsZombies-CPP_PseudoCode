// Class: UIImageDrawInfo


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageDrawInfo::UIImageDrawInfo(Sexy::RtWeakPtr<Sexy::Image>, UIImageType, UIImageDrawStyle,
   Sexy::Insets const&, float, float, float) */

void __thiscall
UIImageDrawInfo::UIImageDrawInfo
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,UIImageDrawInfo *this,
          RtWeakPtr *param_5,undefined4 param_6,undefined4 param_7,int *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_5);
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)param_8;
  uVar2 = *(undefined8 *)(param_8 + 2);
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x14) = param_7;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*param_8,param_8[1],-(*param_8 + param_8[2]),
             -(param_8[1] + param_8[3]));
  lVar3 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  *(undefined4 *)(this + 0x38) = param_1;
  *(undefined4 *)(this + 0x3c) = param_2;
  *(undefined4 *)(this + 0x40) = param_3;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageDrawInfo::UIImageDrawInfo(Sexy::RtWeakPtr<Sexy::Image>, UIImageType, UIImageDrawStyle,
   Sexy::Insets const&) */

void __thiscall
UIImageDrawInfo::UIImageDrawInfo
          (UIImageDrawInfo *this,RtWeakPtr *param_2,undefined4 param_3,undefined4 param_4,
          int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this,param_2);
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(undefined8 *)param_5;
  uVar2 = *(undefined8 *)(param_5 + 2);
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = param_4;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*param_5,param_5[1],-(*param_5 + param_5[2]),
             -(param_5[1] + param_5[3]));
  lVar3 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  *(undefined4 *)(this + 0x38) = 0;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIImageDrawInfo::UIImageDrawInfo(std::vector<Sexy::RtWeakPtr<Sexy::Image>,
   std::allocator<Sexy::RtWeakPtr<Sexy::Image> > >&, UIImageType, UIImageDrawStyle, Sexy::Insets
   const&) */

void __thiscall
UIImageDrawInfo::UIImageDrawInfo
          (UIImageDrawInfo *this,undefined8 param_1,undefined4 param_3,undefined4 param_4,
          int *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)this);
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Insets::Insets((Insets *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  *(undefined8 *)(this + 8) = param_1;
  uVar1 = *(undefined8 *)param_5;
  uVar2 = *(undefined8 *)(param_5 + 2);
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined4 *)(this + 0x14) = param_4;
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x20) = uVar2;
  Sexy::Insets::Insets
            ((Insets *)&local_18,*param_5,param_5[1],-(*param_5 + param_5[2]),
             -(param_5[1] + param_5[3]));
  lVar3 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x28) = local_18;
  *(undefined8 *)(this + 0x30) = uStack_10;
  *(undefined4 *)(this + 0x38) = 0;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

