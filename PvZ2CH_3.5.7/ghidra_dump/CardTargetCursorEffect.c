// Class: CardTargetCursorEffect


/* CardTargetCursorEffect::StaticGetClass() */

long * CardTargetCursorEffect::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetCursorEffect",uVar2,StaticNew);
  return sClass;
}


/* CardTargetCursorEffect::GetClass() const */

long * CardTargetCursorEffect::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Sexy::RtObject::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetCursorEffect",uVar2,StaticNew);
  return sClass;
}


/* CardTargetCursorEffect::GetBoardPosition() const */

Point * CardTargetCursorEffect::GetBoardPosition(void)

{
  long in_x0;
  Point *in_x8;
  
  Sexy::Point::Point(in_x8,(TPoint *)(in_x0 + 0x2c));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursorEffect::Update() */

void __thiscall CardTargetCursorEffect::Update(CardTargetCursorEffect *this)

{
  bool bVar1;
  undefined8 *puVar2;
  PopAnimRig *this_00;
  float fVar3;
  float fVar4;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x29] != (CardTargetCursorEffect)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x10));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x10));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      this_00 = (PopAnimRig *)*puVar2;
      fVar3 = (float)PVZ_T();
      fVar4 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
      std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                ((move_iterator<Sexy::LeaderboardEntry*> *)&local_18);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* CardTargetCursorEffect::CardTargetCursorEffect() */

void __thiscall CardTargetCursorEffect::CardTargetCursorEffect(CardTargetCursorEffect *this)

{
  Sexy::RtObject::RtObject((RtObject *)this);
  *(undefined ***)this = &PTR_GetClass_06666c30;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x10));
  Sexy::Point::Point((Point *)(this + 0x2c));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x34));
  this[0x28] = (CardTargetCursorEffect)0x0;
  this[0x29] = (CardTargetCursorEffect)0x1;
  return;
}


/* CardTargetCursorEffect::StaticNew() */

CardTargetCursorEffect * CardTargetCursorEffect::StaticNew(void)

{
  CardTargetCursorEffect *this;
  
  this = ::operator_new(0x40);
  CardTargetCursorEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursorEffect::Draw(Sexy::Graphics*) */

void __thiscall CardTargetCursorEffect::Draw(CardTargetCursorEffect *this,Graphics *param_1)

{
  vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>> *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  PopAnimRig *this_01;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x29] != (CardTargetCursorEffect)0x0) {
    this_00 = (vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>> *)(this + 0x10);
    cVar1 = std::vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>>::empty(this_00);
    if (cVar1 == '\0') {
      Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
      local_58 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
      local_50 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_58,(__normal_iterator *)&local_50),
            bVar2) {
        puVar3 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
        this_01 = (PopAnimRig *)*puVar3;
        Sexy::Insets::Insets((Insets *)&local_40,0xff,0xff,0xff,0x7f);
        PopAnimRig::SetPAMColor(this_01,(Color *)&local_40);
        local_48 = puVar3[2];
        Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
        local_40 = puVar3[1];
        Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)&local_48);
        cVar1 = FUN_03603bd0(this[0x28]);
        if (cVar1 == '\0') {
          fVar5 = (float)FUN_03603dc0((undefined4)local_40);
          fVar6 = (float)FUN_03603dc0(local_40._4_4_);
          FUN_03603b98(-fVar5,-fVar6,auStack_28,auStack_1c);
        }
        else {
          uVar4 = FUN_03603dc0((undefined4)local_40);
          fVar5 = (float)FUN_03603dc0(local_40._4_4_);
          FUN_03603b98(uVar4,-fVar5,auStack_28,auStack_1c);
        }
        fVar5 = (float)PopAnimRig::GetDrawScale((PopAnimRig *)*puVar3);
        Sexy::SexyTransform2D::Scale(aSStack_30,fVar5,fVar5);
        PopAnimRig::Draw((PopAnimRig *)*puVar3,param_1,aSStack_30);
        std::move_iterator<Sexy::LeaderboardEntry*>::operator++
                  ((move_iterator<Sexy::LeaderboardEntry*> *)&local_58);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardTargetCursorEffect::~CardTargetCursorEffect() */

void __thiscall CardTargetCursorEffect::~CardTargetCursorEffect(CardTargetCursorEffect *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x10);
  uVar4 = 0;
  *(undefined ***)this = &PTR_GetClass_06666c30;
  uVar1 = FUN_03603c34(uVar5,*(undefined8 *)(this + 0x18));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03603c48(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puVar3 = (undefined8 *)FUN_03603c48(*(undefined8 *)(this + 0x10),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x10);
        uVar1 = FUN_03603c34(uVar5,*(undefined8 *)(this + 0x18));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>>::~vector
            ((vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>> *)(this + 0x10));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 8));
  nop();
  return;
}


/* CardTargetCursorEffect::~CardTargetCursorEffect() */

void __thiscall CardTargetCursorEffect::~CardTargetCursorEffect(CardTargetCursorEffect *this)

{
  ~CardTargetCursorEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursorEffect::AddAnimRig(PopAnimRig*, Sexy::SexyVector2, Sexy::SexyVector2) */

void CardTargetCursorEffect::AddAnimRig
               (undefined4 param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_1,PopAnimRig *param_6)

{
  undefined8 local_30;
  undefined8 local_28;
  CursorAnimEffectData aCStack_20 [24];
  long local_8;
  
  local_28 = CONCAT44(param_2,param_1_00);
  local_8 = ___stack_chk_guard;
  local_30 = CONCAT44(param_4,param_3);
  CursorAnimEffectData::CursorAnimEffectData
            (aCStack_20,param_6,(SexyVector2 *)&local_28,(SexyVector2 *)&local_30);
  std::vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>>::push_back
            ((vector<CursorAnimEffectData,std::allocator<CursorAnimEffectData>> *)(param_1 + 0x10),
             aCStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

