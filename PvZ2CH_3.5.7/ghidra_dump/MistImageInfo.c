// Class: MistImageInfo


/* MistImageInfo::MistImageInfo(MistImageInfo&&) */

void __thiscall MistImageInfo::MistImageInfo(MistImageInfo *this,MistImageInfo *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  MistImageInfo MVar5;
  MistImageInfo MVar6;
  MistImageInfo MVar7;
  MistImageInfo MVar8;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  MVar5 = param_1[0xc];
  uVar3 = *(undefined4 *)(param_1 + 8);
  MVar6 = param_1[0xd];
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  MVar7 = param_1[0xe];
  MVar8 = param_1[0xf];
  this[0x10] = param_1[0x10];
  this[0xc] = MVar5;
  this[0xd] = MVar6;
  this[0xe] = MVar7;
  this[0xf] = MVar8;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0x14) = uVar4;
  Sexy::Insets::Insets((Insets *)(this + 0x18),(Insets *)(param_1 + 0x18));
  Sexy::Point::Point((Point *)(this + 0x28),(TPoint *)(param_1 + 0x28));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x30),(RtWeakPtrBase *)(param_1 + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MistImageInfo::Reset() */

void __thiscall MistImageInfo::Reset(MistImageInfo *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30))
  ;
  iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
  Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar2,iVar3);
  lVar1 = ___stack_chk_guard;
  *(undefined8 *)(this + 0x18) = local_18;
  *(undefined8 *)(this + 0x20) = uStack_10;
  this[0xc] = (MistImageInfo)0x0;
  this[0xd] = (MistImageInfo)0x0;
  this[0xe] = (MistImageInfo)0x0;
  *(undefined4 *)(this + 8) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MistImageInfo::MistImageInfo(Sexy::RtWeakPtr<Sexy::Image>, Sexy::Point, float, float, float) */

void __thiscall
MistImageInfo::MistImageInfo
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,MistImageInfo *this,
          RtWeakPtr<Sexy::ResourceInfo> *param_5,TPoint *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  undefined4 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  this[0xc] = (MistImageInfo)0x0;
  this[0xd] = (MistImageInfo)0x0;
  local_8 = ___stack_chk_guard;
  this[0xe] = (MistImageInfo)0x0;
  this[0xf] = (MistImageInfo)0x0;
  this[0x10] = (MistImageInfo)0x0;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 4) = param_2;
  *(undefined4 *)this = param_1;
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x14) = uVar4;
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Point::Point((Point *)(this + 0x28),param_6);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)(this + 0x30),(RtWeakPtrBase *)param_5);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x30));
  if (bVar1) {
    this_00 = (LotteryResultProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    this_01 = (SalesProgressBar *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
    iVar3 = SalesProgressBar::GetCurrentLevel(this_01);
    Sexy::Insets::Insets((Insets *)&local_18,0,0,iVar2,iVar3);
    *(undefined8 *)(this + 0x18) = local_18;
    *(undefined8 *)(this + 0x20) = uStack_10;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MistImageInfo::MistImageInfo() */

void __thiscall MistImageInfo::MistImageInfo(MistImageInfo *this)

{
  Sexy::Insets::Insets((Insets *)(this + 0x18));
  Sexy::Point::Point((Point *)(this + 0x28));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  return;
}

