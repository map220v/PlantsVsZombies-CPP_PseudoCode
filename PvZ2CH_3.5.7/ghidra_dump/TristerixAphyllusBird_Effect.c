// Class: TristerixAphyllusBird_Effect


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird_Effect::onAnimStopped(std::string const&) */

void TristerixAphyllusBird_Effect::onAnimStopped(string *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  PopAnimRig *pPVar5;
  undefined4 uVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long lStack_8;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  lStack_8 = ___stack_chk_guard;
  *(int *)(param_1 + 0xc0) = iVar1 + 1;
  iVar2 = AnimationSequence::GetEntryCount((AnimationSequence *)(param_1 + 0xa8));
  if (iVar1 + 1 < iVar2) {
    lVar3 = AnimationSequence::GetEntry
                      ((AnimationSequence *)(param_1 + 0xa8),*(int *)(param_1 + 0xc0));
    if (*(float *)(lVar3 + 0xc) <= 0.0) {
      pPVar5 = (PopAnimRig *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0));
      uVar6 = *(undefined4 *)(lVar3 + 8);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStopped");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aDStack_50,aRStack_60,
                 asStack_58);
      PopAnimRig::PlayAndStop
                (pPVar5,lVar3,uVar6,
                 (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aDStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      lVar4 = FUN_05474184();
      if (lVar4 != 0) {
        pPVar5 = (PopAnimRig *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa0));
        uVar6 = *(undefined4 *)(lVar3 + 8);
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
        PopAnimRig::PlayAndContinue(pPVar5,lVar3,uVar6,aDStack_50);
      }
    }
    uVar6 = PVZ_T();
    *(undefined4 *)(param_1 + 0xc4) = uVar6;
  }
  else {
    StandaloneEffect::triggerCompletion((StandaloneEffect *)param_1);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird_Effect::StaticClassInit() */

void TristerixAphyllusBird_Effect::StaticClassInit(void)

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
    std::string::string(asStack_10,"TristerixAphyllusBird_Effect");
    (*pcVar2)(plVar1,asStack_10,FUN_042a5f04,0x120,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* TristerixAphyllusBird_Effect::StaticGetClass() */

long * TristerixAphyllusBird_Effect::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"TristerixAphyllusBird_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TristerixAphyllusBird_Effect::GetClass() const */

long * TristerixAphyllusBird_Effect::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"TristerixAphyllusBird_Effect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* TristerixAphyllusBird_Effect::SetTargetZombie(Sexy::RtWeakPtr<Zombie>, bool, bool, float, float)
    */

void __thiscall
TristerixAphyllusBird_Effect::SetTargetZombie
          (undefined4 param_1,undefined4 param_2,TristerixAphyllusBird_Effect *this,
          RtWeakPtr *param_4,TristerixAphyllusBird_Effect param_5,
          TristerixAphyllusBird_Effect param_6)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),param_4);
  this[0x109] = param_5;
  this[0x10a] = param_6;
  *(undefined4 *)(this + 0x10c) = param_1;
  *(undefined4 *)(this + 0x110) = param_2;
  return;
}


/* TristerixAphyllusBird_Effect::~TristerixAphyllusBird_Effect() */

void __thiscall
TristerixAphyllusBird_Effect::~TristerixAphyllusBird_Effect(TristerixAphyllusBird_Effect *this)

{
  *(undefined ***)this = &PTR_GetClass_0682a950;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* TristerixAphyllusBird_Effect::~TristerixAphyllusBird_Effect() */

void __thiscall
TristerixAphyllusBird_Effect::~TristerixAphyllusBird_Effect(TristerixAphyllusBird_Effect *this)

{
  ~TristerixAphyllusBird_Effect(this);
  AK::FreeHook(this);
  return;
}


/* TristerixAphyllusBird_Effect::TristerixAphyllusBird_Effect() */

void __thiscall
TristerixAphyllusBird_Effect::TristerixAphyllusBird_Effect(TristerixAphyllusBird_Effect *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0682a950;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  return;
}


/* TristerixAphyllusBird_Effect::StaticNew() */

TristerixAphyllusBird_Effect * TristerixAphyllusBird_Effect::StaticNew(void)

{
  TristerixAphyllusBird_Effect *this;
  
  this = ::operator_new(0x120);
  TristerixAphyllusBird_Effect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TristerixAphyllusBird_Effect::OnAnimCommand(std::string const&, std::string const&) */

void TristerixAphyllusBird_Effect::OnAnimCommand(string *param_1,string *param_2)

{
  RtMixedPtrBase *this;
  undefined *this_00;
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  ResourceInfo *pRVar4;
  string *psVar5;
  ulong uVar6;
  Zombie *pZVar7;
  string *psVar8;
  long *plVar9;
  RealObject *pRVar10;
  ulong uVar11;
  code *pcVar12;
  DamageInfo *pDVar13;
  string asStack_80 [8];
  Point aPStack_78 [8];
  int local_70;
  int local_6c;
  RtName aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"explode");
  if (!bVar1) goto LAB_042a8ca8;
  this = (RtMixedPtrBase *)(param_1 + 0x118);
  cVar2 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar2 == '\0') goto LAB_042a8ca8;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_80,"PlantTristerixAphyllusDefault");
  Sexy::ToWString(asStack_80);
  Sexy::RtName::RtName(aRStack_68,(wstring *)aPStack_78);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>((RtWeakPtr *)&local_70,uVar3,5,aRStack_68);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_70);
  Sexy::RtName::~RtName(aRStack_68);
  FUN_05476c50(aPStack_78);
  std::string::~string(asStack_80);
  nop();
  if (pRVar4 == (ResourceInfo *)0x0) {
LAB_042a8f34:
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar9 + 0x260))();
  }
  else {
    uVar3 = *(undefined8 *)(pRVar4 + 0x318);
    bVar1 = false;
    uVar11 = 0;
    while (uVar6 = FUN_042a536c(uVar3,*(undefined8 *)(pRVar4 + 800)), uVar11 < uVar6) {
      pZVar7 = (Zombie *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
      psVar8 = (string *)Zombie::GetTypeName(pZVar7);
      uVar3 = *(undefined8 *)(pRVar4 + 0x318);
      uVar6 = uVar11 + 1;
      psVar5 = (string *)FUN_042a5378(uVar3,uVar11);
      cVar2 = std::operator==(psVar8,psVar5);
      uVar11 = uVar6;
      if (cVar2 != '\0') {
        bVar1 = true;
      }
    }
    if (!bVar1) goto LAB_042a8f34;
  }
  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::SetIsControlled(pZVar7,false);
  pZVar7 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  Zombie::EndCondition(pZVar7,0x18);
  psVar8 = (string *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
  ;
  std::string::string((string *)aRStack_68,"TristerixAphyllusMark");
  Zombie::DelTag(psVar8);
  std::string::~string((string *)aRStack_68);
  nop();
  if (param_1[0x109] == (string)0x0) {
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
                    /* WARNING: Load size is inaccurate */
    pDVar13._0_4_ = *(DamageInfo **)(param_1 + 0x110);
    pcVar12 = *(code **)(*plVar9 + 0x110);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo(pDVar13._0_4_,local_70,local_6c,aRStack_68,0,aPStack_78,0);
    (*pcVar12)(plVar9,aRStack_68);
    DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  }
  else {
    plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    cVar2 = (**(code **)(*plVar9 + 0x328))();
    if (cVar2 == '\0') {
      plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this);
      cVar2 = (**(code **)(*plVar9 + 0x330))();
      if (cVar2 == '\0') {
        pZVar7 = (Zombie *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
        cVar2 = Zombie::HasHead(pZVar7);
        if (cVar2 != '\0') {
          pZVar7 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Zombie::SetFacing(pZVar7,1);
          uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          pZVar7 = (Zombie *)PVZ_EOT();
          Zombie::ApplyCondition(pZVar7,0,uVar3,0x19,1);
          plVar9 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)this);
          (**(code **)(*plVar9 + 0x2f0))();
          this_00 = gMessageRouter;
          pZVar7 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          MessageRouter::Broadcast<Zombie*,Zombie*>
                    ((MessageRouter *)this_00,Message::ZombieHypnotized,pZVar7);
          pRVar10 = (RealObject *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          RealObject::JoinTeam(pRVar10,1);
          pZVar7 = (Zombie *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
          Zombie::Heal(pZVar7);
        }
      }
    }
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  BoardEntity::CalcGridPosition();
  Sexy::Point::Point((Point *)aRStack_68,local_70,local_6c);
  FUN_042a8a64(*(undefined4 *)(param_1 + 0x10c),aRStack_68,param_1[0x10a]);
  Sexy::Point::Point((Point *)aRStack_68,local_70 + -1,local_6c);
  FUN_042a8a64(*(undefined4 *)(param_1 + 0x10c),aRStack_68,param_1[0x10a]);
  Sexy::Point::Point((Point *)aRStack_68,local_70,local_6c + -1);
  FUN_042a8a64(*(undefined4 *)(param_1 + 0x10c),aRStack_68,param_1[0x10a]);
  Sexy::Point::Point((Point *)aRStack_68,local_70 + 1,local_6c);
  FUN_042a8a64(*(undefined4 *)(param_1 + 0x10c),aRStack_68,param_1[0x10a]);
  Sexy::Point::Point((Point *)aRStack_68,local_70,local_6c + 1);
  FUN_042a8a64(*(undefined4 *)(param_1 + 0x10c),aRStack_68,param_1[0x10a]);
LAB_042a8ca8:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

