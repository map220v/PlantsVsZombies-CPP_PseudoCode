// Class: ZombossSkyCitySandstormActionHandler


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySandstormActionHandler::StaticClassInit() */

void ZombossSkyCitySandstormActionHandler::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombossSkyCitySandstormActionHandler");
    (*pcVar2)(plVar1,asStack_10,FUN_0472e6b8,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombossSkyCitySandstormActionHandler::StaticGetClass() */

long * ZombossSkyCitySandstormActionHandler::StaticGetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCitySandstormActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCitySandstormActionHandler::GetClass() const */

long * ZombossSkyCitySandstormActionHandler::GetClass(void)

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
  uVar2 = ZombieActionHandler::StaticGetClass();
  (*pcVar3)(plVar1,"ZombossSkyCitySandstormActionHandler",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombossSkyCitySandstormActionHandler::ZombossSkyCitySandstormActionHandler() */

void __thiscall
ZombossSkyCitySandstormActionHandler::ZombossSkyCitySandstormActionHandler
          (ZombossSkyCitySandstormActionHandler *this)

{
  ZombieActionHandler::ZombieActionHandler((ZombieActionHandler *)this);
  *(undefined ***)this = &PTR_GetClass_068c3100;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  return;
}


/* ZombossSkyCitySandstormActionHandler::StaticNew() */

ZombossSkyCitySandstormActionHandler * ZombossSkyCitySandstormActionHandler::StaticNew(void)

{
  ZombossSkyCitySandstormActionHandler *this;
  
  this = ::operator_new(0x40);
  ZombossSkyCitySandstormActionHandler(this);
  return this;
}


/* ZombossSkyCitySandstormActionHandler::onSandstormEnded(std::string const&) */

void ZombossSkyCitySandstormActionHandler::onSandstormEnded(string *param_1)

{
  bool bVar1;
  long lVar2;
  RtWeakPtr *this;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  long *plVar4;
  RtWeakPtrBase *this_01;
  ulong uVar5;
  undefined8 uVar6;
  
  uVar5 = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = FUN_04726004(uVar6,*(undefined8 *)(param_1 + 0x30));
  if (lVar2 != 0) {
    do {
      this = (RtWeakPtr *)FUN_04726010(uVar6,uVar5);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
      if (bVar1) {
        this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)
                  FUN_04726010(*(undefined8 *)(param_1 + 0x28),uVar5);
        plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        (**(code **)(*plVar4 + 0x48))();
        this_01 = (RtWeakPtrBase *)FUN_04726010(*(undefined8 *)(param_1 + 0x28),uVar5);
        Sexy::RtWeakPtrBase::ClearId(this_01);
      }
      uVar5 = uVar5 + 1;
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = FUN_04726004(uVar6,*(undefined8 *)(param_1 + 0x30));
    } while (uVar5 < uVar3);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (param_1 + 0x28));
  ZombieActionHandler::markActionDone((ZombieActionHandler *)param_1);
  return;
}


/* ZombossSkyCitySandstormActionHandler::~ZombossSkyCitySandstormActionHandler() */

void __thiscall
ZombossSkyCitySandstormActionHandler::~ZombossSkyCitySandstormActionHandler
          (ZombossSkyCitySandstormActionHandler *this)

{
  *(undefined ***)this = &PTR_GetClass_068c3100;
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  ~vector((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *
          )(this + 0x28));
  ZombieActionHandler::~ZombieActionHandler((ZombieActionHandler *)this);
  return;
}


/* ZombossSkyCitySandstormActionHandler::~ZombossSkyCitySandstormActionHandler() */

void __thiscall
ZombossSkyCitySandstormActionHandler::~ZombossSkyCitySandstormActionHandler
          (ZombossSkyCitySandstormActionHandler *this)

{
  ~ZombossSkyCitySandstormActionHandler(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombossSkyCitySandstormActionHandler::onStartAction() */

void __thiscall
ZombossSkyCitySandstormActionHandler::onStartAction(ZombossSkyCitySandstormActionHandler *this)

{
  bool bVar1;
  RtObject *this_00;
  ZombieZombossMech *this_01;
  ZombieHydraHeadAnimRig *pZVar2;
  long lVar3;
  RtWeakPtr *this_02;
  ulong uVar4;
  Effect_PopAnim *this_03;
  SexyVector3 *pSVar5;
  ResourceInfo *pRVar6;
  char *pcVar7;
  RtWeakPtr<Sexy::ResourceInfo> *this_04;
  long *plVar8;
  RtWeakPtrBase *this_05;
  ulong uVar9;
  undefined8 uVar10;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)ZombieActionHandler::getZombie((ZombieActionHandler *)this);
  uVar9 = 0;
  this_01 = Sexy::RtObject::Cast<ZombieZombossMech>(this_00);
  pZVar2 = Zombie::GetAnimRig<ZombieHydraHeadAnimRig>((Zombie *)this_01);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onSandstormEnded");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  ZombieAnimRig_ZombossMech_SkyCity::PlaySandstorm
            ((ZombieAnimRig_ZombossMech_SkyCity *)pZVar2,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  uVar10 = *(undefined8 *)(this + 0x28);
  lVar3 = FUN_04726004(uVar10,*(undefined8 *)(this + 0x30));
  if (lVar3 != 0) {
    do {
      this_02 = (RtWeakPtr *)FUN_04726010(uVar10,uVar9);
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
      if (bVar1) {
        this_04 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04726010(*(undefined8 *)(this + 0x28),uVar9);
        plVar8 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_04);
        (**(code **)(*plVar8 + 0x48))();
        this_05 = (RtWeakPtrBase *)FUN_04726010(*(undefined8 *)(this + 0x28),uVar9);
        Sexy::RtWeakPtrBase::ClearId(this_05);
      }
      uVar9 = uVar9 + 1;
      uVar10 = *(undefined8 *)(this + 0x28);
      uVar4 = FUN_04726004(uVar10,*(undefined8 *)(this + 0x30));
    } while (uVar9 < uVar4);
  }
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  clear((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>> *)
        (this + 0x28));
  this_03 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pSVar5 = (SexyVector3 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_01);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_03,pSVar5,900000);
  std::string::string((string *)aRStack_60,"POPANIM_EFFECTS_ZOMBOSS_SKYCITY_CLOUD");
  GetPAMByName((string *)aRStack_60);
  pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_58);
  Effect_PopAnim::CreatePopAnimRig(this_03,(PopAnim *)pRVar6,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  std::string::~string((string *)aRStack_60);
  nop();
  std::string::string(asStack_58,"feng01");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_03,asStack_58,0);
  std::string::~string(asStack_58);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_58,(RtWeakPtrBase *)aRStack_60);
  std::vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>::
  push_back((vector<Sexy::RtWeakPtr<Effect_PopAnim>,std::allocator<Sexy::RtWeakPtr<Effect_PopAnim>>>
             *)(this + 0x28),(RtWeakPtr *)asStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
  AudioMgr::SendEvent(pcVar7,"Play_Zomb_SkyCity_Zomboss_Attack_SandStorm");
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

