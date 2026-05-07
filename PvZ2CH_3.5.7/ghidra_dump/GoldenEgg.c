// Class: GoldenEgg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEgg::StaticClassInit() */

void GoldenEgg::StaticClassInit(void)

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
    std::string::string(asStack_10,"GoldenEgg");
    (*pcVar2)(plVar1,asStack_10,FUN_04beace4,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEgg::StaticGetClass() */

long * GoldenEgg::StaticGetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"GoldenEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldenEgg::GetClass() const */

long * GoldenEgg::GetClass(void)

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
  uVar2 = RealObject::StaticGetClass();
  (*pcVar3)(plVar1,"GoldenEgg",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GoldenEgg::OnDraw(Sexy::Graphics*) */

void __thiscall GoldenEgg::OnDraw(GoldenEgg *this,Graphics *param_1)

{
  if ((*(int *)(this + 0x34) != 0) &&
     (*(StandaloneEffect **)(this + 0x50) != (StandaloneEffect *)0x0)) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x50),param_1);
    return;
  }
  return;
}


/* GoldenEgg::IsEggOpened() */

bool __thiscall GoldenEgg::IsEggOpened(GoldenEgg *this)

{
  return *(int *)(this + 0x34) != 1;
}


/* GoldenEgg::SetRefresh(bool) */

void __thiscall GoldenEgg::SetRefresh(GoldenEgg *this,bool param_1)

{
  this[0x2e] = (GoldenEgg)param_1;
  return;
}


/* GoldenEgg::Valid() */

bool __thiscall GoldenEgg::Valid(GoldenEgg *this)

{
  return *(long *)(this + 0x50) != 0;
}


/* GoldenEgg::~GoldenEgg() */

void __thiscall GoldenEgg::~GoldenEgg(GoldenEgg *this)

{
  *(undefined ***)this = &PTR_GetClass_0697d3e0;
  *(undefined ***)(this + 0x10) = &PTR__GoldenEgg_0697d500;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  RealObject::~RealObject((RealObject *)this);
  return;
}


/* non-virtual thunk to GoldenEgg::~GoldenEgg() */

void __thiscall GoldenEgg::~GoldenEgg(GoldenEgg *this)

{
  ~GoldenEgg(this + -0x10);
  return;
}


/* GoldenEgg::~GoldenEgg() */

void __thiscall GoldenEgg::~GoldenEgg(GoldenEgg *this)

{
  ~GoldenEgg(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GoldenEgg::~GoldenEgg() */

void __thiscall GoldenEgg::~GoldenEgg(GoldenEgg *this)

{
  ~GoldenEgg(this + -0x10);
  return;
}


/* GoldenEgg::GoldenEgg() */

void __thiscall GoldenEgg::GoldenEgg(GoldenEgg *this)

{
  RealObject::RealObject((RealObject *)this);
  this[0x2d] = (GoldenEgg)0x0;
  this[0x2e] = (GoldenEgg)0x0;
  *(undefined ***)this = &PTR_GetClass_0697d3e0;
  *(undefined ***)(this + 0x10) = &PTR__GoldenEgg_0697d500;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  Sexy::Insets::Insets((Insets *)(this + 0x40));
  *(undefined8 *)(this + 0x50) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* GoldenEgg::StaticNew() */

GoldenEgg * GoldenEgg::StaticNew(void)

{
  GoldenEgg *this;
  
  this = ::operator_new(0x60);
  GoldenEgg(this);
  return this;
}


/* GoldenEgg::PlayEggOpened() */

void __thiscall GoldenEgg::PlayEggOpened(GoldenEgg *this)

{
  PopAnimRig *this_00;
  undefined4 uVar1;
  
  Effect_PopAnim::PlaySingleAnimation(*(Effect_PopAnim **)(this + 0x50),&DAT_06b8c3e8,0);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  uVar1 = PopAnimRig::CalcAnimLengthSeconds(this_00,(string *)&DAT_06b8c3e8);
  *(undefined4 *)(this + 0x3c) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


/* GoldenEgg::OpenEgg() */

void __thiscall GoldenEgg::OpenEgg(GoldenEgg *this)

{
  PopAnimRig *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  undefined4 uVar1;
  
  Effect_PopAnim::PlaySingleAnimation(*(Effect_PopAnim **)(this + 0x50),&DAT_06b8c168,0);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  uVar1 = PopAnimRig::CalcAnimLengthSeconds(this_00,(string *)&DAT_06b8c168);
  *(undefined4 *)(this + 0x3c) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x38) = uVar1;
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if (this_02 != (PlayerInfo *)0x0) {
    PlayerInfo::SetGoldenEggsStat(this_02,*(int *)(this + 0x30),2,true);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEgg::InitGoldenEgg(int, std::string, Sexy::TRect<int>) */

void __thiscall
GoldenEgg::InitGoldenEgg(GoldenEgg *this,undefined4 param_1,string *param_3,int *param_4)

{
  undefined8 uVar1;
  char *__s;
  ResourceInfo *pRVar2;
  Effect_PopAnim *this_00;
  RtClass *pRVar3;
  StandaloneEffect *this_01;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (char *)FUN_0547429c(param_3);
  std::string::string(asStack_10,__s);
  GetPAMByName(asStack_10);
  std::string::~string(asStack_10);
  nop();
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  uVar1 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(this + 0x40) = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x48) = uVar1;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x50) = this_00;
  *(float *)(pRVar2 + 0x28) = (float)*(int *)(gLawnApp + 0xd8) * 0.0006515625;
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  this_01 = *(StandaloneEffect **)(this + 0x50);
  Sexy::FastCurve::SetOutRange
            ((FastCurve *)asStack_10,(float)(*param_4 + param_4[2] / 2),
             (float)(param_4[1] + param_4[3] / 2));
  StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)asStack_10,900000);
  Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x50),true);
  StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x50),true);
  GetPAMByName(param_3);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  pRVar3 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar2,pRVar3);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  *(undefined4 *)(this + 0x30) = param_1;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x2d] = (GoldenEgg)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEgg::OnEggOpened() */

void __thiscall GoldenEgg::OnEggOpened(GoldenEgg *this)

{
  char cVar1;
  ProfileMgr *this_00;
  PlayerInfo *pPVar2;
  long lVar3;
  PopAnimRig *this_01;
  GoldenEggUI *this_02;
  LawnApp *this_03;
  undefined4 uVar4;
  vector<int,std::allocator<int>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x2e] == (GoldenEgg)0x0) {
    Effect_PopAnim::PlaySingleAnimation(*(Effect_PopAnim **)(this + 0x50),&DAT_06b8c3e8);
    this_01 = (PopAnimRig *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    uVar4 = PopAnimRig::CalcAnimLengthSeconds(this_01,(string *)&DAT_06b8c3e8);
    *(undefined4 *)(this + 0x3c) = uVar4;
    uVar4 = PVZ_T();
    *(undefined4 *)(this + 0x38) = uVar4;
    this_03 = gLawnApp;
  }
  else {
    this[0x2e] = (GoldenEgg)0x0;
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    this_03 = gLawnApp;
    if (((pPVar2 != (PlayerInfo *)0x0) && (gLawnApp != (LawnApp *)0x0)) &&
       (lVar3 = LawnApp::GetGoldenEggUI(gLawnApp), lVar3 != 0)) {
      GoldenEggUI::GetRefreshEggsStat();
      PlayerInfo::ResetGoldenEggsStat(pPVar2,avStack_20,1);
      std::vector<int,std::allocator<int>>::~vector(avStack_20);
      this_03 = gLawnApp;
    }
  }
  cVar1 = LawnApp::IsGoldenEggUIValid(this_03);
  if (cVar1 != '\0') {
    this_02 = (GoldenEggUI *)LawnApp::GetGoldenEggUI(this_03);
    GoldenEggUI::SetOpening(this_02,false);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GoldenEgg::PlayIdleLooped() */

void __thiscall GoldenEgg::PlayIdleLooped(GoldenEgg *this)

{
  long lVar1;
  PopAnimRig *this_00;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  this[0x2d] = (GoldenEgg)0x0;
  local_8 = ___stack_chk_guard;
  lVar1 = ProbabilitySet<std::string>::GetSize((ProbabilitySet<std::string> *)&DAT_06b8c2b0);
  if (lVar1 == 0) {
    FUN_05475d88(asStack_10,&DAT_06b8c1a0);
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06b8c2b0,asStack_10,9);
    std::string::~string(asStack_10);
    FUN_05475d88(asStack_10,&DAT_06b8c1a8);
    ProbabilitySet<std::string>::AddItem((ProbabilitySet<std::string> *)&DAT_06b8c2b0,asStack_10,1);
    std::string::~string(asStack_10);
  }
  ProbabilitySet<std::string>::PickItem();
  Effect_PopAnim::PlaySingleAnimation(*(Effect_PopAnim **)(this + 0x50),asStack_10,0);
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  uVar2 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  *(undefined4 *)(this + 0x3c) = uVar2;
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x38) = uVar2;
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GoldenEgg::OnUpdate() */

void __thiscall GoldenEgg::OnUpdate(GoldenEgg *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ActivityConfig *this_00;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  float fVar4;
  float fVar5;
  float fVar6;
  
  this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  if ((this_00 != (ActivityConfig *)0x0) && (this_02 != (PlayerInfo *)0x0)) {
    cVar2 = ActivityConfig::IsGoldenEggActived(this_00);
    if (cVar2 == '\0') {
      *(undefined4 *)(this + 0x34) = 0;
      iVar3 = PlayerInfo::GetGoldenEggsStatByIndex(this_02,*(int *)(this + 0x30));
      *(int *)(this + 0x34) = iVar3;
    }
    else {
      iVar3 = PlayerInfo::GetGoldenEggsStatByIndex(this_02,*(int *)(this + 0x30));
      *(int *)(this + 0x34) = iVar3;
    }
    if (iVar3 == 1) {
      fVar4 = *(float *)(this + 0x3c);
      fVar6 = *(float *)(this + 0x38);
      fVar5 = (float)PVZ_T();
      if (fVar4 + fVar6 <= fVar5) {
        PlayIdleLooped(this);
      }
    }
    else {
      if (iVar3 != 2) {
        return;
      }
      fVar4 = *(float *)(this + 0x3c);
      fVar6 = *(float *)(this + 0x38);
      fVar5 = (float)PVZ_T();
      pLVar1 = gLawnApp;
      if (fVar4 + fVar6 <= fVar5) {
        if ((((this[0x2d] == (GoldenEgg)0x0) && (gLawnApp != (LawnApp *)0x0)) &&
            (cVar2 = LawnApp::IsGoldenEggOpenUIValid(gLawnApp), cVar2 != '\0')) &&
           (cVar2 = LawnApp::GoldenEggHasBonus(pLVar1), pLVar1 = gLawnApp, cVar2 != '\0')) {
          this[0x2d] = (GoldenEgg)0x1;
          LawnApp::ShowGoldenEggOpenUI(pLVar1);
        }
        else {
          PlayEggOpened(this);
        }
      }
    }
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x50));
    return;
  }
  return;
}

