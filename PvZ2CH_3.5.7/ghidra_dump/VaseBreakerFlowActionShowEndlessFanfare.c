// Class: VaseBreakerFlowActionShowEndlessFanfare


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowEndlessFanfare::StaticClassInit() */

void VaseBreakerFlowActionShowEndlessFanfare::StaticClassInit(void)

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
    std::string::string(asStack_10,"VaseBreakerFanfareSequence");
    (*pcVar3)(plVar2,asStack_10,FUN_049728c4,0x14,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"VaseBreakerFlowActionShowEndlessFanfare");
    (*pcVar3)(plVar2,asStack_10,FUN_0497711c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* VaseBreakerFlowActionShowEndlessFanfare::StaticGetClass() */

long * VaseBreakerFlowActionShowEndlessFanfare::StaticGetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionShowEndlessFanfare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionShowEndlessFanfare::GetClass() const */

long * VaseBreakerFlowActionShowEndlessFanfare::GetClass(void)

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
  uVar2 = VaseBreakerFlowAction::StaticGetClass();
  (*pcVar3)(plVar1,"VaseBreakerFlowActionShowEndlessFanfare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* VaseBreakerFlowActionShowEndlessFanfare::SetParameters(int, bool) */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::SetParameters
          (VaseBreakerFlowActionShowEndlessFanfare *this,int param_1,bool param_2)

{
  *(int *)(this + 0x30) = param_1;
  this[0x34] = (VaseBreakerFlowActionShowEndlessFanfare)param_2;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowEndlessFanfare::draw(Sexy::Graphics*) */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::draw
          (VaseBreakerFlowActionShowEndlessFanfare *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  Graphics3D *pGVar7;
  VaseBreakerFanfareSequence *this_00;
  undefined8 uVar8;
  GraphicsAutoState aGStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  wstring awStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  Color aCStack_60 [16];
  Color aCStack_50 [16];
  Insets aIStack_40 [16];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_90,param_1);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pGVar7 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::Graphics3D::PushTransform(pGVar7,(SexyMatrix3 *)aSStack_30,false);
  Sexy::Color::Color(aCStack_60,0x2d,0xff,10);
  Sexy::Color::Color(aCStack_50,0xeb,0,0x14);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar5 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar5) {
    this_00 = (VaseBreakerFanfareSequence *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    cVar6 = VaseBreakerFanfareSequence::IsActive(this_00);
    if (cVar6 != '\0') {
      iVar1 = *(int *)this_00;
      if (iVar1 == 1) {
        TodStringTranslate(L"[ARCADE_NEW_RECORD]");
        uVar8 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
        iVar1 = *(int *)(this_00 + 0xc);
        iVar2 = *(int *)(this_00 + 0x10);
        iVar3 = *(int *)(gLawnApp + 0x724);
        iVar4 = *(int *)(gLawnApp + 0x728);
        FUN_05477b24(auStack_68,auStack_70);
        Sexy::Insets::Insets(aIStack_40,(Insets *)aCStack_60);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)0x0,(float)(iVar1 + iVar2),(float)iVar3,(float)iVar4,uVar8,
                   param_1,auStack_68,1,1,aIStack_40,0);
        FUN_05476c50(auStack_68);
        FUN_05476c50(auStack_70);
      }
      else if (iVar1 == 0) {
        TodStringTranslate(L"[ARCADE_WAVE_CLEARED]");
        TodReplaceNumberString(awStack_78,L"{Number}",*(int *)(this + 0x30));
        uVar8 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
        iVar1 = *(int *)(this_00 + 0xc);
        iVar2 = *(int *)(this_00 + 0x10);
        iVar3 = *(int *)(gLawnApp + 0x724);
        iVar4 = *(int *)(gLawnApp + 0x728);
        FUN_05477b24(auStack_68,auStack_70);
        Sexy::Insets::Insets(aIStack_40,(Insets *)aCStack_60);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)0x0,(float)(iVar1 + iVar2),(float)iVar3,(float)iVar4,uVar8,
                   param_1,auStack_68,1,1,aIStack_40,0);
        FUN_05476c50(auStack_68);
        FUN_05476c50(auStack_70);
        FUN_05476c50(awStack_78);
      }
      else if (iVar1 == 3) {
        TodStringTranslate(L"[ARCADE_MORE_VASES]");
        uVar8 = PrimeText_PotentialTypeface::Typeface
                          (PrimeText_Game::Typeface_FZShaoEr_40_ThickOutline);
        iVar1 = *(int *)(this_00 + 0xc);
        iVar2 = *(int *)(this_00 + 0x10);
        iVar3 = *(int *)(gLawnApp + 0x724);
        iVar4 = *(int *)(gLawnApp + 0x728);
        FUN_05477b24(auStack_68,auStack_70);
        Sexy::Insets::Insets(aIStack_40,(Insets *)aCStack_50);
        Sexy::PrimeTypeface::DrawString_Paragraph
                  ((PrimeTypeface *)0x0,(float)(iVar1 + iVar2),(float)iVar3,(float)iVar4,uVar8,
                   param_1,auStack_68,1,1,aIStack_40,0);
        FUN_05476c50(auStack_68);
        FUN_05476c50(auStack_70);
      }
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_88);
  }
  pGVar7 = (Graphics3D *)Sexy::Graphics::Get3D(param_1);
  Sexy::Graphics3D::PopTransform(pGVar7);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_90);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowEndlessFanfare::isAnySequenceActive() const */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::isAnySequenceActive
          (VaseBreakerFlowActionShowEndlessFanfare *this)

{
  char cVar1;
  bool bVar2;
  VaseBreakerFanfareSequence *this_00;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_04975d10(*(undefined8 *)(this + 0x38));
  local_10 = FUN_04975d60(*(undefined8 *)(this + 0x40));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    this_00 = (VaseBreakerFanfareSequence *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar1 = VaseBreakerFanfareSequence::IsActive(this_00);
    if (cVar1 != '\0') break;
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowEndlessFanfare::onAddToRenderQueue(RenderQueue*) */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::onAddToRenderQueue
          (VaseBreakerFlowActionShowEndlessFanfare *this,RenderQueue *param_1)

{
  char cVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = isAnySequenceActive(this);
  if (cVar1 != '\0') {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,draw);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<VaseBreakerFlowActionShowEndlessFanfare,void(VaseBreakerFlowActionShowEndlessFanfare::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,900000,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowEndlessFanfare::onUpdate() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::onUpdate(VaseBreakerFlowActionShowEndlessFanfare *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  VaseBreakerFanfareSequence *this_00;
  float fVar4;
  float fVar5;
  int local_20 [2];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x38));
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x38));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    this_00 = (VaseBreakerFanfareSequence *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar2 = VaseBreakerFanfareSequence::IsActive(this_00);
    if (cVar2 != '\0') {
      fVar4 = (float)PVZ_T();
      if (0.5 <= fVar4 - *(float *)(this_00 + 4)) {
        fVar5 = *(float *)(this_00 + 8);
        fVar4 = (float)PVZ_T();
        if (fVar5 - fVar4 < 0.5) {
          fVar4 = (float)PVZ_T();
          local_20[1] = 0;
          iVar3 = CurveEvaluate<int>((fVar4 - *(float *)(this_00 + 8)) * 2.0 + 1.0,local_20 + 1,
                                     gLawnApp + 0x728,2);
          *(int *)(this_00 + 0x10) = iVar3;
        }
        else {
          *(undefined4 *)(this_00 + 0x10) = 0;
        }
      }
      else {
        local_20[0] = *(int *)(gLawnApp + 0x728);
        if (*(int *)this_00 != 3) {
          local_20[0] = -local_20[0];
        }
        fVar4 = (float)PVZ_T();
        local_20[1] = 0;
        iVar3 = CurveEvaluate<int>((fVar4 - *(float *)(this_00 + 4)) +
                                   (fVar4 - *(float *)(this_00 + 4)),local_20,local_20 + 1,3);
        *(int *)(this_00 + 0x10) = iVar3;
      }
    }
    __gnu_cxx::
    __normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
    ::operator++((__normal_iterator<PennyClassroomShopData*,std::vector<PennyClassroomShopData,std::allocator<PennyClassroomShopData>>>
                  *)&local_18);
  }
  cVar2 = isAnySequenceActive(this);
  if (cVar2 == '\0') {
    RunnableAction::End((RunnableAction *)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionShowEndlessFanfare::onUpdate() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::onUpdate(VaseBreakerFlowActionShowEndlessFanfare *this)

{
  onUpdate(this + -0x10);
  return;
}


/* VaseBreakerFlowActionShowEndlessFanfare::VaseBreakerFlowActionShowEndlessFanfare() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::VaseBreakerFlowActionShowEndlessFanfare
          (VaseBreakerFlowActionShowEndlessFanfare *this)

{
  VaseBreakerFlowAction::VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  *(undefined ***)this = &PTR_GetClass_06917940;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionShowEndlessFanfare_069179e8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* VaseBreakerFlowActionShowEndlessFanfare::StaticNew() */

VaseBreakerFlowActionShowEndlessFanfare * VaseBreakerFlowActionShowEndlessFanfare::StaticNew(void)

{
  VaseBreakerFlowActionShowEndlessFanfare *this;
  
  this = ::operator_new(0x50);
  VaseBreakerFlowActionShowEndlessFanfare(this);
  return this;
}


/* VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare
          (VaseBreakerFlowActionShowEndlessFanfare *this)

{
  *(undefined ***)this = &PTR_GetClass_06917940;
  *(undefined ***)(this + 0x10) = &PTR__VaseBreakerFlowActionShowEndlessFanfare_069179e8;
  std::vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>>::~vector
            ((vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>> *)
             (this + 0x38));
  VaseBreakerFlowAction::~VaseBreakerFlowAction((VaseBreakerFlowAction *)this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare
          (VaseBreakerFlowActionShowEndlessFanfare *this)

{
  ~VaseBreakerFlowActionShowEndlessFanfare(this + -0x10);
  return;
}


/* VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare
          (VaseBreakerFlowActionShowEndlessFanfare *this)

{
  ~VaseBreakerFlowActionShowEndlessFanfare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::~VaseBreakerFlowActionShowEndlessFanfare
          (VaseBreakerFlowActionShowEndlessFanfare *this)

{
  ~VaseBreakerFlowActionShowEndlessFanfare(this + -0x10);
  return;
}


/* VaseBreakerFlowActionShowEndlessFanfare::playRewardSound(bool) */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::playRewardSound
          (VaseBreakerFlowActionShowEndlessFanfare *this,bool param_1)

{
  char *pcVar1;
  
  if (!param_1) {
    pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
    AudioMgr::SendEvent(pcVar1,"PLAY_UI_MINIGAME_VASEBREAK_WAVECLEARED");
    return;
  }
  pcVar1 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar1,"PLAY_UI_MINIGAME_VASEBREAK_WAVECLEARED_NEWRECORD");
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VaseBreakerFlowActionShowEndlessFanfare::onBegin() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::onBegin(VaseBreakerFlowActionShowEndlessFanfare *this)

{
  float fVar1;
  float fVar2;
  undefined4 local_68;
  float local_64;
  float local_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  float local_4c;
  float local_48;
  int local_44;
  int local_40;
  undefined4 local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::PutIntoTutorialMode(*(Board **)(gLawnApp + 0x9f0));
  fVar1 = (float)PVZ_T();
  local_68 = 0;
  local_40 = *(int *)(gLawnApp + 0x728);
  local_50 = 3;
  local_58 = -local_40;
  local_38 = 1;
  local_20 = 2;
  local_28 = local_58;
  local_10 = local_58;
  if (this[0x34] == (VaseBreakerFlowActionShowEndlessFanfare)0x0) {
    fVar2 = (float)FUN_0497313c(0xc1f00000);
    local_5c = (int)fVar2;
    fVar2 = (float)FUN_0497313c(0x41f00000);
    local_44 = (int)fVar2;
    local_4c = fVar1 + 1.3;
    local_60 = local_4c + 2.0;
    local_64 = fVar1;
    local_48 = local_60;
    local_30 = local_60;
    local_18 = local_60;
  }
  else {
    local_14 = 0;
    local_2c = 0;
    fVar2 = (float)FUN_0497313c(0xc2700000);
    local_5c = (int)fVar2;
    fVar2 = (float)FUN_0497313c(0x42700000);
    local_44 = (int)fVar2;
    local_34 = fVar1 + 0.17;
    local_64 = local_34 + 0.17;
    local_4c = local_64 + 1.3;
    local_60 = local_4c + 2.0;
    local_48 = local_60;
    local_30 = local_60;
    local_1c = fVar1;
    local_18 = local_60;
    std::vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>>::push_back
              ((vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>> *)
               (this + 0x38),(VaseBreakerFanfareSequence *)&local_20);
    std::vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>>::push_back
              ((vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>> *)
               (this + 0x38),(VaseBreakerFanfareSequence *)&local_38);
  }
  std::vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>>::push_back
            ((vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>> *)
             (this + 0x38),(VaseBreakerFanfareSequence *)&local_68);
  std::vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>>::push_back
            ((vector<VaseBreakerFanfareSequence,std::allocator<VaseBreakerFanfareSequence>> *)
             (this + 0x38),(VaseBreakerFanfareSequence *)&local_50);
  playRewardSound(this,(bool)this[0x34]);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to VaseBreakerFlowActionShowEndlessFanfare::onBegin() */

void __thiscall
VaseBreakerFlowActionShowEndlessFanfare::onBegin(VaseBreakerFlowActionShowEndlessFanfare *this)

{
  onBegin(this + -0x10);
  return;
}

