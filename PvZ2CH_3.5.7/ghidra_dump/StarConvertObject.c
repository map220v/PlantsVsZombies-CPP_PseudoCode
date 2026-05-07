// Class: StarConvertObject


/* StarConvertObject::Resize(Sexy::TRect<int> const&) */

void __thiscall StarConvertObject::Resize(StarConvertObject *this,TRect *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar3 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x138) = uVar1;
  *(undefined4 *)(this + 0x13c) = uVar2;
  *(undefined4 *)(this + 0x140) = uVar3;
  return;
}


/* StarConvertObject::Update() */

void __thiscall StarConvertObject::Update(StarConvertObject *this)

{
  char cVar1;
  long *plVar2;
  
  if (this[0x6c] == (StarConvertObject)0x0) {
    return;
  }
  cVar1 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
  if (cVar1 != '\0') {
    EffectAnim_UIAnim::OnUpdate((EffectAnim_UIAnim *)(this + 0x198));
  }
  plVar2 = *(long **)(this + 0x120);
  if (this[0xe0] == (StarConvertObject)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    return;
  }
  (**(code **)(*plVar2 + 0x158))(plVar2,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertObject::GetConvertObjectName() */

void StarConvertObject::GetConvertObjectName(void)

{
  bool bVar1;
  int iVar2;
  long in_x0;
  NameMapperBase *this;
  undefined1 auVar3 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [48];
  long local_8;
  
  iVar2 = *(int *)(in_x0 + 0x118);
  local_8 = ___stack_chk_guard;
  if (iVar2 == 0) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(in_x0 + 0x1e0));
    if (bVar1) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)(in_x0 + 0x1e0));
      Plant::GetFormattedNameString((Plant *)aRStack_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      goto LAB_04a6530c;
    }
  }
  else {
    if (iVar2 == 1) {
      auVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(in_x0 + 0x1d8));
      Sexy::UTF8StringToWString((Sexy *)(auVar3._0_8_ + 0x10),auVar3._8_8_);
      TodStringTranslate((wstring *)aRStack_38);
      FUN_05476c50((wstring *)aRStack_38);
      goto LAB_04a6530c;
    }
    if (iVar2 == 2) {
      this = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      iVar2 = NameMapperBase::GetIdForName(this,(string *)(in_x0 + 0xf8));
      GetGameItemInfo(iVar2,0x7fffffff,0);
      FUN_05477b24();
      GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)aRStack_38);
      goto LAB_04a6530c;
    }
  }
  FUN_05478178();
  nop();
LAB_04a6530c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* StarConvertObject::CheckEnableObtain() */

void __thiscall StarConvertObject::CheckEnableObtain(StarConvertObject *this)

{
  int iVar1;
  int iVar2;
  ProfileMgr *this_00;
  long lVar3;
  
  if (*(long *)(this + 0x120) != 0) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar3 = ProfileMgr::GetCurrentProfile(this_00);
    if ((lVar3 != 0) &&
       (iVar1 = *(int *)(this + 0xe8), iVar2 = PlayerInfo::GetNumStars((int)lVar3), iVar2 < iVar1))
    {
      (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),1);
      return;
    }
    (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),0);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertObject::Draw(Sexy::Graphics*) */

void __thiscall StarConvertObject::Draw(StarConvertObject *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  Image *pIVar12;
  LotteryResultProgressBar *pLVar13;
  SalesProgressBar *pSVar14;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x6c] == (StarConvertObject)0x0) goto LAB_04a66830;
  Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x138));
  uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d4a8);
  Draw9SliceImage(param_1,aIStack_18,uVar11);
  pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d390);
  Sexy::Graphics::DrawImage
            (param_1,pIVar12,*(int *)(this + 0x158),*(int *)(this + 0x15c),*(int *)(this + 0x160),
             *(int *)(this + 0x164));
  iVar1 = *(int *)(this + 0x118);
  if (iVar1 == 0) {
LAB_04a66bb0:
    cVar4 = EffectAnim_UIAnim::IsValid((EffectAnim_UIAnim *)(this + 0x198));
    if (cVar4 != '\0') {
      EffectAnim_UIAnim::OnDraw((EffectAnim_UIAnim *)(this + 0x198),param_1);
    }
  }
  else if (iVar1 == 1) {
    if (*(LotteryResultProgressBar **)(this + 0x1c8) != (LotteryResultProgressBar *)0x0) {
      iVar1 = *(int *)(this + 0x158);
      iVar2 = *(int *)(this + 0x160);
      iVar6 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x1c8));
      iVar10 = *(int *)(this + 0x15c);
      iVar5 = *(int *)(this + 0x164);
      iVar7 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0x1c8));
      iVar8 = LotteryResultProgressBar::GetCurrentLevel
                        (*(LotteryResultProgressBar **)(this + 0x1c8));
      pSVar14 = *(SalesProgressBar **)(this + 0x1c8);
      iVar9 = SalesProgressBar::GetCurrentLevel(pSVar14);
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pSVar14,
                 (int)((double)iVar1 + ((double)iVar2 - (double)iVar6 * 0.8) * 0.5),
                 (int)((double)iVar10 + ((double)iVar5 - (double)iVar7 * 0.8) * 0.5),
                 (int)((double)iVar8 * 0.8),(int)((double)iVar9 * 0.8));
    }
  }
  else if (iVar1 == 2) goto LAB_04a66bb0;
  if (*(Image **)(this + 0x1d0) != (Image *)0x0) {
    Sexy::Graphics::DrawImage
              (param_1,*(Image **)(this + 0x1d0),*(int *)(this + 0x168),*(int *)(this + 0x16c),
               *(int *)(this + 0x170),*(int *)(this + 0x174));
  }
  bVar3 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06b7d3b8);
  if (bVar3) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d3b8);
    Sexy::Graphics::DrawImage
              (param_1,pIVar12,*(int *)(this + 0x178),*(int *)(this + 0x17c),*(int *)(this + 0x180),
               *(int *)(this + 0x184));
  }
  bVar3 = CachedUIResourcePtr::operator_cast_to_bool((CachedUIResourcePtr *)&DAT_06b7d670);
  if (bVar3) {
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
    iVar1 = *(int *)(this + 0x178);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
    iVar10 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    iVar2 = *(int *)(this + 0x17c);
    pLVar13 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar13);
    pSVar14 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar14);
    Sexy::Graphics::DrawImage
              (param_1,pIVar12,(int)((double)iVar1 + (double)iVar10 * 0.6),iVar2,
               (int)((double)iVar5 * 0.6),(int)((double)iVar6 * 0.6));
  }
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x130,this + 0x188,uVar11,aIStack_18,5,1);
  uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_19_Outline);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,this + 0x128,this + 0x148,uVar11,aIStack_18,5,1);
  if (this[0xe0] != (StarConvertObject)0x0) {
    Sexy::Insets::Insets
              (aIStack_18,*(int *)(this + 0x138),*(int *)(this + 0x13c),*(int *)(this + 0x140),
               *(int *)(this + 0x144));
    uVar11 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d3f0);
    Draw9SliceImage(param_1,aIStack_18,uVar11);
    pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d5c0);
    iVar5 = FUN_04a64e50(5);
    iVar1 = *(int *)(this + 0x164);
    iVar2 = *(int *)(this + 0x158);
    iVar10 = *(int *)(this + 0x15c);
    iVar6 = FUN_04a64e50(0x14);
    iVar7 = FUN_04a64e50(0x28);
    Sexy::Graphics::DrawImage
              (param_1,pIVar12,iVar5 + iVar2,(iVar10 + iVar1 / 2) - iVar6,iVar7,iVar7);
    TodStringTranslate(L"[PLANT_OBTAINED]");
    iVar5 = FUN_04a64e50(0x2d);
    iVar1 = *(int *)(this + 0x164);
    iVar2 = *(int *)(this + 0x158);
    iVar10 = *(int *)(this + 0x15c);
    iVar6 = FUN_04a64e50(0x14);
    iVar7 = FUN_04a64e50(0x96);
    iVar8 = FUN_04a64e50(0x28);
    Sexy::Insets::Insets(aIStack_28,iVar5 + iVar2,(iVar10 + iVar1 / 2) - iVar6,iVar7,iVar8);
    uVar11 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_24_HardShadow);
    Sexy::Color::Color((Color *)aIStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar11,aIStack_18,3,1);
    FUN_05476c50(auStack_30);
  }
LAB_04a66830:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertObject::OnRefreshStarConvert() */

void __thiscall StarConvertObject::OnRefreshStarConvert(StarConvertObject *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x100));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x100));
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1)
    {
      puVar4 = (undefined4 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
      ;
      iVar3 = puVar4[1];
      *(undefined4 *)(this + 0xe8) = *puVar4;
      *(int *)(this + 0xe4) = iVar3;
      if (iVar3 == 1) {
        cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,(string *)(this + 0xf8));
        if (cVar2 == '\0') {
LAB_04a66d6c:
          this[0xe0] = (StarConvertObject)0x0;
          break;
        }
      }
      else {
        iVar3 = PlayerInfo::GetPlantStarLevel(this_01,(string *)(this + 0xf8),false);
        if (iVar3 < *(int *)(this + 0xe4)) goto LAB_04a66d6c;
      }
      this[0xe0] = (StarConvertObject)0x1;
      __gnu_cxx::
      __normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
      ::operator++((__normal_iterator<Sexy::PIValuePoint2D_const*,std::vector<Sexy::PIValuePoint2D,std::allocator<Sexy::PIValuePoint2D>>>
                    *)&local_18);
    }
    CheckEnableObtain(this);
    Sexy::StrFormat(L"%d",(__normal_iterator *)&local_10,(ulong)*(uint *)(this + 0xe8));
    FUN_054766c8(this + 0x130,(__normal_iterator *)&local_10);
    FUN_05476c50((__normal_iterator *)&local_10);
    switch(*(undefined4 *)(this + 0xe4)) {
    case 2:
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2c8);
      *(undefined8 *)(this + 0x1d0) = uVar5;
      break;
    case 3:
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d368);
      *(undefined8 *)(this + 0x1d0) = uVar5;
      break;
    case 4:
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d5e8);
      *(undefined8 *)(this + 0x1d0) = uVar5;
      break;
    case 5:
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d468);
      *(undefined8 *)(this + 0x1d0) = uVar5;
      break;
    default:
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d248);
      *(undefined8 *)(this + 0x1d0) = uVar5;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StarConvertObject::~StarConvertObject() */

void __thiscall StarConvertObject::~StarConvertObject(StarConvertObject *this)

{
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06937c68;
  *(undefined ***)this = &PTR_GetClass_06937940;
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  EffectAnim_UIAnim::~EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  FUN_05476c50(this + 0x130);
  FUN_05476c50(this + 0x128);
  ConvertObject::~ConvertObject((ConvertObject *)(this + 0xf0));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* StarConvertObject::~StarConvertObject() */

void __thiscall StarConvertObject::~StarConvertObject(StarConvertObject *this)

{
  ~StarConvertObject(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertObject::StarConvertObject(ConvertObject) */

void __thiscall StarConvertObject::StarConvertObject(StarConvertObject *this,ConvertObject *param_2)

{
  ConvertObject *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *this_01;
  uint uVar1;
  LawnApp *pLVar2;
  bool bVar3;
  char cVar4;
  StarConvertObject SVar5;
  int iVar6;
  ProfileMgr *this_02;
  PlayerInfo *pPVar7;
  string *psVar8;
  undefined4 *puVar9;
  NameMapperBase *pNVar10;
  long lVar11;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (ConvertObject *)(this + 0xf0);
  this_01 = (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  Sexy::ButtonListener::ButtonListener((ButtonListener *)(this + 0xd8));
  *(undefined ***)this = &PTR_GetClass_06937940;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06937c68;
  ConvertObject::ConvertObject(this_00,param_2);
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  FUN_05476574(this + 0x128);
  FUN_05476574(this + 0x130);
  Sexy::Insets::Insets((Insets *)(this + 0x138));
  Sexy::Insets::Insets((Insets *)(this + 0x148));
  Sexy::Insets::Insets((Insets *)(this + 0x158));
  Sexy::Insets::Insets((Insets *)(this + 0x168));
  Sexy::Insets::Insets((Insets *)(this + 0x178));
  Sexy::Insets::Insets((Insets *)(this + 0x188));
  EffectAnim_UIAnim::EffectAnim_UIAnim((EffectAnim_UIAnim *)(this + 0x198));
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(this_01)
  ;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  *(undefined4 *)(this + 0xec) = 0xffffffff;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  bVar3 = std::operator==("Plant",(string *)this_00);
  if (bVar3) {
    *(undefined4 *)(this + 0x118) = 0;
  }
  else {
    bVar3 = std::operator==("Feature",(string *)this_00);
    if (bVar3) {
      *(undefined4 *)(this + 0x118) = 1;
    }
    else {
      bVar3 = std::operator==("Avatar",(string *)this_00);
      if (bVar3) {
        *(undefined4 *)(this + 0x118) = 2;
      }
    }
  }
  this_02 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar7 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_02);
  if (pPVar7 != (PlayerInfo *)0x0) {
    iVar6 = *(int *)(this + 0x118);
    if (iVar6 == 0) {
      pNVar10 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      cVar4 = NameMapperBase::ContainsName(pNVar10,(string *)(this + 0xf8));
      if (cVar4 != '\0') {
        pNVar10 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
        iVar6 = NameMapperBase::GetIdForName(pNVar10,(string *)(this + 0xf8));
        this[0xe0] = (StarConvertObject)0x0;
        *(int *)(this + 0xec) = iVar6 + 20000;
        psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
        ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        OnRefreshStarConvert(this);
        goto LAB_04a67e38;
      }
      iVar6 = *(int *)(this + 0x118);
    }
    if (iVar6 == 1) {
      *(undefined4 *)(this + 0xe4) = 0;
      puVar9 = (undefined4 *)FUN_04a64d08(*(undefined8 *)(this + 0x100));
      *(undefined4 *)(this + 0xe8) = *puVar9;
      FUN_05475d88((string *)aRStack_10,this + 0xf8);
      GameFeatureType::GetGameFeatureTypeFromUnlockString
                ((GameFeatureType *)aRStack_18,(string *)aRStack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)aRStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      std::string::~string((string *)aRStack_10);
      pLVar2 = gLawnApp;
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      SVar5 = (StarConvertObject)
              LawnApp::HasPlayerUnlockedFeature(pLVar2,*(undefined4 *)(lVar11 + 0x30));
      this[0xe0] = SVar5;
      lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
      uVar1 = *(uint *)(this + 0xe8);
      *(int *)(this + 0xec) = *(int *)(lVar11 + 0x30) + 10000;
    }
    else {
      if (iVar6 != 2) goto LAB_04a67e38;
      *(undefined4 *)(this + 0xe4) = 0;
      puVar9 = (undefined4 *)FUN_04a64d08(*(undefined8 *)(this + 0x100));
      *(undefined4 *)(this + 0xe8) = *puVar9;
      pNVar10 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      iVar6 = NameMapperBase::GetIdForName(pNVar10,(string *)(this + 0xf8));
      *(int *)(this + 0xec) = iVar6 + 30000;
      SVar5 = (StarConvertObject)
              PlayerInfo::IsPlantAvatarUnLocked(pPVar7,(string *)(this + 0xf8),0,0);
      this[0xe0] = SVar5;
      uVar1 = *(uint *)(this + 0xe8);
    }
    Sexy::StrFormat(L"%d",aRStack_10,(ulong)uVar1);
    FUN_054766c8(this + 0x130,aRStack_10);
    FUN_05476c50(aRStack_10);
  }
LAB_04a67e38:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertObject::InitView() */

void __thiscall StarConvertObject::InitView(StarConvertObject *this)

{
  EffectAnim_UIAnim *pEVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  LotteryResultProgressBar *pLVar9;
  SalesProgressBar *pSVar10;
  PVZ2UIButton *pPVar11;
  string *psVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 local_88;
  undefined4 local_84;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_40;
  undefined8 local_38;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_04a64e50(10);
  iVar2 = *(int *)(this + 0x13c);
  iVar5 = FUN_04a64e50(5);
  iVar6 = FUN_04a64e50(2);
  iVar8 = *(int *)(this + 0x140);
  iVar7 = FUN_04a64e50(0x28);
  Sexy::Insets::Insets
            ((Insets *)&local_40,*(int *)(this + 0x138),(iVar2 + iVar4 / 2) - iVar5,iVar8 - iVar6,
             iVar7);
  *(undefined8 *)(this + 0x148) = local_40;
  *(undefined8 *)(this + 0x150) = local_38;
  GetConvertObjectName();
  FUN_054766c8(this + 0x128,(Insets *)&local_40);
  FUN_05476c50((Insets *)&local_40);
  iVar4 = FUN_04a64e50(10);
  iVar2 = *(int *)(this + 0x138);
  iVar5 = FUN_04a64e50(0x23);
  iVar8 = *(int *)(this + 0x13c);
  iVar6 = FUN_04a64e50(0x7d);
  iVar7 = FUN_04a64e50(0x69);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4 + iVar2,iVar5 + iVar8,iVar6,iVar7);
  *(undefined8 *)(this + 0x158) = local_40;
  *(undefined8 *)(this + 0x160) = local_38;
  iVar4 = FUN_04a64e50(2);
  iVar2 = *(int *)(this + 0x158);
  iVar8 = *(int *)(this + 0x15c);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d248);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d248);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4 + iVar2,iVar4 + iVar8,iVar5,iVar6);
  iVar2 = *(int *)(this + 0x15c);
  iVar8 = *(int *)(this + 0x164);
  iVar4 = *(int *)(this + 0x158);
  *(undefined8 *)(this + 0x168) = local_40;
  *(undefined8 *)(this + 0x170) = local_38;
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d3b8);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar10);
  iVar5 = *(int *)(this + 0x160);
  pSVar10 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d3b8);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar10);
  Sexy::Insets::Insets((Insets *)&local_40,iVar4,(iVar2 + iVar8) - iVar6,iVar5,iVar7);
  *(undefined8 *)(this + 0x180) = local_38;
  iVar6 = (int)local_40;
  *(undefined8 *)(this + 0x178) = local_40;
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  iVar2 = *(int *)(this + 0x180);
  iVar8 = *(int *)(this + 0x17c);
  pLVar9 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d670);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar9);
  Sexy::Insets::Insets
            ((Insets *)&local_40,(int)((float)iVar6 + (float)iVar4 * 0.6),iVar8,
             (int)((float)iVar2 - (float)iVar5 * 0.6),*(int *)(this + 0x184));
  iVar2 = *(int *)(this + 0x118);
  *(undefined8 *)(this + 0x188) = local_40;
  *(undefined8 *)(this + 400) = local_38;
  this[0x59] = (StarConvertObject)0x0;
  if (iVar2 == 0) {
    pEVar1 = (EffectAnim_UIAnim *)(this + 0x198);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_78,(float)(*(int *)(this + 0x158) + *(int *)(this + 0x160) / 2),
               (float)(*(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2));
    FUN_05475d88((Insets *)&local_40,this + 0xf8);
    EffectAnim_UIAnim::InitPlantUIAnim(0x3f70a3d7,local_78,local_74,pEVar1,(Insets *)&local_40,1);
    std::string::~string((string *)&local_40);
    cVar3 = EffectAnim_UIAnim::IsValid(pEVar1);
    if (cVar3 != '\0') {
      EffectAnim_UIAnim::HideAvatarLayer(pEVar1);
      EffectAnim_UIAnim::PlayIdleLoop(pEVar1);
    }
  }
  else if (iVar2 == 1) {
    lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
    uVar14 = StringHelper::ToImage((string *)(lVar13 + 0x20),false);
    *(undefined8 *)(this + 0x1c8) = uVar14;
  }
  else if (iVar2 == 2) {
    pEVar1 = (EffectAnim_UIAnim *)(this + 0x198);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_88,(float)(*(int *)(this + 0x158) + *(int *)(this + 0x160) / 2),
               (float)(*(int *)(this + 0x15c) + *(int *)(this + 0x164) / 2));
    FUN_05475d88((Insets *)&local_40,this + 0xf8);
    EffectAnim_UIAnim::InitPlantUIAnim(0x3f70a3d7,local_88,local_84,pEVar1,(Insets *)&local_40,1);
    std::string::~string((string *)&local_40);
    cVar3 = EffectAnim_UIAnim::IsValid(pEVar1);
    if (cVar3 != '\0') {
      EffectAnim_UIAnim::HideAvatarLayer(pEVar1);
      EffectAnim_UIAnim::PlayIdleLoop(pEVar1);
      psVar12 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar12);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_40);
      lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
      lVar13 = FUN_04a64bbc(*(undefined8 *)(lVar13 + 0x50),*(undefined8 *)(lVar13 + 0x58));
      if (lVar13 != 0) {
        lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
        piVar16 = (int *)FUN_04a64d0c(*(undefined8 *)(lVar13 + 0x50));
        if (*piVar16 == 0) {
          uVar18 = 0;
          while( true ) {
            lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
            lVar13 = FUN_04a64d0c(*(undefined8 *)(lVar13 + 0x50));
            uVar15 = FUN_04a64bd0(*(undefined8 *)(lVar13 + 8),*(undefined8 *)(lVar13 + 0x10));
            if (uVar15 <= uVar18) break;
            lVar13 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
            lVar13 = FUN_04a64d0c(*(undefined8 *)(lVar13 + 0x50));
            psVar12 = (string *)FUN_04a64bb4(*(undefined8 *)(lVar13 + 8),uVar18);
            std::vector<std::string,std::allocator<std::string>>::push_back
                      ((vector<std::string,std::allocator<std::string>> *)&local_40,psVar12);
            uVar18 = uVar18 + 1;
          }
        }
      }
      uVar18 = 0;
      while( true ) {
        uVar14 = local_40;
        uVar15 = FUN_04a64bd0(local_40,local_38);
        if (uVar15 <= uVar18) break;
        uVar14 = FUN_04a64bdc(uVar14,uVar18);
        FUN_05475d88((string *)&local_78,uVar14);
        EffectAnim_UIAnim::ShowLayer(pEVar1,(string *)&local_78);
        std::string::~string((string *)&local_78);
        uVar18 = uVar18 + 1;
      }
      std::vector<std::string,std::allocator<std::string>>::~vector
                ((vector<std::string,std::allocator<std::string>> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
    }
  }
  TodStringTranslate(L"[PLANT_OBTAIN]");
  Sexy::Color::Color((Color *)&local_40,1);
  pPVar11 = ::operator_new(0x300);
  PVZ2UIButton::PVZ2UIButton
            (pPVar11,*(int *)(this + 0xec),(ButtonListener *)(this + 0xd8),(wstring *)&local_78,
             (Color *)&local_40);
  *(PVZ2UIButton **)(this + 0x120) = pPVar11;
  FUN_05476c50((PVZ2UIImage *)&local_78);
  pPVar11 = *(PVZ2UIButton **)(this + 0x120);
  if (pPVar11 != (PVZ2UIButton *)0x0) {
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_78,&DAT_06b7d548,3);
    PVZ2UIImage::PVZ2UIImage((PVZ2UIImage *)&local_40,&DAT_06b7d698,3);
    PVZ2UIButton::SetDialogStates(pPVar11,(PVZ2UIImage *)&local_78,(PVZ2UIImage *)&local_40);
    iVar8 = FUN_04a64e50(0x7d);
    pSVar10 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7d2a0);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar10);
    iVar5 = FUN_04a64e50(0x7d);
    iVar2 = *(int *)(this + 0x138);
    iVar6 = FUN_04a64e50(0x96);
    (**(code **)(**(long **)(this + 0x120) + 0x198))
              (*(long **)(this + 0x120),(iVar5 + iVar2) - (int)((double)iVar8 * 0.8),
               iVar6 + *(int *)(this + 0x13c),(int)((double)iVar8 * 0.8),(int)((double)iVar4 * 0.8))
    ;
    plVar17 = *(long **)(this + 0x120);
    *(undefined1 *)((long)plVar17 + 0x59) = 0;
    (**(code **)(*plVar17 + 0x158))(plVar17,1);
    (**(code **)(**(long **)(this + 0x120) + 0x188))(*(long **)(this + 0x120),0);
    (**(code **)(*(long *)this + 0x60))(this,*(undefined8 *)(this + 0x120));
  }
  CheckEnableObtain(this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* StarConvertObject::OnStarConverted(bool) */

void __thiscall StarConvertObject::OnStarConverted(StarConvertObject *this,bool param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  TGALogMgr *this_02;
  char *__s;
  PVZ2UIDialog *pPVar5;
  long lVar6;
  NameMapperBase *pNVar7;
  NetworkItemMgr *pNVar8;
  StarConvert *pSVar9;
  undefined1 auStack_80 [8];
  string asStack_78 [8];
  DString aDStack_70 [16];
  vector<std::string,std::allocator<std::string>> avStack_60 [40];
  string asStack_38 [8];
  string asStack_30 [40];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  cVar2 = LawnApp::IsStarConvertIValid(gLawnApp);
  if (cVar2 != '\0') {
    pSVar9 = (StarConvert *)LawnApp::GetStarConvert(pLVar1);
    StarConvert::SetActivedObject(pSVar9,(StarConvertObject *)0x0);
  }
  pLVar1 = gLawnApp;
  if (!param_1) {
    FUN_05478178((wstring *)aDStack_70,L"[NETWORK_NOT_CONNECTED_TITLE]",auStack_80);
    FUN_05478178((wstring *)avStack_60,L"[NETWORK_NOT_CONNECTED_TEXT]",asStack_78);
    pPVar5 = (PVZ2UIDialog *)
             LawnApp::ShowPVZ2Dialog(pLVar1,(wstring *)aDStack_70,(wstring *)avStack_60);
    FUN_05476c50((wstring *)avStack_60);
    nop();
    FUN_05476c50((wstring *)aDStack_70);
    nop();
    FUN_05478178((wstring *)aDStack_70,L"[DIALOG_STRING_OK]",asStack_78);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)gLawnApp,LawnApp::KillPVZ2Dialog);
    Sexy::Delegate0::Delegate0<LawnApp,void(LawnApp::*)()>
              ((Delegate0 *)asStack_38,(wstring *)avStack_60);
    PVZ2UIDialog::AddButton(pPVar5,(wstring *)aDStack_70,(Delegate0 *)asStack_38,0);
    FUN_05476c50((wstring *)aDStack_70);
    nop();
    MessageRouter::Broadcast<bool,bool>
              ((MessageRouter *)gMessageRouter,Message::NotifyStarConverted,param_1);
    goto LAB_04a6b014;
  }
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 == (PlayerInfo *)0x0) goto LAB_04a6b014;
  iVar4 = *(int *)(this + 0x118);
  if (iVar4 == 0) {
    FUN_05475d88(asStack_78,this + 0xf8);
    cVar2 = PlayerInfo::GetIsPlantUnlocked(this_01,asStack_78);
    if (cVar2 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_60);
      pNVar7 = (NameMapperBase *)PlantNameMapperServerID::GetInstance();
      iVar4 = NameMapperBase::GetIdForName(pNVar7,asStack_78);
      NetworkItemInfo::NetworkItemInfo((NetworkItemInfo *)aDStack_70,iVar4,1);
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_60,
                 (NetworkItemInfo *)aDStack_70);
      pNVar8 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      NetworkItemMgr::NetworkAddPlantPieceCount(pNVar8,(vector *)avStack_60);
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_60);
    }
    iVar4 = *(int *)(this + 0xe4);
    if ((1 < iVar4) &&
       (iVar3 = PlayerInfo::GetPlantStarLevel(this_01,asStack_78,false), iVar3 < iVar4)) {
      PlayerInfo::SetPlantStarLevel(this_01,asStack_78,*(int *)(this + 0xe4),false,true);
    }
    pLVar1 = gLawnApp;
    cVar2 = LawnApp::IsStarConvertIValid(gLawnApp);
    if (cVar2 != '\0') {
      pSVar9 = (StarConvert *)LawnApp::GetStarConvert(pLVar1);
      ConvertObject::ConvertObject((ConvertObject *)avStack_60,(ConvertObject *)(this + 0xf0));
      GetConvertObjectName();
      StarConvert::ShowConvertBox
                (pSVar9,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_60,
                 (NetworkItemInfo *)aDStack_70,*(undefined4 *)(this + 0xe4));
      FUN_05476c50((NetworkItemInfo *)aDStack_70);
      ConvertObject::~ConvertObject((ConvertObject *)avStack_60);
    }
    OnRefreshStarConvert(this);
    std::string::~string(asStack_78);
  }
  else if (iVar4 == 1) {
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
    PlayerInfo::UnlockGameFeature(this_01,*(undefined4 *)(lVar6 + 0x30));
    this[0xe0] = (StarConvertObject)0x1;
    pLVar1 = gLawnApp;
    cVar2 = LawnApp::IsStarConvertIValid(gLawnApp);
    if (cVar2 != '\0') {
      pSVar9 = (StarConvert *)LawnApp::GetStarConvert(pLVar1);
LAB_04a6b24c:
      ConvertObject::ConvertObject((ConvertObject *)avStack_60,(ConvertObject *)(this + 0xf0));
      GetConvertObjectName();
      StarConvert::ShowConvertBox(pSVar9,(ConvertObject *)avStack_60,aDStack_70,0);
      FUN_05476c50(aDStack_70);
      ConvertObject::~ConvertObject((ConvertObject *)avStack_60);
    }
  }
  else if (iVar4 == 2) {
    cVar2 = PlayerInfo::IsPlantAvatarUnLocked(this_01,(string *)(this + 0xf8),0,0);
    if (cVar2 == '\0') {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)avStack_60);
      pNVar7 = (NameMapperBase *)AvatarNameMapperServerID::GetInstance();
      iVar4 = NameMapperBase::GetIdForName(pNVar7,(string *)(this + 0xf8));
      NetworkItemInfo::NetworkItemInfo((NetworkItemInfo *)aDStack_70,iVar4,1);
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::push_back
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_60,
                 (NetworkItemInfo *)aDStack_70);
      pNVar8 = (NetworkItemMgr *)Sexy::LazySingleton<NetworkItemMgr>::GetInstance();
      NetworkItemMgr::NetworkAddPlantPieceCount(pNVar8,(vector *)avStack_60);
      this[0xe0] = (StarConvertObject)0x1;
      std::vector<NetworkItemInfo,std::allocator<NetworkItemInfo>>::~vector
                ((vector<NetworkItemInfo,std::allocator<NetworkItemInfo>> *)avStack_60);
    }
    pLVar1 = gLawnApp;
    cVar2 = LawnApp::IsStarConvertIValid(gLawnApp);
    if (cVar2 != '\0') {
      pSVar9 = (StarConvert *)LawnApp::GetStarConvert(pLVar1);
      goto LAB_04a6b24c;
    }
  }
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  std::string::string(asStack_78,"10004");
  FUN_05475d88(asStack_38,this + 0xf8);
  DString::DString(aDStack_70,*(int *)(this + 0xe8));
  __s = (char *)DString::c_str(aDStack_70);
  std::string::string(asStack_30,__s);
  std::vector<std::string,std::allocator<std::string>>::vector(avStack_60,asStack_38,2,auStack_80);
  TGALogMgr::Log(this_02,asStack_78,(vector *)avStack_60);
  std::vector<std::string,std::allocator<std::string>>::~vector(avStack_60);
  std::string::~string(asStack_30);
  std::string::~string(asStack_38);
  nop();
  DString::~DString(aDStack_70);
  std::string::~string(asStack_78);
  nop();
  MessageRouter::Post((_func_void *)gMessageRouter);
  MessageRouter::Broadcast<bool,bool>
            ((MessageRouter *)gMessageRouter,Message::NotifyStarConverted,param_1);
LAB_04a6b014:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* StarConvertObject::ButtonDepress(int) */

void __thiscall StarConvertObject::ButtonDepress(StarConvertObject *this,int param_1)

{
  LawnApp *this_00;
  char cVar1;
  ProfileMgr *this_01;
  long lVar2;
  NetworkMgr *this_02;
  long *plVar3;
  StarConvert *this_03;
  
  if (*(int *)(this + 0xec) == param_1) {
    LawnApp::KillGameMaskUI(gLawnApp);
    this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    lVar2 = ProfileMgr::GetCurrentProfile(this_01);
    this_00 = gLawnApp;
    if (lVar2 != 0) {
      if (*(int *)(this + 0x118) == 0) {
        if (*(int *)(this + 0xe4) < 2) {
LAB_04a6b470:
          OnStarConverted(this,true);
          return;
        }
        cVar1 = LawnApp::IsStarConvertIValid(gLawnApp);
        if (cVar1 != '\0') {
          this_03 = (StarConvert *)LawnApp::GetStarConvert(this_00);
          StarConvert::SetActivedObject(this_03,this);
        }
        this_02 = (NetworkMgr *)NetworkMgr::Instance();
        plVar3 = (long *)NetworkMgr::GetNewNetWorkProcess(this_02);
        (**(code **)(*plVar3 + 0x138))
                  (plVar3,*(int *)(this + 0xec) + -20000,0,*(undefined4 *)(this + 0xe4));
      }
      else if (*(int *)(this + 0x118) - 1U < 2) goto LAB_04a6b470;
    }
  }
  return;
}


/* non-virtual thunk to StarConvertObject::ButtonDepress(int) */

void __thiscall StarConvertObject::ButtonDepress(StarConvertObject *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

