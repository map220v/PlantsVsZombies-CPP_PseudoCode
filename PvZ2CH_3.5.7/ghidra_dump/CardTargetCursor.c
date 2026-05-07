// Class: CardTargetCursor


/* CardTargetCursor::StaticGetClass() */

long * CardTargetCursor::StaticGetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* CardTargetCursor::GetClass() const */

long * CardTargetCursor::GetClass(void)

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
  uVar2 = BaseCursor::StaticGetClass();
  (*pcVar3)(plVar1,"CardTargetCursor",uVar2,StaticNew);
  return sClass;
}


/* CardTargetCursor::InitializaTargetCursor(Sexy::Touch const&, Sexy::RtWeakPtr<CardObject>) */

void __thiscall
CardTargetCursor::InitializaTargetCursor(CardTargetCursor *this,Touch *param_1,RtWeakPtr *param_3)

{
  BaseCursor::DelayConstruct((BaseCursor *)this,param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),param_3);
  (**(code **)(*(long *)this + 0x80))(this);
  return;
}


/* CardTargetCursor::tryToUse() */

void __thiscall CardTargetCursor::tryToUse(CardTargetCursor *this)

{
  CardObject *this_00;
  
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  CardObject::UseCard(this_00);
  return;
}


/* CardTargetCursor::cancelToUse() */

void __thiscall CardTargetCursor::cancelToUse(CardTargetCursor *this)

{
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  nop();
  return;
}


/* CardTargetCursor::GetValidRange(Sexy::TRect<int>&) */

void __thiscall CardTargetCursor::GetValidRange(CardTargetCursor *this,TRect *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long extraout_x0;
  RtObject *this_00;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar2) {
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
    ;
    this_00 = *(RtObject **)(lVar3 + 0x18);
    if ((this_00 != (RtObject *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<GridTargetAdaptor>(this_00), bVar2)) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 0x10));
      nop();
      if (extraout_x0 != 0) {
        uVar1 = *(undefined8 *)(extraout_x0 + 0x2c);
        *(undefined8 *)param_1 = *(undefined8 *)(extraout_x0 + 0x24);
        *(undefined8 *)(param_1 + 8) = uVar1;
        return;
      }
    }
  }
  return;
}


/* CardTargetCursor::onDestroy() */

void CardTargetCursor::onDestroy(void)

{
  MapPiecesAnimRig *this;
  
  this = (MapPiecesAnimRig *)Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
  MapPiecesAnimRig::Clear(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::onTouchEvent(Sexy::Touch const&) */

void __thiscall CardTargetCursor::onTouchEvent(CardTargetCursor *this,Touch *param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  CardTargetCursorEffectMgr *pCVar4;
  int iVar5;
  long *plVar6;
  code *pcVar7;
  int local_30;
  int local_2c;
  uint local_28 [2];
  undefined1 auStack_20 [4];
  int local_1c;
  Insets aIStack_18 [16];
  code *local_8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  local_8 = ___stack_chk_guard;
  pcVar7 = ___stack_chk_guard;
  if (iVar1 == 4) {
    pcVar7 = *(code **)(*(long *)this + 0xa0);
    (*pcVar7)();
    BaseCursor::Destroy((BaseCursor *)this);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 == 3) {
    cVar2 = (**(code **)(*(long *)this + 0x90))(this);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
      (**(code **)(*(long *)this + 0xa0))(this);
      BaseCursor::Destroy((BaseCursor *)this);
    }
    else {
      (**(code **)(*(long *)this + 0x98))();
      BaseCursor::Destroy((BaseCursor *)this);
    }
  }
  else {
    iVar5 = (int)pcVar7;
    if (iVar1 == 1) {
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
      plVar6 = *(long **)(lVar3 + 0x18);
      if (plVar6 != (long *)0x0) {
        Sexy::Insets::Insets(aIStack_18);
        GetValidRange(this,(TRect *)aIStack_18);
        BaseCursor::GetBoardPosition();
        BaseCursor::GetBoardPosition();
        BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)local_28[0],local_1c,iVar5);
        cVar2 = Sexy::TRect<int>::Contains((TRect<int> *)aIStack_18,local_30,local_2c);
        if (cVar2 == '\0') {
          pcVar7 = *(code **)(*plVar6 + 0x58);
          BaseCursor::GetBoardPosition();
          (*pcVar7)((Point *)local_28,plVar6,auStack_20);
          pCVar4 = (CardTargetCursorEffectMgr *)
                   Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
          CardTargetCursorEffectMgr::SetPositionFromBoardSpace(pCVar4,(Point *)local_28);
          pCVar4 = (CardTargetCursorEffectMgr *)
                   Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
          CardTargetCursorEffectMgr::SetVisible(pCVar4,true);
          FUN_03603bc0(this + 0x38,0);
        }
        else {
          pCVar4 = (CardTargetCursorEffectMgr *)
                   Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
          CardTargetCursorEffectMgr::SetVisible(pCVar4,false);
          FUN_03603bc0(this + 0x38,1);
        }
      }
    }
    cVar2 = '\0';
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::onUpdate() */

void __thiscall CardTargetCursor::onUpdate(CardTargetCursor *this)

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
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x48));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x48));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_00 = (PopAnimRig *)*puVar2;
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar3,fVar4);
    std::move_iterator<Sexy::CharDataHashEntry*>::operator++
              ((move_iterator<Sexy::CharDataHashEntry*> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardTargetCursor::CardTargetCursor() */

void __thiscall CardTargetCursor::CardTargetCursor(CardTargetCursor *this)

{
  BaseCursor::BaseCursor((BaseCursor *)this);
  *(undefined ***)this = &PTR_GetClass_06666f00;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x60));
  return;
}


/* CardTargetCursor::StaticNew() */

CardTargetCursor * CardTargetCursor::StaticNew(void)

{
  CardTargetCursor *this;
  
  this = ::operator_new(0x68);
  CardTargetCursor(this);
  return this;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x036075c4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* CardTargetCursor::onDraw(Sexy::Graphics*) */

void __thiscall CardTargetCursor::onDraw(CardTargetCursor *this,Graphics *param_1)

{
  vector<CursorAnimData,std::allocator<CursorAnimData>> *this_00;
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  PopAnimRig *this_01;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  float local_44;
  undefined8 local_40;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  this_00 = (vector<CursorAnimData,std::allocator<CursorAnimData>> *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<CursorAnimData,std::allocator<CursorAnimData>>::empty(this_00);
  if (cVar1 == '\0') {
    PrismBeamTracker::GetColor();
    Sexy::TRect<int>::GetCenter();
    Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_48);
    BaseCursor::GetBoardPosition();
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_50,(float)local_60,(float)local_5c);
    fVar7 = (float)local_64;
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,(float)local_68,fVar7);
    local_40._0_4_ = Sexy::SexyVector2::operator-((SexyVector2 *)&local_50,(SexyVector2 *)&local_48)
    ;
    local_40._4_4_ = fVar7;
    auVar6 = DVec2::getLength((DVec2 *)&local_40);
    fVar8 = 100.0;
    local_40 = CONCAT44(local_40._4_4_,0x3f800000);
    local_48 = 0x3dcccccd;
    fVar7 = CurveLerp<float>(auVar6,0x42c80000,auVar6._0_4_,(FastCurve *)&local_48,
                             (DVec2 *)&local_40,4);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    local_58 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
      if (!bVar2) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58)
      ;
      this_01 = (PopAnimRig *)*puVar3;
      Sexy::Insets::Insets((Insets *)&local_40,0xff,0xff,0xff,(int)(fVar7 * 255.0));
      PopAnimRig::SetPAMColor(this_01,(Color *)&local_40);
      local_48 = (**(code **)(*(long *)this + 0x70))(this);
      local_44 = fVar8;
      Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
      local_40 = puVar3[1];
      Sexy::TPoint<float>::operator+=((TPoint<float> *)&local_40,(TPoint *)&local_48);
      cVar1 = FUN_03603bbc(this[0x20]);
      if (cVar1 == '\0') {
        fVar8 = (float)FUN_03603dc0((undefined4)local_40);
        fVar5 = (float)FUN_03603dc0(local_40._4_4_);
        FUN_03603b98(-fVar8,-fVar5,auStack_28,auStack_1c);
      }
      else {
        uVar4 = FUN_03603dc0((undefined4)local_40);
        fVar8 = (float)FUN_03603dc0(local_40._4_4_);
        FUN_03603b98(uVar4,-fVar8,auStack_28,auStack_1c);
      }
      fVar8 = (float)PopAnimRig::GetDrawScale((PopAnimRig *)*puVar3);
      Sexy::SexyTransform2D::Scale(aSStack_30,fVar8,fVar8);
      PopAnimRig::Draw((PopAnimRig *)*puVar3,param_1,aSStack_30);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_58);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardTargetCursor::~CardTargetCursor() */

void __thiscall CardTargetCursor::~CardTargetCursor(CardTargetCursor *this)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(this + 0x48);
  uVar4 = 0;
  *(undefined ***)this = &PTR_GetClass_06666f00;
  uVar1 = FUN_03603c68(uVar5,*(undefined8 *)(this + 0x50));
  if (uVar1 != 0) {
    do {
      plVar2 = (long *)FUN_03603c74(uVar5,uVar4);
      plVar2 = (long *)*plVar2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        puVar3 = (undefined8 *)FUN_03603c74(*(undefined8 *)(this + 0x48),uVar4);
        *puVar3 = 0;
        uVar5 = *(undefined8 *)(this + 0x48);
        uVar1 = FUN_03603c68(uVar5,*(undefined8 *)(this + 0x50));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  std::vector<CursorAnimData,std::allocator<CursorAnimData>>::~vector
            ((vector<CursorAnimData,std::allocator<CursorAnimData>> *)(this + 0x48));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  BaseCursor::~BaseCursor((BaseCursor *)this);
  return;
}


/* CardTargetCursor::~CardTargetCursor() */

void __thiscall CardTargetCursor::~CardTargetCursor(CardTargetCursor *this)

{
  ~CardTargetCursor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::CreateAnimRig(int, std::string const&) */

void __thiscall CardTargetCursor::CreateAnimRig(CardTargetCursor *this,int param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  PopAnimRig *this_00;
  string *psVar3;
  EffectObjectType *this_01;
  long extraout_x0;
  char *pcVar4;
  CardObject *pCVar5;
  long lVar6;
  ResourceInfo *pRVar7;
  RtClass *pRVar8;
  code *pcVar9;
  float fVar10;
  undefined4 uVar11;
  RtWeakPtr aRStack_68 [8];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  DummyInit aDStack_50 [72];
  long local_8;
  
  this_00 = (PopAnimRig *)0x0;
  local_8 = ___stack_chk_guard;
  switch(param_1) {
  case 1:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_68);
      this_00 = (PopAnimRig *)
                CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::SoundResource> *)&local_60,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      PlantAnimRig::HideAllAvatarLayers((PlantAnimRig *)this_00);
      (**(code **)(*(long *)this_00 + 0x1a0))(this_00,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      this_00 = (PopAnimRig *)0x0;
    }
    break;
  case 2:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)aRStack_68);
      this_00 = (PopAnimRig *)
                CreateStandaloneZombieAnimRig((RtWeakPtr<Sexy::SoundResource> *)&local_60,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
      pcVar9 = *(code **)(*(long *)this_00 + 0x110);
      RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
      RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *
                 )aDStack_50);
      (*pcVar9)(this_00,(RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>
                         *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      PopAnimRig::SetMirrorX(this_00,true);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      fVar10 = (float)CardBoardMgr::GetBoardScale();
      PopAnimRig::SetDrawScale(this_00,fVar10);
      DComponent::setEnabled((DComponent *)this,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      this_00 = (PopAnimRig *)0x0;
    }
    break;
  case 3:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_68);
    if (bVar1) {
      this_01 = (EffectObjectType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      EffectObjectType::GetProps(this_01);
      nop();
      if (extraout_x0 != 0) {
        GetPAMByName((string *)(extraout_x0 + 0x98));
        pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_60);
        pcVar4 = (char *)FUN_0547429c(extraout_x0 + 0xa0);
        pRVar8 = (RtClass *)Sexy::RtClass::StaticGetClassNamed(pcVar4);
        this_00 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar7,pRVar8);
        Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
        fVar10 = (float)CardBoardMgr::GetBoardScale();
        PopAnimRig::SetDrawScale(this_00,fVar10);
        pCVar5 = (CardObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
        lVar6 = CardObject::GetCursorAnim(pCVar5);
        cVar2 = FUN_0547419c(lVar6 + 0x30);
        if (cVar2 == '\0') {
          pCVar5 = (CardObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
          lVar6 = CardObject::GetCursorAnim(pCVar5);
          Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
          PopAnimRig::PlayAndContinue(this_00,lVar6 + 0x30,0,aDStack_50);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68)
        ;
        break;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = (PopAnimRig *)0x0;
    break;
  case 4:
    Sexy::StringToUpper((Sexy *)param_2,(string *)0x3607e40);
    GetPAMByName((string *)&local_60);
    std::string::~string((string *)&local_60);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
    this_00 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar7,pRVar8);
    pcVar4 = "animation";
    goto LAB_03607fd0;
  case 5:
    std::string::string((string *)&local_60,"POPANIM_EFFECTS_CARD_GAME_SPECIAL_CURSOR");
    GetPAMByName((string *)&local_60);
    std::string::~string((string *)&local_60);
    nop();
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    pRVar8 = (RtClass *)PopAnimRig::StaticGetClass();
    this_00 = (PopAnimRig *)PopAnimRig::CreateRigOutsideTable((PopAnim *)pRVar7,pRVar8);
    pcVar4 = "banana_lock_recticle";
LAB_03607fd0:
    std::string::string((string *)&local_60,pcVar4);
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
    PopAnimRig::PlayAndContinue(this_00,(string *)&local_60,0,aDStack_50);
    std::string::~string((string *)&local_60);
    nop();
    Sexy::Insets::Insets((Insets *)&local_60);
    (**(code **)(*(long *)this_00 + 0x90))(this_00,(string *)&local_60);
    Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
    fVar10 = (float)CardBoardMgr::GetBoardScale();
    PopAnimRig::SetDrawScale(this_00,fVar10);
    uVar11 = FUN_03603dd0((float)local_60 + (float)local_58 * 0.5);
    *(undefined4 *)(this + 0x60) = uVar11;
    uVar11 = FUN_03603dd0((float)local_5c + (float)local_54 * 0.5);
    *(undefined4 *)(this + 100) = uVar11;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::getCursorAnimOffset() const */

void __thiscall CardTargetCursor::getCursorAnimOffset(CardTargetCursor *this)

{
  bool bVar1;
  CardObject *this_00;
  CardTargetCursorAnim *pCVar2;
  string *psVar3;
  PlantType *pPVar4;
  ZombieType *pZVar5;
  long lVar6;
  EffectObjectType *this_01;
  long extraout_x0;
  float fVar7;
  float fVar8;
  float fVar9;
  ulong local_48;
  undefined4 local_40 [14];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  pCVar2 = (CardTargetCursorAnim *)CardObject::GetCursorAnim(this_00);
  CardTargetCursorAnim::CardTargetCursorAnim((CardTargetCursorAnim *)local_40,pCVar2);
  switch(local_40[0]) {
  case 1:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar6 + 0x28));
    fVar9 = *(float *)(lVar6 + 0x94);
    fVar7 = *(float *)(lVar6 + 0x98);
    pPVar4 = (PlantType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    lVar6 = PlantType::GetProps(pPVar4);
    fVar9 = fVar9 + *(float *)(lVar6 + 0x9c);
    pPVar4 = (PlantType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    lVar6 = PlantType::GetProps(pPVar4);
    fVar7 = fVar7 + *(float *)(lVar6 + 0xa0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    break;
  case 2:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
    ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar3);
    pZVar5 = (ZombieType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    lVar6 = ZombieType::GetProps(pZVar5);
    fVar9 = *(float *)(lVar6 + 0xc4);
    pZVar5 = (ZombieType *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    lVar6 = ZombieType::GetProps(pZVar5);
    fVar7 = *(float *)(lVar6 + 200);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    break;
  case 3:
    psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<GridItemType>>::GetInstancePtr();
    ObjectTypeDirectory<GridItemType>::GetTypeFromTypeName(psVar3);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)&local_48);
    if (bVar1) {
      this_01 = (EffectObjectType *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48)
      ;
      EffectObjectType::GetProps(this_01);
      nop();
      if (extraout_x0 == 0) goto LAB_03608358;
      fVar7 = *(float *)(extraout_x0 + 0xa8);
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      fVar9 = (float)CardBoardMgr::GetBoardScale();
      fVar8 = *(float *)(extraout_x0 + 0xac);
      fVar9 = fVar9 * fVar7;
      Sexy::LazySingleton<CardBoardMgr>::GetInstancePtr();
      fVar7 = (float)CardBoardMgr::GetBoardScale();
      fVar7 = fVar7 * fVar8;
    }
    else {
LAB_03608358:
      fVar9 = 0.0;
      fVar7 = 0.0;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
    break;
  case 4:
  case 5:
    fVar9 = *(float *)(this + 0x60);
    fVar7 = *(float *)(this + 100);
    break;
  default:
    fVar9 = 0.0;
    fVar7 = 0.0;
  }
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,fVar9,fVar7);
  CardTargetCursorAnim::~CardTargetCursorAnim((CardTargetCursorAnim *)local_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((int)local_48,local_48 >> 0x20);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::OnInitialized() */

void CardTargetCursor::OnInitialized(void)

{
  bool bVar1;
  CardTargetCursor *in_x0;
  CardTargetCursorEffectMgr *pCVar2;
  CardObject *this;
  CardTargetCursorAnim *pCVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 in_s1;
  undefined8 local_50;
  undefined8 local_48;
  int local_40 [2];
  string asStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x40));
  if (bVar1) {
    (**(code **)(*(long *)in_x0 + 0x88))();
    pCVar2 = (CardTargetCursorEffectMgr *)
             Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
    bVar1 = (bool)FUN_03603bbc(in_x0[0x20]);
    CardTargetCursorEffectMgr::AddEffect(pCVar2,bVar1);
    uVar7 = (**(code **)(*(long *)in_x0 + 0x70))();
    this = (CardObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x40))
    ;
    pCVar3 = (CardTargetCursorAnim *)CardObject::GetCursorAnim(this);
    CardTargetCursorAnim::CardTargetCursorAnim((CardTargetCursorAnim *)local_40,pCVar3);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(in_x0 + 0x48));
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(in_x0 + 0x48));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48), bVar1)
    {
      lVar4 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      uVar5 = Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
      uVar6 = CreateAnimRig(in_x0,local_40[0],asStack_38);
      CardTargetCursorEffectMgr::AddAnim
                (*(undefined4 *)(lVar4 + 8),*(undefined4 *)(lVar4 + 0xc),uVar7,in_s1,uVar5,uVar6);
      std::move_iterator<Sexy::CharDataHashEntry*>::operator++
                ((move_iterator<Sexy::CharDataHashEntry*> *)&local_50);
    }
    pCVar2 = (CardTargetCursorEffectMgr *)
             Sexy::LazySingleton<CardTargetCursorEffectMgr>::GetInstance();
    CardTargetCursorEffectMgr::SetVisible(pCVar2,false);
    CardTargetCursorAnim::~CardTargetCursorAnim((CardTargetCursorAnim *)local_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::AddAnimRig(PopAnimRig*, Sexy::SexyVector2) */

void CardTargetCursor::AddAnimRig
               (undefined4 param_1_00,undefined4 param_2,long param_1,PopAnimRig *param_4)

{
  undefined8 local_28 [2];
  CursorAnimData aCStack_18 [16];
  long local_8;
  
  local_28[0] = CONCAT44(param_2,param_1_00);
  local_8 = ___stack_chk_guard;
  CursorAnimData::CursorAnimData(aCStack_18,param_4,(SexyVector2 *)local_28);
  std::vector<CursorAnimData,std::allocator<CursorAnimData>>::push_back
            ((vector<CursorAnimData,std::allocator<CursorAnimData>> *)(param_1 + 0x48),aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardTargetCursor::GenerateAnim() */

void __thiscall CardTargetCursor::GenerateAnim(CardTargetCursor *this)

{
  CardObject *this_00;
  CardTargetCursorAnim *pCVar1;
  ValueRange *this_01;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [2];
  string asStack_38 [8];
  int local_30;
  undefined8 local_28;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (CardObject *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  iVar3 = 0;
  pCVar1 = (CardTargetCursorAnim *)CardObject::GetCursorAnim(this_00);
  CardTargetCursorAnim::CardTargetCursorAnim((CardTargetCursorAnim *)local_40,pCVar1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_48,0.0,0.0);
  if (0 < local_30) {
    do {
      if (local_30 != 1) {
        this_01 = (ValueRange *)FUN_03603dbc(local_28);
        local_48 = ValueRange::GetRandomValue(this_01);
        local_44 = 0;
      }
      iVar3 = iVar3 + 1;
      uVar2 = CreateAnimRig(this,local_40[0],asStack_38);
      AddAnimRig(local_48,local_44,this,uVar2);
    } while (iVar3 < local_30);
  }
  CardTargetCursorAnim::~CardTargetCursorAnim((CardTargetCursorAnim *)local_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

