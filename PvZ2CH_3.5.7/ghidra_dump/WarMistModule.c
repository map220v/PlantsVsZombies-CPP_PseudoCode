// Class: WarMistModule


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::GetWarMistModule(int, int) */

void __thiscall WarMistModule::GetWarMistModule(WarMistModule *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_20;
  undefined8 local_18;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2) {
    lVar3 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
    Sexy::Point::Point(aPStack_10,param_1,param_2);
    cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)(lVar3 + 0x28),(TPoint *)aPStack_10);
    if (cVar1 != '\0') goto LAB_034cddb4;
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_20);
  }
  lVar3 = 0;
LAB_034cddb4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar3);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::AddEmptyRect(Sexy::Point&) */

void __thiscall WarMistModule::AddEmptyRect(WarMistModule *this,Point *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  TPoint<int> *this_01;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_01 = (TPoint<int> *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18)
    ;
    cVar1 = Sexy::TPoint<int>::operator==(this_01,(TPoint *)param_1);
    if (cVar1 != '\0') goto LAB_034e5cc8;
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)this_00,param_1);
LAB_034e5cc8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::CheckTorchWoodEffect(BoardEntity*) */

void __thiscall WarMistModule::CheckTorchWoodEffect(WarMistModule *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  iVar1 = BoardTransforms::BoardSpaceToGridX(*pfVar3);
  iVar2 = BoardTransforms::BoardSpaceToGridY(pfVar3[1]);
  Sexy::Point::Point(aPStack_10,iVar1,iVar2);
  AddEmptyRect(this,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::CheckStreetEffect(BoardEntity*) */

void __thiscall WarMistModule::CheckStreetEffect(WarMistModule *this,BoardEntity *param_1)

{
  bool bVar1;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  Point *pPVar2;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)PlantStreetLamp::GetLightUpGrid(*(PlantStreetLamp **)(param_1 + 0xa8));
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    pPVar2 = (Point *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    AddEmptyRect(this,pPVar2);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WarMistModule::GameplayStarted() */

void __thiscall WarMistModule::GameplayStarted(WarMistModule *this)

{
  this[0x18] = (WarMistModule)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::StaticClassInit() */

void WarMistModule::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"MistImageInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03e38b24,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"SupplymentInfo");
    (*pcVar3)(plVar2,asStack_10,FUN_03e381cc,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"WarMistModule");
    (*pcVar3)(plVar2,asStack_10,FUN_03e3917c,0x88,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WarMistModule::StaticGetClass() */

long * WarMistModule::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"WarMistModule",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WarMistModule::UpdateEmptyRect() */

void __thiscall WarMistModule::UpdateEmptyRect(WarMistModule *this)

{
  this[0x1a] = (WarMistModule)0x1;
  return;
}


/* WarMistModule::OnPlantRefresh(Plant*) */

void WarMistModule::OnPlantRefresh(Plant *param_1)

{
  if (param_1[0x1b] != (Plant)0x0) {
    return;
  }
  UpdateEmptyRect((WarMistModule *)param_1);
  return;
}


/* WarMistModule::StreetLampUseSkillEnd() */

void __thiscall WarMistModule::StreetLampUseSkillEnd(WarMistModule *this)

{
  this[0x1b] = (WarMistModule)0x0;
  UpdateEmptyRect(this);
  return;
}


/* WarMistModule::CheckBloverEffect() */

void __thiscall WarMistModule::CheckBloverEffect(WarMistModule *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  ResilienceTutorialIntroProperties *pRVar5;
  float fVar6;
  
  puVar4 = (undefined4 *)FUN_03e378c8(*(undefined8 *)(this + 0x28),0);
  fVar6 = (float)FUN_03e37bec(*puVar4);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(fVar6);
  iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
  if ((iVar1 < iVar3) && (this[0x19] != (WarMistModule)0x0)) {
    this[0x19] = (WarMistModule)0x0;
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    iVar1 = *(int *)(pRVar5 + 0x48);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar3 = FUN_03e37bd8(((iVar3 - iVar1) + 1) * iVar2);
    *(float *)(this + 0x1c) = (float)iVar3;
    fVar6 = (float)PVZ_T();
    pRVar5 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
    *(float *)(this + 0x20) = fVar6 + *(float *)(pRVar5 + 0x44);
    return;
  }
  return;
}


/* WarMistModule::MistyIntervalUpdata() */

void __thiscall WarMistModule::MistyIntervalUpdata(WarMistModule *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ResilienceTutorialIntroProperties *pRVar4;
  float fVar5;
  undefined4 uVar6;
  
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0x20) < fVar5) {
    if (this[0x19] != (WarMistModule)0x0) {
      this[0x19] = (WarMistModule)0x0;
      iVar3 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
      pRVar4 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      iVar1 = *(int *)(pRVar4 + 0x48);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      iVar3 = FUN_03e37bd8(((iVar3 - iVar1) + 1) * iVar2);
      *(float *)(this + 0x1c) = (float)-iVar3;
    }
    uVar6 = PVZ_EOT();
    *(undefined4 *)(this + 0x20) = uVar6;
  }
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e3875c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WarMistModule::DrawMistImage(Sexy::Graphics*) */

void __thiscall WarMistModule::DrawMistImage(WarMistModule *this,Graphics *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if ((this[0x19] == (WarMistModule)0x0) || (*(char *)(pfVar3 + 4) == '\0')) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
    }
    else {
      Sexy::Graphics::PushState(param_1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      auVar6 = PVZ_T();
      local_2c = 0;
      local_18._0_4_ = 0x3f800000;
      CurveLerp<float>(auVar6,0x40000000,auVar6._0_4_ - pfVar3[5],&local_2c,(Color *)&local_18,1);
      local_2c = 0;
      local_18 = CONCAT44(local_18._4_4_,0x3f800000);
      fVar5 = CurveEvaluate<float>(&local_2c,(Color *)&local_18,3);
      Sexy::Color::Color((Color *)&local_18,1);
      fVar1 = fVar5;
      if (*(char *)((long)pfVar3 + 0xf) == '\0') {
        fVar1 = 1.0 - fVar5;
      }
      local_c = (int)(fVar1 * 255.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&local_18);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF(param_1,(Image *)pRVar4,*pfVar3,pfVar3[1]);
      if (fVar5 == 1.0) {
        *(undefined1 *)(pfVar3 + 4) = 0;
      }
      Sexy::Graphics::PopState(param_1);
    }
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_28);
  }
  if (this[0x19] == (WarMistModule)0x0) {
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x70));
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x70));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_20,(__normal_iterator *)&local_18), bVar2)
    {
      pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_20);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03e3875c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WarMistModule::RenderInfos(Sexy::Graphics*) */

void __thiscall WarMistModule::RenderInfos(WarMistModule *this,Graphics *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  int iStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  uStack_28 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x28));
  uStack_20 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0x28));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&uStack_28,(__normal_iterator *)&uStack_20), bVar2)
  {
    pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_28);
    if ((this[0x19] == (WarMistModule)0x0) || (*(char *)(pfVar3 + 4) == '\0')) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
    }
    else {
      Sexy::Graphics::PushState(param_1);
      Sexy::Graphics::SetColorizeImages(param_1,true);
      auVar6 = PVZ_T();
      uStack_2c = 0;
      uStack_18._0_4_ = 0x3f800000;
      CurveLerp<float>(auVar6,0x40000000,auVar6._0_4_ - pfVar3[5],&uStack_2c,(Color *)&uStack_18,1);
      uStack_2c = 0;
      uStack_18 = CONCAT44(uStack_18._4_4_,0x3f800000);
      fVar5 = CurveEvaluate<float>(&uStack_2c,(Color *)&uStack_18,3);
      Sexy::Color::Color((Color *)&uStack_18,1);
      fVar1 = fVar5;
      if (*(char *)((long)pfVar3 + 0xf) == '\0') {
        fVar1 = 1.0 - fVar5;
      }
      iStack_c = (int)(fVar1 * 255.0);
      Sexy::Graphics::SetColor(param_1,(Color *)&uStack_18);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF(param_1,(Image *)pRVar4,*pfVar3,pfVar3[1]);
      if (fVar5 == 1.0) {
        *(undefined1 *)(pfVar3 + 4) = 0;
      }
      Sexy::Graphics::PopState(param_1);
    }
    std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&uStack_28);
  }
  if (this[0x19] == (WarMistModule)0x0) {
    uStack_20 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)(this + 0x70));
    uStack_18 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0x70));
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_20,(__normal_iterator *)&uStack_18),
          bVar2) {
      pfVar3 = (float *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_20);
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(pfVar3 + 0xc));
      Sexy::Graphics::DrawImageF
                (param_1,(Image *)pRVar4,pfVar3[2] + *pfVar3,pfVar3[1],(TRect *)(pfVar3 + 6));
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&uStack_20);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::AddToRenderQueue(RenderQueue*) */

void __thiscall WarMistModule::AddToRenderQueue(WarMistModule *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x18] != (WarMistModule)0x0) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,RenderInfos);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<WarMistModule,void(WarMistModule::*)(Sexy::Graphics*)>(aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,600000,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WarMistModule::WarMistModule() */

void __thiscall WarMistModule::WarMistModule(WarMistModule *this)

{
  undefined4 uVar1;
  
  LevelModule::LevelModule((LevelModule *)this);
  this[0x18] = (WarMistModule)0x0;
  this[0x19] = (WarMistModule)0x0;
  *(undefined ***)this = &PTR_GetModuleClass_0678a5f0;
  this[0x1a] = (WarMistModule)0x0;
  this[0x1b] = (WarMistModule)0x0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x20) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x58));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x70));
  return;
}


/* WarMistModule::StaticNew() */

WarMistModule * WarMistModule::StaticNew(void)

{
  WarMistModule *this;
  
  this = ::operator_new(0x88);
  WarMistModule(this);
  return this;
}


/* WarMistModule::~WarMistModule() */

void __thiscall WarMistModule::~WarMistModule(WarMistModule *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0678a5f0;
  std::vector<MistImageInfo,std::allocator<MistImageInfo>>::~vector
            ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x70));
  std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::~vector
            ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)(this + 0x58));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  std::vector<MistImageInfo,std::allocator<MistImageInfo>>::~vector
            ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x28));
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* WarMistModule::~WarMistModule() */

void __thiscall WarMistModule::~WarMistModule(WarMistModule *this)

{
  ~WarMistModule(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::StreetLampUseSkill() */

void __thiscall WarMistModule::StreetLampUseSkill(WarMistModule *this)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  Point aPStack_10 [8];
  long local_8;
  
  iVar4 = 0;
  this[0x1b] = (WarMistModule)0x1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
  lVar2 = *(long *)(gLawnApp + 0x9f0);
  if (0 < *(int *)(lVar2 + 0xf8)) {
    do {
      iVar3 = -1;
      if (-2 < *(int *)(lVar2 + 0xfc)) {
        do {
          iVar1 = iVar3 + 1;
          Sexy::Point::Point(aPStack_10,iVar4,iVar3);
          AddEmptyRect(this,aPStack_10);
          lVar2 = *(long *)(gLawnApp + 0x9f0);
          iVar3 = iVar1;
        } while (iVar1 <= *(int *)(lVar2 + 0xfc));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(lVar2 + 0xf8));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::RealRefreshRect() */

void __thiscall WarMistModule::RealRefreshRect(WarMistModule *this)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long extraout_x0;
  long lVar4;
  RtObject *this_00;
  undefined8 local_40;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a] != (WarMistModule)0x0) {
    this[0x1a] = (WarMistModule)0x0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
              ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)(this + 0x40));
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,1,aRStack_30,0xffffffff,0xffffffff);
    local_40 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1)
    {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40)
      ;
      this_00 = (RtObject *)*puVar3;
      nop();
      if (((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), bVar1)) &&
         (iVar2 = FUN_03e378b4(*(undefined1 *)(extraout_x0 + 0x299)), iVar2 == 0)) {
        Plant::GetType();
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
        bVar1 = std::operator==((string *)(lVar4 + 8),"streetlamp");
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        if (bVar1) {
          CheckStreetEffect(this,(BoardEntity *)*puVar3);
        }
        else {
          Plant::GetType();
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
          bVar1 = std::operator==((string *)(lVar4 + 8),"torchwood");
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
          if (bVar1) {
            CheckTorchWoodEffect(this,(BoardEntity *)*puVar3);
          }
          else {
            Plant::GetType();
            lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_30);
            bVar1 = std::operator==((string *)(lVar4 + 8),"blover");
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
            if (bVar1) {
              CheckBloverEffect(this);
            }
          }
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::InitMistImage() */

void __thiscall WarMistModule::InitMistImage(WarMistModule *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  long lVar9;
  Board *this_01;
  int iVar10;
  int iVar11;
  Point aPStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [56];
  long local_8;
  
  this_00 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"War_Misty");
  cVar1 = LawnApp::IsGroupLoadComplete(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (cVar1 == '\0') {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_40,"War_Misty");
    Board::LoadResourceGroupForGameplay(this_01,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06add9c8);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06add998);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06adda18);
  lVar9 = *(long *)(gLawnApp + 0x9f0);
  iVar7 = *(int *)(lVar9 + 0xf8);
  if (0 < iVar7) {
    iVar11 = 0xb4;
    iVar10 = 0;
    do {
      if (-2 < *(int *)(lVar9 + 0xfc)) {
        iVar7 = 0x8c - iVar3;
        iVar5 = -1;
        do {
          iVar4 = Sexy::Rand(3);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    (aRStack_60,(RtWeakPtrBase *)(aRStack_58 + (long)iVar4 * 8));
          iVar4 = iVar5 + 1;
          Sexy::Point::Point(aPStack_68,iVar10,iVar5);
          iVar5 = FUN_03e37bd8(iVar11 + iVar2 * *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
          iVar6 = FUN_03e37bd8(iVar7);
          MistImageInfo::MistImageInfo
                    ((MistImageInfo *)(float)iVar5,(float)iVar6,0,asStack_40,aRStack_60,aPStack_68);
          std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                    ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x28),
                     (MistImageInfo *)asStack_40);
          WalkingOutZombie::~WalkingOutZombie((WalkingOutZombie *)asStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          lVar9 = *(long *)(gLawnApp + 0x9f0);
          iVar7 = iVar7 + iVar3;
          iVar5 = iVar4;
        } while (iVar4 <= *(int *)(lVar9 + 0xfc));
      }
      iVar7 = *(int *)(lVar9 + 0xf8);
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + iVar2;
    } while (iVar10 < iVar7);
  }
  pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar7 = FUN_03e37bd8((iVar7 - *(int *)(pRVar8 + 0x48)) * iVar2);
  *(float *)(this + 0x1c) = (float)-iVar7;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::initializeModule() */

void __thiscall WarMistModule::initializeModule(WarMistModule *this)

{
  LawnApp *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ResilienceTutorialIntroProperties *pRVar8;
  long lVar9;
  Board *this_01;
  int iVar10;
  int iVar11;
  Point aPStack_68 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_60 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [56];
  long lStack_8;
  
  this_00 = gLawnApp;
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"War_Misty");
  cVar1 = LawnApp::IsGroupLoadComplete(this_00,asStack_40);
  std::string::~string(asStack_40);
  nop();
  if (cVar1 == '\0') {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string(asStack_40,"War_Misty");
    Board::LoadResourceGroupForGameplay(this_01,asStack_40);
    std::string::~string(asStack_40);
    nop();
  }
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = BoardConstants::GRIDSQUARE_HEIGHT();
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06add9c8);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06add998);
  CachedResourcePtr::operator_cast_to_RtWeakPtr((CachedResourcePtr *)&DAT_06adda18);
  lVar9 = *(long *)(gLawnApp + 0x9f0);
  iVar7 = *(int *)(lVar9 + 0xf8);
  if (0 < iVar7) {
    iVar11 = 0xb4;
    iVar10 = 0;
    do {
      if (-2 < *(int *)(lVar9 + 0xfc)) {
        iVar7 = 0x8c - iVar3;
        iVar5 = -1;
        do {
          iVar4 = Sexy::Rand(3);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    (aRStack_60,(RtWeakPtrBase *)(aRStack_58 + (long)iVar4 * 8));
          iVar4 = iVar5 + 1;
          Sexy::Point::Point(aPStack_68,iVar10,iVar5);
          iVar5 = FUN_03e37bd8(iVar11 + iVar2 * *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
          iVar6 = FUN_03e37bd8(iVar7);
          MistImageInfo::MistImageInfo
                    ((MistImageInfo *)(float)iVar5,(float)iVar6,0,asStack_40,aRStack_60,aPStack_68);
          std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                    ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x28),
                     (MistImageInfo *)asStack_40);
          WalkingOutZombie::~WalkingOutZombie((WalkingOutZombie *)asStack_40);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          lVar9 = *(long *)(gLawnApp + 0x9f0);
          iVar7 = iVar7 + iVar3;
          iVar5 = iVar4;
        } while (iVar4 <= *(int *)(lVar9 + 0xfc));
      }
      iVar7 = *(int *)(lVar9 + 0xf8);
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + iVar2;
    } while (iVar10 < iVar7);
  }
  pRVar8 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
  iVar7 = FUN_03e37bd8((iVar7 - *(int *)(pRVar8 + 0x48)) * iVar2);
  *(float *)(this + 0x1c) = (float)-iVar7;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::SetMistImagePos(float, float) */

void __thiscall WarMistModule::SetMistImagePos(WarMistModule *this,float param_1,float param_2)

{
  vector<MistImageInfo,std::allocator<MistImageInfo>> *this_00;
  vector<SupplymentInfo,std::allocator<SupplymentInfo>> *this_01;
  MistImageInfo MVar1;
  WarMistModule WVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  MistImageInfo *this_02;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *this_03;
  int *piVar12;
  MistImageInfo *pMVar13;
  SupplymentInfo *pSVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  DVec2 aDStack_b0 [8];
  Point aPStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  Insets aIStack_90 [4];
  int local_8c;
  int local_84;
  undefined8 local_80;
  uint local_78;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_70 [24];
  undefined8 local_58 [3];
  undefined8 local_40;
  float local_38;
  int local_28;
  int local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (vector<MistImageInfo,std::allocator<MistImageInfo>> *)(this + 0x70);
  this_01 = (vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)(this + 0x58);
  local_8 = ___stack_chk_guard;
  std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::clear(this_01);
  std::vector<MistImageInfo,std::allocator<MistImageInfo>>::clear(this_00);
  iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar6 = BoardConstants::GRIDSQUARE_HEIGHT();
  local_d0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
  local_c8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x28));
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8);
  if (bVar3) {
    do {
      this_02 = (MistImageInfo *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_d0);
      MVar1 = this_02[0xe];
      *(float *)this_02 = *(float *)this_02 + param_1;
      *(float *)(this_02 + 4) = *(float *)(this_02 + 4) + param_2;
      MistImageInfo::Reset(this_02);
      fVar19 = *(float *)this_02;
      fVar17 = *(float *)(this_02 + 4);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_02 + 0x30));
      iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      this_03 = (SalesProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this_02 + 0x30));
      iVar8 = SalesProgressBar::GetCurrentLevel(this_03);
      Sexy::Insets::Insets((Insets *)&local_a0,(int)fVar19,(int)fVar17,iVar7,iVar8);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_70);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_58);
      local_c0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(this + 0x40));
      local_b8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
      while (bVar3 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8),
            bVar3) {
        piVar12 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
        if ((this[0x19] != (WarMistModule)0x0) && (this_02[0xe] != (MistImageInfo)0x0))
        goto LAB_03e3a240;
        iVar7 = FUN_03e37bd8(iVar5 * *piVar12 + 200);
        iVar8 = FUN_03e37bd8(iVar6 * piVar12[1] + 0xa0);
        iVar9 = FUN_03e37bd8(iVar5);
        iVar10 = FUN_03e37bd8(iVar6);
        Sexy::Insets::Insets(aIStack_90,iVar7,iVar8,iVar9,iVar10);
        cVar4 = Sexy::TRect<int>::Intersects((TRect<int> *)&local_a0,(TRect *)aIStack_90);
        if ((cVar4 != '\0') &&
           ((local_9c <= local_8c && (local_8c + local_84 <= local_9c + local_94)))) {
          Sexy::TRect<int>::Intersection((TRect *)&local_a0);
          if ((int)local_80 == local_a0) {
            this_02[0xc] = (MistImageInfo)0x1;
            fVar17 = (float)(int)local_78;
            *(float *)(this_02 + 8) = fVar17;
            if (this_02[0xd] == (MistImageInfo)0x0) {
              iVar7 = local_98 - local_78;
            }
            else {
              iVar7 = ~local_78 + *(int *)(this_02 + 0x20);
            }
            fVar19 = *(float *)this_02;
            *(int *)(this_02 + 0x20) = iVar7;
            *(int *)(this_02 + 0x24) = local_94;
            *(uint *)(this_02 + 0x18) = local_78;
            *(undefined4 *)(this_02 + 0x1c) = 0;
            iVar7 = FUN_03e37bd8(0x1e);
            DVec2::DVec2(aDStack_b0,(fVar17 + fVar19) - (float)iVar7,*(float *)(this_02 + 4));
            Sexy::Point::Point(aPStack_a8,(TPoint *)(this_02 + 0x28));
            SupplymentInfo::SupplymentInfo((SupplymentInfo *)&local_40,aDStack_b0,aPStack_a8,1);
            std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::push_back
                      ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)avStack_70,
                       (SupplymentInfo *)&local_40);
          }
          else if ((int)local_80 + local_78 == local_a0 + local_98) {
            this_02[0xd] = (MistImageInfo)0x1;
            if (this_02[0xc] == (MistImageInfo)0x0) {
              *(undefined4 *)(this_02 + 0x18) = 0;
              iVar7 = local_98 - local_78;
            }
            else {
              iVar7 = ~local_78 + *(int *)(this_02 + 0x20);
            }
            fVar19 = (float)local_98;
            fVar17 = *(float *)this_02;
            *(int *)(this_02 + 0x24) = local_94;
            fVar20 = (float)(int)local_78;
            *(int *)(this_02 + 0x20) = iVar7;
            *(undefined4 *)(this_02 + 0x1c) = 0;
            iVar7 = FUN_03e37bd8(0x1e);
            DVec2::DVec2(aDStack_b0,((fVar19 + fVar17) - fVar20) - (float)iVar7,
                         *(float *)(this_02 + 4));
            Sexy::Point::Point(aPStack_a8,(TPoint *)(this_02 + 0x28));
            SupplymentInfo::SupplymentInfo((SupplymentInfo *)&local_40,aDStack_b0,aPStack_a8,0);
            std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::push_back
                      ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)avStack_70,
                       (SupplymentInfo *)&local_40);
          }
          else {
            WVar2 = this[0x19];
            this_02[0xe] = (MistImageInfo)0x1;
            if (WVar2 == (WarMistModule)0x0) {
              MistImageInfo::MistImageInfo((MistImageInfo *)&local_40,this_02);
              local_20 = (int)((float)(int)local_80 - (float)local_40);
              std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                        ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)local_58,
                         (MistImageInfo *)&local_40);
              local_38 = ((float)(int)local_80 - (float)local_40) + (float)(int)local_78;
              pLVar11 = (LotteryResultProgressBar *)
                        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
              iVar7 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
              local_28 = (int)local_38;
              local_20 = (int)((float)iVar7 - local_38);
              std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back
                        ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)local_58,
                         (MistImageInfo *)&local_40);
              WalkingOutZombie::~WalkingOutZombie((WalkingOutZombie *)&local_40);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
      }
      WVar2 = this[0x19];
      if (this_02[0xe] == (MistImageInfo)0x0) {
LAB_03e3a0d4:
        if (*(int *)(this_02 + 0x20) < 1) {
          *(undefined4 *)(this_02 + 0x20) = 0;
          this_02[0xe] = (MistImageInfo)0x1;
          if (WVar2 != (WarMistModule)0x0) goto LAB_03e3a24c;
          goto LAB_03e3a1c4;
        }
        if (WVar2 != (WarMistModule)0x0) {
          if (MVar1 != this_02[0xe]) goto LAB_03e3a0f4;
          if (MVar1 != (MistImageInfo)0x0) goto LAB_03e3a1c4;
          goto LAB_03e3a1ec;
        }
        if (this_02[0xe] != (MistImageInfo)0x0) {
          *(undefined8 *)(this_02 + 0x18) = 0;
          *(undefined8 *)(this_02 + 0x20) = 0;
        }
      }
      else {
        if (WVar2 == (WarMistModule)0x0) {
          if (this_02[0xc] == (MistImageInfo)0x0) {
            pMVar13 = (MistImageInfo *)FUN_03e378c8(local_58[0],0);
            std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back(this_00,pMVar13);
          }
          if (this_02[0xd] == (MistImageInfo)0x0) {
            pMVar13 = (MistImageInfo *)FUN_03e378c8(local_58[0],1);
            std::vector<MistImageInfo,std::allocator<MistImageInfo>>::push_back(this_00,pMVar13);
          }
          WVar2 = this[0x19];
          goto LAB_03e3a0d4;
        }
LAB_03e3a240:
        if (*(int *)(this_02 + 0x20) < 1) {
          this_02[0xe] = (MistImageInfo)0x1;
          *(undefined4 *)(this_02 + 0x20) = 0;
          if (MVar1 == (MistImageInfo)0x1) {
            *(undefined8 *)(this_02 + 0x18) = 0;
            *(undefined8 *)(this_02 + 0x20) = 0;
            goto LAB_03e3a120;
          }
LAB_03e3a0f4:
          uVar18 = PVZ_T();
          this_02[0x10] = (MistImageInfo)0x1;
          *(undefined4 *)(this_02 + 0x14) = uVar18;
          if (MVar1 == (MistImageInfo)0x0) goto LAB_03e3a268;
          this_02[0xf] = (MistImageInfo)0x1;
        }
        else {
LAB_03e3a24c:
          if (MVar1 == (MistImageInfo)0x1) goto LAB_03e3a1c4;
          uVar18 = PVZ_T();
          this_02[0x10] = (MistImageInfo)0x1;
          *(undefined4 *)(this_02 + 0x14) = uVar18;
LAB_03e3a268:
          this_02[0xf] = (MistImageInfo)0x0;
        }
        if (this_02[0xe] == (MistImageInfo)0x0) {
          if (this[0x19] != (WarMistModule)0x0) {
LAB_03e3a1ec:
            local_80 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)avStack_70);
            local_40 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)avStack_70);
            while (bVar3 = __gnu_cxx::operator!=
                                     ((__normal_iterator *)&local_80,(__normal_iterator *)&local_40)
                  , bVar3) {
              pSVar14 = (SupplymentInfo *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
              std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::push_back(this_01,pSVar14)
              ;
              __gnu_cxx::
              __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
              ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                            *)&local_80);
            }
          }
        }
        else {
LAB_03e3a1c4:
          *(undefined8 *)(this_02 + 0x18) = 0;
          *(undefined8 *)(this_02 + 0x20) = 0;
        }
      }
LAB_03e3a120:
      std::vector<MistImageInfo,std::allocator<MistImageInfo>>::~vector
                ((vector<MistImageInfo,std::allocator<MistImageInfo>> *)local_58);
      std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::~vector
                ((vector<SupplymentInfo,std::allocator<SupplymentInfo>> *)avStack_70);
      std::move_iterator<Sexy::PAFrame*>::operator++((move_iterator<Sexy::PAFrame*> *)&local_d0);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_d0,(__normal_iterator *)&local_c8);
    } while (bVar3);
  }
  if (this[0x19] != (WarMistModule)0x0) {
    local_58[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)this_01);
    while( true ) {
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_01);
      bVar3 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)&local_40);
      if (!bVar3) break;
      lVar15 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)local_58);
      if (*(char *)(lVar15 + 0x10) == '\0') {
        lVar16 = GetWarMistModule(this,*(int *)(lVar15 + 8) + 1,*(int *)(lVar15 + 0xc));
      }
      else {
        lVar16 = GetWarMistModule(this,*(int *)(lVar15 + 8) + -1,*(int *)(lVar15 + 0xc));
      }
      if ((lVar16 == 0) || (*(char *)(lVar16 + 0xe) != '\0')) {
        lVar16 = GetWarMistModule(this,*(int *)(lVar15 + 8),*(int *)(lVar15 + 0xc));
        if (*(char *)(lVar15 + 0x10) == '\0') {
          pLVar11 = (LotteryResultProgressBar *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar16 + 0x30));
          iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          *(int *)(lVar16 + 0x20) =
               (int)(((float)*(int *)(lVar16 + 0x20) - *(float *)(lVar16 + 8)) +
                    (float)(iVar5 - *(int *)(lVar16 + 0x20)));
        }
        else {
          fVar17 = *(float *)(lVar16 + 8);
          *(undefined4 *)(lVar16 + 0x18) = 0;
          *(undefined4 *)(lVar16 + 8) = 0;
          *(int *)(lVar16 + 0x20) = (int)((float)*(int *)(lVar16 + 0x20) + fVar17);
        }
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_40,(__normal_iterator *)local_58);
        local_58[0] = std::vector<SupplymentInfo,std::allocator<SupplymentInfo>>::erase
                                (this_01,local_40);
      }
      else {
        __gnu_cxx::
        __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
        ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                      *)local_58);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WarMistModule::OnUpdate() */

void __thiscall WarMistModule::OnUpdate(WarMistModule *this)

{
  uint uVar1;
  ResilienceTutorialIntroProperties *pRVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (this[0x18] != (WarMistModule)0x0) {
    fVar3 = 0.0;
    if (this[0x19] == (WarMistModule)0x0) {
      fVar3 = (float)PVZ_Dt();
      pRVar2 = LevelModule::getProps<ResilienceTutorialIntroProperties>((LevelModule *)this);
      fVar5 = *(float *)(this + 0x1c);
      fVar3 = (float)(int)(fVar3 * *(float *)(pRVar2 + 0x40));
      uVar1 = (int)fVar5 >> 0x1f;
      fVar4 = (float)(int)(((int)fVar5 ^ uVar1) - uVar1) - fVar3;
      if (fVar5 < 0.0) {
        if (fVar4 <= 0.0) {
          fVar4 = fVar4 + fVar3;
          this[0x19] = (WarMistModule)0x1;
          fVar3 = -fVar4;
          *(float *)(this + 0x1c) = fVar4 + fVar5;
          UpdateEmptyRect(this);
        }
        else {
          fVar5 = fVar3 + fVar5;
          fVar3 = -fVar3;
          *(float *)(this + 0x1c) = fVar5;
        }
      }
      else if (fVar4 <= 0.0) {
        fVar3 = fVar3 + fVar4;
        this[0x19] = (WarMistModule)0x1;
        *(float *)(this + 0x1c) = fVar5 - fVar3;
      }
      else {
        *(float *)(this + 0x1c) = fVar5 - fVar3;
      }
    }
    RealRefreshRect(this);
    SetMistImagePos(this,fVar3,0.0);
    MistyIntervalUpdata(this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarMistModule::registerForEvents() */

void __thiscall WarMistModule::registerForEvents(WarMistModule *this)

{
  undefined *puVar1;
  LevelModuleManager *pLVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  CBMemberTranslatorX aCStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,GameplayStarted);
  Sexy::Delegate0::Delegate0<WarMistModule,void(WarMistModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnGameplayStarted(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,AddToRenderQueue);
  Sexy::Delegate1<RenderQueue*>::Delegate1<WarMistModule,void(WarMistModule::*)(RenderQueue*)>
            ((Delegate1<RenderQueue*> *)aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterAddToRenderQueue(pLVar2,aDStack_38);
  pLVar2 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnUpdate);
  Sexy::Delegate0::Delegate0<WarMistModule,void(WarMistModule::*)()>
            (aDStack_38,(CBMemberTranslatorX *)&local_50);
  LevelModuleManager::RegisterOnUpdate(pLVar2,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantRefresh);
  local_c0 = local_80;
  uStack_b8 = uStack_78;
  local_b0 = local_70;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<WarMistModule,void(WarMistModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantPlanted,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantRefresh);
  local_b0 = local_58;
  local_c0 = local_68;
  uStack_b8 = uStack_60;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<WarMistModule,void(WarMistModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::PlantDestory,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnPlantRefresh);
  local_c0 = local_50;
  uStack_b8 = uStack_48;
  local_b0 = local_40;
  MessageRouter::
  Subscribe<Plant*,Sexy::CBMemberTranslatorX<WarMistModule,void(WarMistModule::*)(Plant*)>>
            ((MessageRouter *)puVar1,Message::StreetLampSheep,&local_c0);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StreetLampUseSkill);
  Sexy::Delegate0::Delegate0<WarMistModule,void(WarMistModule::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StreetLampApplyFood,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,StreetLampUseSkillEnd);
  Sexy::Delegate0::Delegate0<WarMistModule,void(WarMistModule::*)()>(aDStack_38,aCStack_98);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::StreetLampEndFoodEffect,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

