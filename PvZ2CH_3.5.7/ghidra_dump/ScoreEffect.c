// Class: ScoreEffect


/* ScoreEffect::GetRenderOrder() const */

undefined4 __thiscall ScoreEffect::GetRenderOrder(ScoreEffect *this)

{
  return *(undefined4 *)(this + 0xc4);
}


/* ScoreEffect::CalcRenderOrder() const */

undefined4 __thiscall ScoreEffect::CalcRenderOrder(ScoreEffect *this)

{
  return *(undefined4 *)(this + 0xc4);
}


/* non-virtual thunk to ScoreEffect::CalcRenderOrder() const */

void __thiscall ScoreEffect::CalcRenderOrder(ScoreEffect *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScoreEffect::StaticClassInit() */

void ScoreEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"ScoreEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_047c2e48,0xe8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ScoreEffect::StaticGetClass() */

long * ScoreEffect::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ScoreEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ScoreEffect::GetClass() const */

long * ScoreEffect::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ScoreEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x047c2a64 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* ScoreEffect::onUpdate() */

void __thiscall ScoreEffect::onUpdate(ScoreEffect *this)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined4 uVar6;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  switch(*(undefined4 *)(this + 0xc0)) {
  case 0:
    *(undefined4 *)(this + 0xc0) = 1;
    *(undefined4 *)(this + 0xd0) = 0xff;
    *(undefined4 *)(this + 0xcc) = 0x3f800000;
    uVar3 = PVZ_T();
    *(undefined4 *)(this + 200) = uVar3;
    break;
  case 1:
    fVar2 = *(float *)(this + 200);
    fVar5 = (float)PVZ_T();
    if (fVar2 + 1.0 <= fVar5) {
      *(undefined4 *)(this + 0xc0) = 2;
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 200) = uVar3;
    }
    else {
      auVar4 = PVZ_T();
      fVar2 = CurveLerp<float>(auVar4,fVar2 + 1.0,auVar4._0_4_,&DAT_05754a40,&DAT_05754a44,3);
      *(float *)(this + 0xcc) = fVar2;
    }
    break;
  case 2:
    fVar2 = *(float *)(this + 200);
    fVar5 = (float)PVZ_T();
    if (fVar2 + 1.0 <= fVar5) {
      *(undefined4 *)(this + 0xc0) = 3;
      uVar3 = PVZ_T();
      *(undefined4 *)(this + 200) = uVar3;
    }
    else {
      auVar4 = PVZ_T();
      fVar2 = CurveLerp<float>(auVar4,fVar2 + 1.0,auVar4._0_4_,&DAT_05754a44,&DAT_05754a40,3);
      *(float *)(this + 0xcc) = fVar2;
    }
    break;
  case 3:
    fVar5 = *(float *)(this + 200) + 1.0;
    fVar2 = (float)PVZ_T();
    if (fVar2 < fVar5) {
      uVar6 = *(undefined4 *)(this + 200);
      uVar3 = PVZ_T();
      iVar1 = CurveLerp<int>(uVar6,fVar5,uVar3,&DAT_05754a3c,&DAT_05754a38,3);
      *(int *)(this + 0xd0) = iVar1;
      auVar4 = PVZ_T();
      local_c = *(float *)(this + 0xe0) - 50.0;
      fVar2 = CurveLerp<float>(auVar4,fVar5,auVar4._0_4_,this + 0xe0,&local_c,3);
      *(float *)(this + 0xd8) = fVar2;
    }
    else {
      *(undefined4 *)(this + 0xc0) = 4;
      (**(code **)(*(long *)this + 0x48))(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScoreEffect::onDraw(Sexy::Graphics*) */

void __thiscall ScoreEffect::onDraw(ScoreEffect *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ResourceInfo *this_00;
  RtWeakPtrBase *pRVar4;
  GraphicsAutoState aGStack_40 [8];
  RtWeakPtr aRStack_38 [8];
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::Insets::Insets((Insets *)&local_28);
  local_28 = (int)*(float *)(this + 0xd4);
  local_24 = (int)*(float *)(this + 0xd8);
  Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,*(int *)(this + 0xd0));
  Sexy::Graphics::SetColor(param_1,(Color *)local_18);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0xa8));
  local_18[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)(this + 0xa8));
  while (bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)local_18)
        , bVar1) {
    pRVar4 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,pRVar4);
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_38);
    if (cVar2 == '\0') {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    else {
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_38);
      iVar3 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
      local_20 = (int)((float)iVar3 * *(float *)(this + 0xcc));
      iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
      local_1c = (int)((float)iVar3 * *(float *)(this + 0xcc));
      Sexy::Graphics::DrawImage(param_1,(Image *)this_00,local_28,local_24,local_20,local_1c);
      local_28 = local_28 + local_20;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ScoreEffect::ScoreEffect() */

void __thiscall ScoreEffect::ScoreEffect(ScoreEffect *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_068e40a0;
  *(undefined ***)(this + 0x10) = &PTR__ScoreEffect_068e4288;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xa8));
  *(undefined4 *)(this + 0xc0) = 0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 200) = uVar1;
  *(undefined4 *)(this + 0xd0) = 0xff;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xd4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xdc));
  return;
}


/* ScoreEffect::StaticNew() */

ScoreEffect * ScoreEffect::StaticNew(void)

{
  ScoreEffect *this;
  
  this = ::operator_new(0xe8);
  ScoreEffect(this);
  return this;
}


/* ScoreEffect::~ScoreEffect() */

void __thiscall ScoreEffect::~ScoreEffect(ScoreEffect *this)

{
  *(undefined ***)this = &PTR_GetClass_068e40a0;
  *(undefined ***)(this + 0x10) = &PTR__ScoreEffect_068e4288;
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::~vector
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ScoreEffect::~ScoreEffect() */

void __thiscall ScoreEffect::~ScoreEffect(ScoreEffect *this)

{
  ~ScoreEffect(this + -0x10);
  return;
}


/* ScoreEffect::~ScoreEffect() */

void __thiscall ScoreEffect::~ScoreEffect(ScoreEffect *this)

{
  ~ScoreEffect(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ScoreEffect::~ScoreEffect() */

void __thiscall ScoreEffect::~ScoreEffect(ScoreEffect *this)

{
  ~ScoreEffect(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ScoreEffect::InitialiseEffect(std::string const&, std::string const&, Sexy::SexyVector2 const&)
    */

void __thiscall
ScoreEffect::InitialiseEffect
          (ScoreEffect *this,string *param_1,string *param_2,SexyVector2 *param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  string *extraout_x1;
  string *__n;
  string asStack_38 [8];
  Sexy aSStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = param_2;
  Set8BytesTo0(asStack_38);
  Set8BytesTo0(aSStack_30);
  std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::clear
            ((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *)
             (this + 0xa8));
  local_28 = FUN_05474160(param_1);
  local_20 = FUN_05474168(param_1);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
    if (!bVar1) break;
    pcVar3 = (char *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    if (*pcVar3 == '+') {
      std::string::append(asStack_38,"add",(size_t)__n);
    }
    else if (*pcVar3 == '-') {
      std::string::append(asStack_38,"sub",(size_t)__n);
    }
    else {
      FUN_054751c4();
    }
    FUN_031dcc6c(asStack_10,param_2,asStack_38);
    FUN_05474278(aSStack_30,asStack_10);
    std::string::~string(asStack_10);
    Sexy::StringToUpper(aSStack_30,extraout_x1);
    FUN_05474278(aSStack_30,asStack_10);
    std::string::~string(asStack_10);
    lVar2 = StringHelper::ToImage((string *)aSStack_30,false);
    if (lVar2 != 0) {
      Sexy::BaseResource::GetRtId();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
      std::vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>>::
      push_back((vector<Sexy::RtWeakPtr<Sexy::Image>,std::allocator<Sexy::RtWeakPtr<Sexy::Image>>> *
                )(this + 0xa8),(RtWeakPtr *)asStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
      Sexy::RtId::~RtId(aRStack_18);
    }
    __gnu_cxx::__normal_iterator<char*,std::vector<char,std::allocator<char>>>::operator++
              ((__normal_iterator<char*,std::vector<char,std::allocator<char>>> *)&local_28);
  }
  *(undefined8 *)(this + 0xdc) = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0xd4) = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0xc0) = 0;
  std::string::~string((string *)aSStack_30);
  std::string::~string(asStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

