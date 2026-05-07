// Class: UFO


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UFO::StaticClassInit() */

void UFO::StaticClassInit(void)

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
    std::string::string(asStack_10,"RiseDes");
    (*pcVar3)(plVar2,asStack_10,FUN_037cf508,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"UFO");
    (*pcVar3)(plVar2,asStack_10,FUN_037cf7b0,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UFO::StaticGetClass() */

long * UFO::StaticGetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055ca090,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UFO::GetClass() const */

long * UFO::GetClass(void)

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
  uVar2 = GameObject::StaticGetClass();
  (*pcVar3)(plVar1,&DAT_055ca090,uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UFO::UFO() */

void __thiscall UFO::UFO(UFO *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06699fc0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x10));
  Set8BytesTo0(this + 0x20);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  DVec3::DVec3((DVec3 *)(this + 0x48));
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  return;
}


/* UFO::StaticNew() */

UFO * UFO::StaticNew(void)

{
  UFO *this;
  
  this = ::operator_new(0x58);
  UFO(this);
  return this;
}


/* UFO::~UFO() */

void __thiscall UFO::~UFO(UFO *this)

{
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_00;
  
  this_00 = (RtWeakPtr *)(this + 0x10);
  *(undefined ***)this = &PTR_GetClass_06699fc0;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  std::string::~string((string *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* UFO::~UFO() */

void __thiscall UFO::~UFO(UFO *this)

{
  ~UFO(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UFO::onPopAnimCommand(std::string const&, float, std::string const&, std::string const&) */

void UFO::onPopAnimCommand(string *param_1,float param_2,string *param_3,string *param_4)

{
  bool bVar1;
  char cVar2;
  Effect_PopAnim *pEVar3;
  ArtifactUFO *pAVar4;
  ResourceInfo *pRVar5;
  undefined4 uVar6;
  float fVar7;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_4,"start");
  if (bVar1) {
    Sexy::OutputDebugStrF((wchar_t *)"UFO::onPopAnimCommand start");
    uVar6 = PVZ_T();
    *(undefined4 *)(param_1 + 0x18) = uVar6;
    pEVar3 = (Effect_PopAnim *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x10));
    std::string::string(asStack_10,"loop");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    if (*(int *)(param_1 + 0x40) == 1) {
      pAVar4 = (ArtifactUFO *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x38));
      cVar2 = ArtifactUFO::canBeTargeted(pAVar4,(BoardEntity *)pRVar5);
      if (cVar2 != '\0') {
        pAVar4 = (ArtifactUFO *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
        pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(param_1 + 0x38));
        ArtifactUFO::doRiseSingleZombie(pAVar4,(BoardEntity *)pRVar5);
        fVar7 = (float)PVZ_T();
        *(float *)(param_1 + 0x28) = fVar7 + *(float *)(param_1 + 0x2c);
      }
    }
    else if (*(int *)(param_1 + 0x40) == 0) {
      pAVar4 = (ArtifactUFO *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x30));
      ArtifactUFO::doRiseAllZombies(pAVar4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UFO::doRising() */

void __thiscall UFO::doRising(UFO *this)

{
  char cVar1;
  Effect_PopAnim *pEVar2;
  ArtifactUFO *pAVar3;
  ResourceInfo *pRVar4;
  undefined4 uVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x18) = uVar5;
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  std::string::string(asStack_10,"loop");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(pEVar2,asStack_10,0);
  std::string::~string(asStack_10);
  nop();
  if (*(int *)(this + 0x40) == 1) {
    pAVar3 = (ArtifactUFO *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
    cVar1 = ArtifactUFO::canBeTargeted(pAVar3,(BoardEntity *)pRVar4);
    if (cVar1 != '\0') {
      pAVar3 = (ArtifactUFO *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x38));
      ArtifactUFO::doRiseSingleZombie(pAVar3,(BoardEntity *)pRVar4);
      fVar6 = (float)PVZ_T();
      *(float *)(this + 0x28) = fVar6 + *(float *)(this + 0x2c);
    }
  }
  else if (*(int *)(this + 0x40) == 0) {
    pAVar3 = (ArtifactUFO *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
    ArtifactUFO::doRiseAllZombies(pAVar3);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UFO::setState(UFO::UFOState) */

void __thiscall UFO::setState(UFO *this,int param_2)

{
  int iVar1;
  UIWidget *this_00;
  PopAnimRig *pPVar2;
  Effect_PopAnim *pEVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x44) != param_2) {
    *(int *)(this + 0x44) = param_2;
    uVar4 = PVZ_T();
    iVar1 = *(int *)(this + 0x44);
    *(undefined4 *)(this + 0x18) = uVar4;
    if (iVar1 == 1) {
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      std::string::string(asStack_58,"start");
      Effect_PopAnim::PlaySingleAnimation(pEVar3,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
      doRising(this);
      fVar5 = *(float *)(this + 0x2c);
      fVar7 = *(float *)(this + 0x18);
      fVar6 = (float)PVZ_T();
      if (fVar5 + fVar7 < fVar6) {
        this_00 = (UIWidget *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
        pPVar2 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
        std::string::string(asStack_58,"end");
        ToolPacketData::GetProps();
        Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
        std::string::string(asStack_60,"onAnimStopped");
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
                   aRStack_68,asStack_60);
        PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
        std::string::~string(asStack_60);
        nop();
        Sexy::RtId::~RtId(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::string::~string(asStack_58);
        nop();
      }
    }
    else if (iVar1 == 2) {
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      std::string::string(asStack_58,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
    }
    else if (iVar1 == 0) {
      pEVar3 = (Effect_PopAnim *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
      std::string::string(asStack_58,"idle");
      PVZ_EOT();
      Effect_PopAnim::PlayLoopingAnimation(pEVar3,asStack_58,0);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UFO::setValues(UFO::RiseDes) */

void __thiscall UFO::setValues(UFO *this,undefined4 *param_2)

{
  SexyVector3 *this_00;
  RtWeakPtr<SpartanBambooMatrixSystem> *this_01;
  undefined4 uVar1;
  int iVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  long *plVar6;
  long lVar7;
  UIWidget *pUVar8;
  TimeChallengeEndLevelUI *this_02;
  PopAnimRig *this_03;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_04;
  SexyVector3 *pSVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [12];
  undefined4 local_44;
  Delegate4<std::string_const&,float,std::string_const&,std::string_const&> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  thunk_FUN_05475e00((string *)(this + 0x20),param_2 + 4);
  this_00 = (SexyVector3 *)(this + 0x48);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x38),(RtWeakPtrBase *)(param_2 + 2));
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x30),(RtWeakPtr *)(param_2 + 6));
  uVar1 = *param_2;
  iVar2 = param_2[8];
  *(int *)(this + 0x40) = iVar2;
  *(undefined4 *)(this + 0x2c) = uVar1;
  if (iVar2 == 1) {
    this_04 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    pSVar9 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_04);
    Sexy::SexyVector3::operator=(this_00,pSVar9);
    *(float *)(this + 0x50) = *(float *)(this + 0x50) + 200.0;
  }
  else if (iVar2 == 0) {
    Sexy::SexyVector3::operator=(this_00,(SexyVector3 *)&DAT_06ab1498);
  }
  this_01 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x10);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_01,(RtWeakPtrBase *)aRStack_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  pEVar3 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  GetPAMByName((string *)(this + 0x20));
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_50);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetKeepAlive(pSVar5,true);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar5,this_00,-1);
  pEVar3 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Effect_PopAnim::SetCentered(pEVar3,true);
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  (**(code **)(*plVar6 + 0x80))(0x3dcccccd);
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  FUN_037ccfcc(lVar7 + 0x1c);
  pUVar8 = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  this_02 = (TimeChallengeEndLevelUI *)UIWidget::GetAtlasImage(pUVar8);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onPopAnimCommand);
  Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>::
  Delegate4<UFO,void(UFO::*)(std::string_const&,float,std::string_const&,std::string_const&)>
            (aDStack_38,aRStack_50);
  TimeChallengeEndLevelUI::SetContinueCallBack(this_02,aDStack_38);
  if (*(int *)(this + 0x40) == 1) {
    pUVar8 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    UIWidget::GetAtlasImage(pUVar8);
    PopAnimRig::GetPAMColor();
    local_44 = 0;
    pUVar8 = (UIWidget *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    this_03 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar8);
    PopAnimRig::SetPAMColor(this_03,(Color *)aRStack_50);
  }
  setState(this,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UFO::onAnimStopped(std::string const&) */

void __thiscall UFO::onAnimStopped(UFO *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"end");
  if (!bVar1) {
    return;
  }
  setState(this,2);
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x037ce9a4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* UFO::update() */

void __thiscall UFO::update(UFO *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  RtMixedPtr<Sexy::Image> *this_01;
  char cVar1;
  bool bVar2;
  int iVar3;
  StandaloneEffect *this_02;
  long *plVar4;
  UIWidget *pUVar5;
  PopAnimRig *this_03;
  long lVar6;
  Zombie *pZVar7;
  RtObject *this_04;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *p_Var8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 extraout_var;
  undefined4 uVar14;
  float fVar15;
  double local_20;
  float local_18 [3];
  int local_c;
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  this_02 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  StandaloneEffect::SetBoardSpaceOrigin(this_02,(SexyVector3 *)(this + 0x48),-1);
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar4 + 0x80))(*(undefined4 *)(this + 0x54));
  if (*(int *)(this + 0x40) == 0) {
    iVar3 = *(int *)(this + 0x44);
    if (iVar3 == 1) {
      fVar15 = *(float *)(this + 0x2c);
      fVar11 = *(float *)(this + 0x18);
      fVar10 = (float)PVZ_T();
      if (fVar15 + fVar11 < fVar10) {
        setState(this,2);
      }
      goto LAB_037ce70c;
    }
    if (iVar3 != 2) {
      if (iVar3 != 0) goto LAB_037ce70c;
      auVar13 = PVZ_T();
      fVar15 = (auVar13._0_4_ - *(float *)(this + 0x18)) * 0.33333334;
      if (fVar15 < 0.6) {
        local_18[0] = DAT_06ab1498 + 1000.0;
        fVar11 = CurveLerp<float>(0,0x3f19999a,fVar15,&DAT_06ab1498,local_18,2);
        fVar10 = DAT_06ab149c;
        *(float *)(this + 0x48) = fVar11;
        uVar14 = NEON_fminnm(-0.05 / (fVar15 * 1.6666666 + 0.1) + 1.0,0x3f800000);
        uVar14 = FUN_037cce64(fVar10,fVar10 + 76.0,uVar14);
        *(undefined4 *)(this + 0x4c) = uVar14;
        if (0.9 <= fVar15) goto LAB_037ce70c;
      }
      else {
        if (0.9 <= fVar15) {
          if (fVar15 < 1.0) {
            local_20 = 458.0;
            local_18[0] = 0.0;
            local_18[1] = 3.9765625;
            dVar12 = CurveLerp<double>(auVar13,0x3f800000,fVar15,&local_20,local_18,1);
            *(float *)(this + 0x48) = (float)dVar12;
            goto LAB_037ce70c;
          }
          goto LAB_037ce7d4;
        }
        local_20 = 1000.0;
        local_18[0] = 0.0;
        local_18[1] = 3.9472656;
        dVar12 = CurveLerp<double>(auVar13,0x3f666666,fVar15,&local_20,local_18,2);
        *(float *)(this + 0x48) = (float)dVar12;
        iVar3 = BoardTransforms::GridToBoardSpaceYUnbounded(-1);
        *(float *)(this + 0x4c) = (float)iVar3;
      }
      local_18[0] = 0.8;
      fVar15 = CurveLerp<float>(0,0x3f666666,fVar15,&DAT_05751a58,local_18,2);
      *(float *)(this + 0x54) = fVar15;
      goto LAB_037ce70c;
    }
    fVar15 = (float)PVZ_T();
    if (fVar15 - *(float *)(this + 0x18) < 1.0) {
      local_20 = (double)CONCAT44(local_20._4_4_,0x3f4ccccd);
      local_18[0] = 1.3;
      fVar15 = CurveLerp<float>(0,&local_20,local_18,1);
      *(float *)(this + 0x54) = fVar15;
      goto LAB_037ce70c;
    }
  }
  else {
    iVar3 = *(int *)(this + 0x44);
    *(undefined4 *)(this + 0x54) = 0x3dcccccd;
    if (iVar3 == 1) {
      fVar15 = *(float *)(this + 0x2c);
      fVar11 = *(float *)(this + 0x18);
      fVar10 = (float)PVZ_T();
      if (fVar15 + fVar11 < fVar10) {
        setState(this,2);
      }
      this_01 = (RtMixedPtr<Sexy::Image> *)(this + 0x38);
      cVar1 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_01);
      if ((cVar1 == '\0') &&
         (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)this_01), bVar2)) {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
        pZVar7 = (Zombie *)FUN_037cce0c(*(undefined8 *)(lVar6 + 0x40));
        this_04 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_01)
        ;
        Sexy::RtObject::Cast<Zombie>(this_04);
        lVar6 = ArtifactUFOSubSystem::findRisedZombie(pZVar7);
        if (lVar6 != 0) {
          p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          puVar9 = (undefined4 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(p_Var8);
          *(undefined4 *)(this + 0x48) = *puVar9;
          p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          lVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var8);
          *(undefined4 *)(this + 0x4c) = *(undefined4 *)(lVar6 + 4);
          p_Var8 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
          lVar6 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost(p_Var8);
          *(float *)(this + 0x50) = *(float *)(lVar6 + 8) + 200.0;
        }
      }
      goto LAB_037ce70c;
    }
    if (iVar3 != 2) {
      if (iVar3 != 0) goto LAB_037ce70c;
      fVar15 = (float)PVZ_T();
      fVar10 = *(float *)(this + 0x18);
      local_18[0] = 3.57331e-43;
      local_20 = (double)((ulong)local_20 & 0xffffffff00000000);
      iVar3 = CurveLerp<int>(0,0x3f800000,fVar15 - fVar10,&local_20,(Color *)local_18,2);
      pUVar5 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      UIWidget::GetAtlasImage(pUVar5);
      PopAnimRig::GetPAMColor();
      local_c = (int)(float)iVar3;
      pUVar5 = (UIWidget *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      this_03 = (PopAnimRig *)UIWidget::GetAtlasImage(pUVar5);
      PopAnimRig::SetPAMColor(this_03,(Color *)local_18);
      if (fVar15 - fVar10 <= 1.0) goto LAB_037ce70c;
LAB_037ce7d4:
      setState(this,1);
      goto LAB_037ce70c;
    }
    auVar13 = PVZ_T();
    fVar15 = auVar13._0_4_ - *(float *)(this + 0x18);
    if (fVar15 < 1.0) {
      local_20 = (double)*(float *)(this + 0x48);
      local_18[0] = 0.0;
      local_18[1] = 4.5859375;
      dVar12 = CurveLerp<double>(auVar13,0x3f800000,fVar15,&local_20,local_18,1);
      local_20 = (double)*(float *)(this + 0x4c);
      *(float *)(this + 0x48) = (float)dVar12;
      local_18[0] = 0.0;
      local_18[1] = -3.390625;
      auVar13._8_8_ = extraout_var;
      auVar13._0_8_ = dVar12;
      dVar12 = CurveLerp<double>(auVar13,0x3f800000,fVar15,&local_20,local_18,0xd);
      *(float *)(this + 0x4c) = (float)dVar12;
      goto LAB_037ce70c;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_037ce70c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

