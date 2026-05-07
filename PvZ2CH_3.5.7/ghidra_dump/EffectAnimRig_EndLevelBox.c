// Class: EffectAnimRig_EndLevelBox


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::StaticClassInit() */

void EffectAnimRig_EndLevelBox::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"EffectAnimRig_EndLevelBox");
    (*pcVar2)(plVar1,asStack_10,FUN_03cbde40,0x298,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevelBox::StaticGetClass() */

long * EffectAnimRig_EndLevelBox::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_EndLevelBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_EndLevelBox::GetClass() const */

long * EffectAnimRig_EndLevelBox::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_EndLevelBox",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::adjustParentSize(int, int) */

void __thiscall
EffectAnimRig_EndLevelBox::adjustParentSize(EffectAnimRig_EndLevelBox *this,int param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  *(int *)(this + 0x214) = param_2;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x210) = param_1;
  Sexy::Point::Point(aPStack_20,param_1 / 2,param_2 / 2);
  uVar4 = *(undefined8 *)(this + 0x230);
  iVar1 = FUN_03cbd71c(uVar4,*(undefined8 *)(this + 0x238));
  if (0 < iVar1) {
    uVar5 = 0;
    while( true ) {
      plVar2 = (long *)FUN_03cbd728(uVar4,uVar5);
      lVar6 = *plVar2;
      Sexy::Point::Point(aPStack_18,(TPoint *)aPStack_20);
      uVar3 = uVar5 & 0xffffffff;
      uVar5 = uVar5 + 1;
      FUN_03cbdf20(&local_10,aPStack_18,iVar1,uVar3);
      *(undefined8 *)(lVar6 + 0x1c) = local_10;
      if (iVar1 <= (int)uVar5) break;
      uVar4 = *(undefined8 *)(this + 0x230);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::playBoxCome() */

void __thiscall EffectAnimRig_EndLevelBox::playBoxCome(EffectAnimRig_EndLevelBox *this)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"BOX_ON");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevelBox::onPopAnimCommand(float, std::string const&, std::string const&) */

void EffectAnimRig_EndLevelBox::onPopAnimCommand(float param_1,string *param_2,string *param_3)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_3,"window_getout");
  if ((bVar1) && (*(EffectAnimRig_EndLevel **)(param_2 + 0x290) != (EffectAnimRig_EndLevel *)0x0)) {
    EffectAnimRig_EndLevel::playWindowsOut(*(EffectAnimRig_EndLevel **)(param_2 + 0x290));
    return;
  }
  return;
}


/* EffectAnimRig_EndLevelBox::onAnimStopped() */

void __thiscall EffectAnimRig_EndLevelBox::onAnimStopped(EffectAnimRig_EndLevelBox *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = FUN_03cbd6d4(*(undefined8 *)(this + 0x20));
  bVar1 = std::operator==((string *)(lVar2 + 0x48),"box_in");
  if (!bVar1) {
    lVar2 = FUN_03cbd6d4(*(undefined8 *)(this + 0x20));
    bVar1 = std::operator==((string *)(lVar2 + 0x48),"box_out");
    if ((bVar1) && (*(EffectAnimRig_EndLevel **)(this + 0x290) != (EffectAnimRig_EndLevel *)0x0)) {
      EffectAnimRig_EndLevel::onBoxOutAnimStopped(*(EffectAnimRig_EndLevel **)(this + 0x290));
      return;
    }
  }
  return;
}


/* EffectAnimRig_EndLevelBox::GetCurrentLevel() */

void EffectAnimRig_EndLevelBox::GetCurrentLevel(void)

{
  bool bVar1;
  long in_x0;
  undefined8 uVar2;
  
  bVar1 = std::operator==("",(string *)(in_x0 + 0x228));
  if (((bVar1) && (gLawnApp != 0)) && (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0)) {
    uVar2 = Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    thunk_FUN_05475e00((string *)(in_x0 + 0x228),uVar2);
  }
  FUN_05475d88();
  return;
}


/* EffectAnimRig_EndLevelBox::onUpdate() */

void __thiscall EffectAnimRig_EndLevelBox::onUpdate(EffectAnimRig_EndLevelBox *this)

{
  float fVar1;
  float fVar2;
  
  if ((*(int *)(this + 0x218) == 1) &&
     (fVar2 = *(float *)(this + 0x21c), fVar1 = (float)PVZ_T(), fVar2 < fVar1)) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::showHardAward() */

void __thiscall EffectAnimRig_EndLevelBox::showHardAward(EffectAnimRig_EndLevelBox *this)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  CurveSegment<Sexy::SexyVector3> *pCVar5;
  undefined8 local_30;
  Vec3 aVStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x230));
  while( true ) {
    local_18[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x230));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_18);
    if (!bVar1) break;
    EATextSquish::Vec3::Vec3
              (aVStack_28,(float)(*(int *)(this + 0x210) / 2),(float)(*(int *)(this + 0x214) / 2),
               0.1);
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar3 = *plVar2;
    EATextSquish::Vec3::Vec3
              ((Vec3 *)local_18,(float)*(int *)(lVar3 + 0x1c),(float)*(int *)(lVar3 + 0x20),
               *(float *)(lVar3 + 0x18));
    fVar4 = (float)PVZ_T();
    *(float *)(this + 0x21c) = fVar4 + 0.2;
    plVar2 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    lVar3 = *plVar2;
    pCVar5._0_4_ = (CurveSegment<Sexy::SexyVector3> *)PVZ_T();
    CurveSegment<Sexy::SexyVector3>::Set
              (pCVar5._0_4_,*(undefined4 *)(this + 0x21c),lVar3 + 0x24,aVStack_28,(Vec3 *)local_18,2
              );
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  *(undefined4 *)(this + 0x218) = 1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox() */

void __thiscall
EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox(EffectAnimRig_EndLevelBox *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 *puVar2;
  pair<std::string_const,Sexy::PILifeValueTable> *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x230);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_0675e790;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_EndLevelBox_0675e8b0;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  while( true ) {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) break;
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    this_01 = (pair<std::string_const,Sexy::PILifeValueTable> *)*puVar2;
    if (this_01 != (pair<std::string_const,Sexy::PILifeValueTable> *)0x0) {
      std::pair<std::string_const,Sexy::PILifeValueTable>::~pair(this_01);
      AK::FreeHook(this_01);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<HardAwardItem*,std::allocator<HardAwardItem*>>::clear
            ((vector<HardAwardItem*,std::allocator<HardAwardItem*>> *)this_00);
  std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::~vector
            ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)(this + 0x278));
  std::vector<ELevelConfig,std::allocator<ELevelConfig>>::~vector
            ((vector<ELevelConfig,std::allocator<ELevelConfig>> *)(this + 0x260));
  std::vector<ESection,std::allocator<ESection>>::~vector
            ((vector<ESection,std::allocator<ESection>> *)(this + 0x248));
  std::vector<HardAwardItem*,std::allocator<HardAwardItem*>>::~vector
            ((vector<HardAwardItem*,std::allocator<HardAwardItem*>> *)this_00);
  std::string::~string((string *)(this + 0x228));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox() */

void __thiscall
EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox(EffectAnimRig_EndLevelBox *this)

{
  ~EffectAnimRig_EndLevelBox(this + -0x10);
  return;
}


/* EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox() */

void __thiscall
EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox(EffectAnimRig_EndLevelBox *this)

{
  ~EffectAnimRig_EndLevelBox(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox() */

void __thiscall
EffectAnimRig_EndLevelBox::~EffectAnimRig_EndLevelBox(EffectAnimRig_EndLevelBox *this)

{
  ~EffectAnimRig_EndLevelBox(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::onPostDraw(Sexy::Graphics*) */

void EffectAnimRig_EndLevelBox::onPostDraw(Graphics *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  Graphics *in_x1;
  Image *pIVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulong in_d1;
  float in_s2;
  float fVar12;
  float fVar13;
  undefined8 local_50;
  string asStack_48 [8];
  undefined1 auStack_40 [8];
  float local_38;
  float local_34;
  Insets aIStack_28 [16];
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (0 < *(int *)(param_1 + 0x218)) {
    lVar6 = FUN_03cbd6d8(*(undefined8 *)(param_1 + 0x20));
    fVar13 = *(float *)(lVar6 + 0x74);
    fVar12 = *(float *)(lVar6 + 0x80);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(param_1 + 0x230));
    while( true ) {
      local_18[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)(param_1 + 0x230));
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_18);
      if (!bVar2) break;
      plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
      fVar11 = (float)in_d1;
      lVar6 = *plVar7;
      fVar9 = in_s2;
      if (*(long *)(lVar6 + 0x10) != 0) {
        fVar9 = (float)PVZ_T();
        fVar10 = (float)CurveSegment<Sexy::SexyVector3>::GetValueAt
                                  ((CurveSegment<Sexy::SexyVector3> *)(lVar6 + 0x24),fVar9);
        fVar9 = in_s2;
        local_38 = fVar10;
        local_34 = fVar11;
        plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
        pIVar8 = *(Image **)(*plVar7 + 0x10);
        in_d1 = (ulong)(uint)((float)*(int *)(pIVar8 + 0x38) * in_s2);
        Sexy::Graphics::DrawImage
                  (in_x1,pIVar8,(int)(fVar13 + fVar10),(int)(fVar12 + fVar11),
                   (int)((float)*(int *)(pIVar8 + 0x38) * in_s2),
                   (int)((float)*(int *)(pIVar8 + 0x3c) * in_s2));
        if (*(int *)(param_1 + 0x218) == 2) {
          plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
          Sexy::StrFormat("X%d",asStack_48,(ulong)*(uint *)(*plVar7 + 0xc));
          Sexy::ToWString(asStack_48);
          plVar7 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
          lVar6 = *plVar7;
          iVar1 = *(int *)(lVar6 + 0x20);
          iVar3 = FUN_03cbdcc8(0x50);
          iVar4 = FUN_03cbdcc8(100);
          iVar5 = FUN_03cbdcc8(0x28);
          in_d1 = (ulong)(uint)(float)iVar3;
          Sexy::Insets::Insets
                    (aIStack_28,(int)((float)*(int *)(lVar6 + 0x1c) + fVar13),
                     (int)((float)iVar1 + fVar12 + (float)iVar3),iVar4,iVar5);
          PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_CafeteriaBlack_28_Outline);
          Sexy::Color::Color((Color *)local_18,1);
          WriteWordInRect();
          FUN_05476c50(auStack_40);
          std::string::~string(asStack_48);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
      in_s2 = fVar9;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::SetAwardImageAndScale(HardAwardItem const*, Sexy::Image*&, float&) */

void __thiscall
EffectAnimRig_EndLevelBox::SetAwardImageAndScale
          (EffectAnimRig_EndLevelBox *this,HardAwardItem *param_1,Image **param_2,float *param_3)

{
  undefined4 uVar1;
  PlantAccessoryMgr *this_00;
  string *psVar2;
  long lVar3;
  Image *pIVar4;
  char *pcVar5;
  undefined8 uVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  string asStack_48 [8];
  TGAAccumulatedLoginData aTStack_40 [24];
  string asStack_28 [32];
  long local_8;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_8 = ___stack_chk_guard;
  *param_2 = (Image *)0x0;
  switch(uVar1) {
  case 0:
    pcVar5 = "IMAGE_UI_PROFILE_SELECT_COIN_ICON";
    goto LAB_03cc00a8;
  case 1:
    pcVar5 = "IMAGE_UI_PROFILE_SELECT_GEM_ICON";
LAB_03cc00a8:
    std::string::string((string *)aTStack_40,pcVar5);
    pIVar4 = (Image *)StringHelper::ToImage((string *)aTStack_40,false);
    *param_2 = pIVar4;
    std::string::~string((string *)aTStack_40);
    nop();
    *param_3 = 2.0;
    break;
  case 2:
    pcVar5 = "key_";
    goto LAB_03cc01bc;
  case 3:
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
    FUN_05475ffc(asStack_48,lVar3 + 0x20,0xe,0xffffffffffffffff);
    uVar6 = FUN_0547429c(asStack_48);
    Sexy::StrFormat("%s%s",(string *)aTStack_40,"IMAGE_UI_PACKETS_",uVar6);
    pIVar4 = (Image *)StringHelper::ToImage((string *)aTStack_40,false);
    *param_2 = pIVar4;
    std::string::~string((string *)aTStack_40);
    std::string::~string(asStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    break;
  case 4:
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_40);
    pIVar4 = (Image *)StringHelper::ToImage((string *)(lVar3 + 0x60),false);
    *param_2 = pIVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_40);
    break;
  case 5:
    pcVar5 = "plant_piece_";
    goto LAB_03cc01bc;
  case 6:
    pcVar5 = "avatar_piece_";
LAB_03cc01bc:
    FUN_031f5e7c(asStack_48,pcVar5,param_1);
LAB_03cc0150:
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<CollectableType>>::GetInstancePtr();
    ObjectTypeDirectory<CollectableType>::GetTypeFromTypeName(psVar2);
    lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_40);
    pIVar4 = (Image *)StringHelper::ToImage((string *)(lVar3 + 0x60),false);
    *param_2 = pIVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aTStack_40);
    std::string::~string(asStack_48);
    break;
  case 7:
    this_00 = (PlantAccessoryMgr *)Sexy::LazySingleton<PlantAccessoryMgr>::GetInstance();
    PlantAccessoryMgr::GetAccessoryUIInfo(this_00,(string *)param_1);
    pIVar4 = (Image *)StringHelper::ToImage(asStack_28,false);
    *param_2 = pIVar4;
    TGAAccumulatedLoginData::~TGAAccumulatedLoginData(aTStack_40);
    break;
  case 8:
    std::operator+((string *)param_1,"_piece");
    goto LAB_03cc0150;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::getHardLevelAward() const */

void EffectAnimRig_EndLevelBox::getHardLevelAward(void)

{
  bool bVar1;
  long in_x0;
  undefined8 *puVar2;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  local_18 = FUN_03cbe804(*(undefined8 *)(in_x0 + 0x230));
  local_10 = FUN_03cbe854(*(undefined8 *)(in_x0 + 0x238));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    std::vector<HardAwardItem,std::allocator<HardAwardItem>>::push_back
              ((vector<HardAwardItem,std::allocator<HardAwardItem>> *)in_x8,(HardAwardItem *)*puVar2
              );
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::hardLevelAward(HardAwardItem const*) */

void EffectAnimRig_EndLevelBox::hardLevelAward(HardAwardItem *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  ProfileMgr *pPVar4;
  PlayerInfo *this;
  NameMapperBase *pNVar5;
  long lVar6;
  string *in_x1;
  string *in_x4;
  string *local_68;
  string asStack_40 [8];
  string asStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar4);
  Set8BytesTo0(asStack_40);
  switch(*(undefined4 *)(in_x1 + 8)) {
  case 0:
    PlayerInfo::AddCoins(this,*(int *)(in_x1 + 0xc));
    break;
  case 1:
    PakRecord::PakRecord((PakRecord *)&local_18);
    local_14 = *(undefined4 *)(in_x1 + 0xc);
    local_18 = 0xbc0;
    GetCurrentLevel();
    std::operator+(asStack_28,(string *)&DAT_06ad3b08);
    FUN_05474278(auStack_10,asStack_20);
    std::string::~string(asStack_20);
    std::string::~string(asStack_28);
    std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
              ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)(param_1 + 0x278),
               (NetworkCacheObjects *)&local_18);
    PakRecord::~PakRecord((PakRecord *)&local_18);
    break;
  case 2:
    PlayerInfo::AddKeys(this,in_x1,*(int *)(in_x1 + 0xc));
    break;
  case 3:
    FUN_05475d88(asStack_38);
    cVar1 = PlayerInfo::GetIsPlantUnlocked(this,asStack_38);
    if (cVar1 != '\0') {
      std::string::string(asStack_28,"iOS PvZ2 Plant Store");
      std::string::string(asStack_20,"Plant Pieces");
      std::string::string((string *)&local_18,"plant");
      Magento::FindStoreProduct
                ((Magento *)asStack_28,asStack_20,(string *)&local_18,asStack_38,in_x4);
      std::string::~string((string *)&local_18);
      nop();
      std::string::~string(asStack_20);
      nop();
      std::string::~string(asStack_28);
      nop();
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_30);
      if (bVar2) {
        pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
        cVar1 = NameMapperBase::ContainsName(pNVar5,asStack_38);
        if (cVar1 != '\0') {
          pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
LAB_03cc0bec:
          uVar3 = NameMapperBase::GetIdForName(pNVar5,asStack_38);
          PakRecord::PakRecord((PakRecord *)&local_18);
          local_18 = uVar3;
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
          local_14 = *(undefined4 *)(lVar6 + 0x90);
          GetCurrentLevel();
          std::operator+(asStack_28,(string *)&DAT_06ad3b08);
          FUN_05474278(auStack_10,asStack_20);
          std::string::~string(asStack_20);
          std::string::~string(asStack_28);
          std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
                    ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)
                     (param_1 + 0x278),(NetworkCacheObjects *)&local_18);
          PakRecord::~PakRecord((PakRecord *)&local_18);
        }
      }
      goto LAB_03cc0d38;
    }
    PlayerInfo::UnlockPlant(this,asStack_38,true);
    PlayerInfo::AddPlantStartLevel(this,asStack_38,0);
    goto LAB_03cc0d40;
  case 4:
    FUN_05475d88(asStack_38);
    cVar1 = PlayerInfo::IsPlantAvatarUnLocked(this);
    if (cVar1 == '\0') {
      PlayerInfo::UnlockPlantAvatar(this,asStack_38,0);
      PlayerInfo::SetPlantAvatar(this,asStack_38,0);
      goto LAB_03cc0d40;
    }
    std::string::string(asStack_28,"iOS PvZ2 Avatar Store");
    std::string::string(asStack_20,"Avatars");
    std::string::string((string *)&local_18,"avatar");
    Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,(string *)&local_18,asStack_38,in_x4)
    ;
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_30);
    if (bVar2) {
      pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsName(pNVar5,asStack_38);
      if (cVar1 != '\0') {
        pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
        goto LAB_03cc0bec;
      }
    }
    goto LAB_03cc0d38;
  case 5:
    FUN_05475d88(asStack_38);
    std::string::string(asStack_28,"iOS PvZ2 Plant Store");
    std::string::string(asStack_20,"Plant Pieces");
    std::string::string((string *)&local_18,"plant");
    Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,(string *)&local_18,asStack_38,in_x4)
    ;
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_30);
    if (bVar2) {
      pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsName(pNVar5,asStack_38);
      if (cVar1 != '\0') {
        pNVar5 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
LAB_03cc0e34:
        local_68 = asStack_20;
        uVar3 = NameMapperBase::GetIdForName(pNVar5,asStack_38);
        PakRecord::PakRecord((PakRecord *)&local_18);
        local_14 = *(undefined4 *)(in_x1 + 0xc);
        local_18 = uVar3;
        GetCurrentLevel();
        std::operator+(asStack_28,(string *)&DAT_06ad3b08);
        FUN_05474278(auStack_10,local_68);
        std::string::~string(local_68);
        std::string::~string(asStack_28);
        std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
                  ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)
                   (param_1 + 0x278),(NetworkCacheObjects *)&local_18);
        PakRecord::~PakRecord((PakRecord *)&local_18);
      }
    }
    goto LAB_03cc0d38;
  case 6:
    FUN_05475d88(asStack_38);
    std::string::string(asStack_28,"iOS PvZ2 Avatar Store");
    std::string::string(asStack_20,"Avatars");
    std::string::string((string *)&local_18,"avatar");
    Magento::FindStoreProduct((Magento *)asStack_28,asStack_20,(string *)&local_18,asStack_38,in_x4)
    ;
    std::string::~string((string *)&local_18);
    nop();
    std::string::~string(asStack_20);
    nop();
    std::string::~string(asStack_28);
    nop();
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)asStack_30);
    if (bVar2) {
      pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
      cVar1 = NameMapperBase::ContainsName(pNVar5,asStack_38);
      if (cVar1 != '\0') {
        pNVar5 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
        goto LAB_03cc0e34;
      }
    }
LAB_03cc0d38:
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_30);
LAB_03cc0d40:
    std::string::~string(asStack_38);
    break;
  case 7:
    FUN_05475d88(asStack_30);
    pNVar5 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsName(pNVar5,asStack_30);
    if (cVar1 != '\0') {
      pNVar5 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar5,asStack_30);
      PakRecord::PakRecord((PakRecord *)&local_18);
      local_14 = 1;
      local_18 = uVar3;
      GetCurrentLevel();
      std::operator+(asStack_28,(string *)&DAT_06ad3b08);
      FUN_05474278(auStack_10,asStack_20);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
                ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)
                 (param_1 + 0x278),(NetworkCacheObjects *)&local_18);
      PakRecord::~PakRecord((PakRecord *)&local_18);
    }
    goto LAB_03cc0858;
  case 8:
    FUN_05475d88(asStack_30);
    pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
    cVar1 = NameMapperBase::ContainsName(pNVar5,asStack_30);
    if (cVar1 != '\0') {
      pNVar5 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      uVar3 = NameMapperBase::GetIdForName(pNVar5,asStack_30);
      PakRecord::PakRecord((PakRecord *)&local_18);
      local_14 = *(undefined4 *)(in_x1 + 0xc);
      local_18 = uVar3;
      GetCurrentLevel();
      std::operator+(asStack_28,(string *)&DAT_06ad3b08);
      FUN_05474278(auStack_10,asStack_20);
      std::string::~string(asStack_20);
      std::string::~string(asStack_28);
      std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::push_back
                ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)
                 (param_1 + 0x278),(NetworkCacheObjects *)&local_18);
      PakRecord::~PakRecord((PakRecord *)&local_18);
    }
LAB_03cc0858:
    std::string::~string(asStack_30);
  }
  pPVar4 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  ProfileMgr::Save(pPVar4,false,false);
  std::string::~string(asStack_40);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::collectHardAward() */

void __thiscall EffectAnimRig_EndLevelBox::collectHardAward(EffectAnimRig_EndLevelBox *this)

{
  bool bVar1;
  NetworkMgr *this_00;
  NetworkCacheQueue *pNVar2;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x230));
  while( true ) {
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x230));
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    if (!bVar1) break;
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    hardLevelAward((HardAwardItem *)this);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  this_00 = (NetworkMgr *)NetworkMgr::Instance();
  NetworkMgr::GetNewNetWorkProcess(this_00);
  pNVar2 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue();
  std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::vector
            ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)local_20,
             (vector *)(this + 0x278));
  NetworkCacheQueue::insertCachedObject
            (pNVar2,(vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)local_20);
  std::vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>>::~vector
            ((vector<NetworkCacheObjects,std::allocator<NetworkCacheObjects>> *)local_20);
  INetworkMsgProcess::SaveCache();
  pNVar2 = (NetworkCacheQueue *)INetworkMsgProcess::GetNetworkCacheQueue();
  NetworkCacheQueue::flush(pNVar2);
  *(undefined4 *)(this + 0x218) = 0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::GetAwardBoxByRand(std::string const&, bool) */

void EffectAnimRig_EndLevelBox::GetAwardBoxByRand(string *param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  RtObject *this;
  EndLevelAward *pEVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  EBox *pEVar10;
  char in_w2;
  EBox *in_x8;
  int iVar11;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  EBox::EBox(in_x8);
  if (in_w2 == '\0') {
    RandRecord::reset((RandRecord *)&DAT_06ad39c0);
  }
  lVar3 = EndLevelAward::GetEndLevelConfig((string *)(ulong)param_2);
  if (lVar3 == 0) {
LAB_03cc18e4:
    if (local_8 == ___stack_chk_guard) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar2 = *(int *)(lVar3 + 8);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x61);
  while( true ) {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) goto joined_r0x03cc19f8;
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this = (RtObject *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pEVar5 = Sexy::RtObject::Cast<EndLevelAward>(this);
    if (pEVar5 != (EndLevelAward *)0x0) break;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,0);
  }
  uVar4 = *(undefined8 *)(pEVar5 + 8);
  lVar3 = 0;
  uVar6 = FUN_03cbd730(uVar4,*(undefined8 *)(pEVar5 + 0x10));
  if (((ulong)(long)iVar2 <= uVar6) && (iVar2 = iVar2 + -1, lVar3 = (long)iVar2, iVar2 < 0)) {
    lVar3 = 0;
  }
  iVar2 = 0;
  lVar7 = FUN_03cbd758(uVar4,lVar3);
  uVar4 = *(undefined8 *)(lVar7 + 8);
  lVar8 = FUN_03cbd760(uVar4,*(undefined8 *)(lVar7 + 0x10));
  lVar7 = 0;
  while (lVar7 + 1 != lVar8 + 1) {
    piVar9 = (int *)FUN_03cbd788(uVar4,lVar7);
    iVar2 = iVar2 + *piVar9;
    lVar7 = lVar7 + 1;
  }
  if (in_w2 == '\0') {
    iVar2 = RandRangeInt(0,iVar2 + -1);
    RandRecord::set((RandRecord *)&DAT_06ad39c0,iVar2);
  }
  else {
    iVar2 = RandRecord::get((RandRecord *)&DAT_06ad39c0);
  }
  iVar11 = 0;
  lVar3 = FUN_03cbd758(*(undefined8 *)(pEVar5 + 8),lVar3);
  uVar4 = *(undefined8 *)(lVar3 + 8);
  lVar7 = FUN_03cbd760(uVar4,*(undefined8 *)(lVar3 + 0x10));
  lVar3 = 0;
  do {
    if (lVar3 == lVar7) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      goto joined_r0x03cc19f8;
    }
    pEVar10 = (EBox *)FUN_03cbd788(uVar4,lVar3);
    iVar11 = iVar11 + *(int *)pEVar10;
    lVar3 = lVar3 + 1;
  } while (iVar11 <= iVar2);
  EBox::operator=(in_x8,pEVar10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
joined_r0x03cc19f8:
  if (in_w2 != '\0') {
    RandRecord::reset((RandRecord *)&DAT_06ad39c0);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  goto LAB_03cc18e4;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::initHardAwardItems(std::string const&, bool) */

void EffectAnimRig_EndLevelBox::initHardAwardItems(string *param_1,bool param_2)

{
  undefined4 uVar1;
  HardAwardItem *pHVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  HardAwardItem *local_30;
  EBox aEStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00(param_1 + 0x228);
  GetAwardBoxByRand(param_1,param_2);
  uVar6 = 0;
  while( true ) {
    uVar5 = FUN_03cbd6ec(local_20,local_18);
    if (uVar5 <= uVar6) break;
    pHVar2 = ::operator_new(0x48);
    HardAwardItem::HardAwardItem(pHVar2);
    local_30 = pHVar2;
    uVar3 = FUN_03cbd714(local_20,uVar6);
    thunk_FUN_05475e00(pHVar2,uVar3);
    pHVar2 = local_30;
    lVar4 = FUN_03cbd714(local_20,uVar6);
    uVar1 = *(undefined4 *)(lVar4 + 8);
    *(undefined4 *)(pHVar2 + 0xc) = *(undefined4 *)(lVar4 + 0xc);
    *(undefined4 *)(pHVar2 + 8) = uVar1;
    SetAwardImageAndScale
              ((EffectAnimRig_EndLevelBox *)param_1,pHVar2,(Image **)(pHVar2 + 0x10),
               (float *)(pHVar2 + 0x18));
    std::vector<HardAwardItem*,std::allocator<HardAwardItem*>>::push_back
              ((vector<HardAwardItem*,std::allocator<HardAwardItem*>> *)(param_1 + 0x230),&local_30)
    ;
    uVar6 = uVar6 + 1;
  }
  EBox::~EBox(aEStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevelBox::initHardAwardItems() */

void __thiscall EffectAnimRig_EndLevelBox::initHardAwardItems(EffectAnimRig_EndLevelBox *this)

{
  bool bVar1;
  
  if (*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) {
    bVar1 = (bool)Board::GetLevel(*(Board **)(gLawnApp + 0x9f0));
    initHardAwardItems((string *)this,bVar1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_EndLevelBox::EffectAnimRig_EndLevelBox() */

void __thiscall
EffectAnimRig_EndLevelBox::EffectAnimRig_EndLevelBox(EffectAnimRig_EndLevelBox *this)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = ___stack_chk_guard;
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined ***)this = &PTR_GetClass_0675e790;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_EndLevelBox_0675e8b0;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x21c) = uVar2;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x220));
  std::string::string((string *)(this + 0x228),"");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x230));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x248));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x260));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x278));
  *(undefined8 *)(this + 0x290) = 0;
  initHardAwardItems(this);
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_EndLevelBox::StaticNew() */

EffectAnimRig_EndLevelBox * EffectAnimRig_EndLevelBox::StaticNew(void)

{
  EffectAnimRig_EndLevelBox *this;
  
  this = ::operator_new(0x298);
  EffectAnimRig_EndLevelBox(this);
  return this;
}

