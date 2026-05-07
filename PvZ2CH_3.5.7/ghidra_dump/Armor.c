// Class: Armor


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Armor::StaticClassInit() */

void Armor::StaticClassInit(void)

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
    std::string::string(asStack_10,"Armor");
    (*pcVar2)(plVar1,asStack_10,FUN_03c52d14,0x40,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Armor::StaticGetClass() */

long * Armor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Armor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Armor::GetClass() const */

long * Armor::GetClass(void)

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
  (*pcVar3)(plVar1,"Armor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Armor::DestroyArmor() */

void __thiscall Armor::DestroyArmor(Armor *this)

{
  this[0x34] = (Armor)0x1;
  (**(code **)(*(long *)this + 0x88))();
  return;
}


/* Armor::onPostLoad() */

void __thiscall Armor::onPostLoad(Armor *this)

{
  undefined8 uVar1;
  
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* Armor::getProps() const */

void __thiscall Armor::getProps(Armor *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x10) != 0) {
    return;
  }
  uVar1 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


/* Armor::SetPropertySheet(Sexy::RtWeakPtr<ArmorPropertySheet>) */

void __thiscall Armor::SetPropertySheet(Armor *this,RtWeakPtr *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x18),param_2);
  uVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  *(undefined8 *)(this + 0x10) = uVar2;
  lVar3 = getProps(this);
  uVar1 = *(undefined4 *)(lVar3 + 0x20);
  *(undefined4 *)(this + 0x28) = uVar1;
  *(undefined4 *)(this + 0x2c) = uVar1;
  return;
}


/* Armor::~Armor() */

void __thiscall Armor::~Armor(Armor *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR_GetClass_06753360;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  GameObject::~GameObject((GameObject *)this);
  return;
}


/* Armor::~Armor() */

void __thiscall Armor::~Armor(Armor *this)

{
  ~Armor(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Armor::InitializeArmor(Sexy::RtWeakPtr<ArmorPropertySheet>, Sexy::RtWeakPtr<Zombie>) */

void __thiscall Armor::InitializeArmor(Armor *this,RtWeakPtrBase *param_2,RtWeakPtr *param_3)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x20),param_3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_2);
  SetPropertySheet(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  (**(code **)(*(long *)this + 0x88))(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Armor::ReinitializeFromPropertySheet() */

void __thiscall Armor::ReinitializeFromPropertySheet(Armor *this)

{
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)(this + 0x18));
  SetPropertySheet(this,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Armor::Armor() */

void __thiscall Armor::Armor(Armor *this)

{
  GameObject::GameObject((GameObject *)this);
  *(undefined ***)this = &PTR_GetClass_06753360;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x20));
  this[0x34] = (Armor)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* Armor::StaticNew() */

Armor * Armor::StaticNew(void)

{
  Armor *this;
  
  this = ::operator_new(0x40);
  Armor(this);
  return this;
}


/* Armor::updateDamageState() */

void __thiscall Armor::updateDamageState(Armor *this)

{
  bool bVar1;
  long lVar2;
  Zombie *this_00;
  PopAnimRig *this_01;
  string *psVar3;
  ulong uVar4;
  float *pfVar5;
  int iVar6;
  ulong uVar7;
  float fVar8;
  
  lVar2 = getProps(this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(lVar2 + 0x24),2);
  if (bVar1) {
    iVar6 = -1;
    if (this[0x34] != (Armor)0x0) goto LAB_03c52450;
    uVar7 = 0;
    iVar6 = 0;
    while( true ) {
      lVar2 = getProps(this);
      uVar4 = FUN_03c51970(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48));
      if (uVar4 <= uVar7) break;
      fVar8 = *(float *)(this + 0x28);
      lVar2 = getProps(this);
      uVar4 = uVar7 + 1;
      pfVar5 = (float *)FUN_03c5197c(*(undefined8 *)(lVar2 + 0x40),uVar7);
      uVar7 = uVar4;
      if (fVar8 < *pfVar5) {
        iVar6 = iVar6 + 1;
      }
    }
  }
  else {
    iVar6 = 0;
  }
  if (this[0x34] != (Armor)0x0) {
    iVar6 = -1;
  }
LAB_03c52450:
  if (*(int *)(this + 0x30) != iVar6) {
    *(int *)(this + 0x30) = iVar6;
    uVar7 = 0;
    while( true ) {
      lVar2 = getProps(this);
      uVar4 = FUN_03c5195c(*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
      if (uVar4 <= uVar7) break;
      this_00 = (Zombie *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20));
      this_01 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
      lVar2 = getProps(this);
      psVar3 = (string *)FUN_03c51968(*(undefined8 *)(lVar2 + 0x28),uVar7);
      PopAnimRig::SetLayerVisibility(this_01,psVar3,*(int *)(this + 0x30) == (int)uVar7);
      uVar7 = uVar7 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Armor::DropArmor(DamageTypeFlags) */

void __thiscall Armor::DropArmor(Armor *this,undefined8 param_2)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  long lVar5;
  RealObject *this_01;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  Zombie *pZVar9;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  ZombieParticle *this_03;
  code *pcVar10;
  undefined8 uVar11;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x34] != (Armor)0x0) {
    this_03 = (ZombieParticle *)0x0;
    goto LAB_03c52b80;
  }
  lVar5 = getProps(this);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x20);
  bVar2 = TestFlag<VaseFlags>(*(undefined4 *)(lVar5 + 0x24),1);
  this_01 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  RealObject::PlayPositionalSound(this_01,(string *)(lVar5 + 0x78),_FUN_03c52d10);
  bVar3 = TestFlag<VaseFlags>(*(undefined4 *)(lVar5 + 0x24),4);
  if (bVar3) {
    std::string::string(asStack_10,"");
    nop();
    uVar11 = *(undefined8 *)(lVar5 + 0x58);
    lVar7 = FUN_03c5195c(uVar11,*(undefined8 *)(lVar5 + 0x60));
    if (lVar7 != 0) {
      uVar11 = FUN_03c51968(uVar11,(long)*(int *)(this + 0x30));
      thunk_FUN_05475e00(asStack_10,uVar11);
    }
    cVar4 = FUN_0547419c(asStack_10);
    if (cVar4 == '\0') {
LAB_03c52c4c:
      pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      this_03 = (ZombieParticle *)
                SpawnZombieParticle(pZVar9,(vector *)(lVar5 + 0x28),asStack_10,0.75);
      if (this_03 != (ZombieParticle *)0x0) {
        ZombieParticle::SetAttribute(this_03,2,1);
        ZombieParticle::SetAttribute(this_03,4,bVar2);
        uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        cVar4 = Zombie::HasCondition(uVar11,0x41);
        if (cVar4 != '\0') {
          pZVar9 = (Zombie *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(pZVar9);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          ZombieParticle::SetScale(this_03,*(float *)(lVar5 + 0x1c4));
        }
      }
      puVar1 = gMessageRouter;
      uVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      MessageRouter::Broadcast<Zombie*,long,Zombie*,DamageTypeFlags>
                ((MessageRouter *)puVar1,Message::ZombieDropArmor,uVar11,param_2);
    }
    else {
      uVar11 = *(undefined8 *)(lVar5 + 0x28);
      uVar8 = FUN_03c5195c(uVar11,*(undefined8 *)(lVar5 + 0x30));
      if ((ulong)(long)*(int *)(this + 0x30) < uVar8) {
        uVar11 = FUN_03c51968(uVar11);
        thunk_FUN_05475e00(asStack_10,uVar11);
        cVar4 = FUN_0547419c(asStack_10);
        if (cVar4 == '\0') goto LAB_03c52c4c;
      }
      this_03 = (ZombieParticle *)0x0;
    }
    std::string::~string(asStack_10);
  }
  else {
    this_03 = (ZombieParticle *)0x0;
  }
  this[0x34] = (Armor)0x1;
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  pcVar10 = *(code **)(*plVar6 + 0x350);
  lVar5 = getProps(this);
  FUN_05475d88(asStack_10,lVar5 + 0x18);
  (*pcVar10)(plVar6,asStack_10);
  std::string::~string(asStack_10);
  (**(code **)(*(long *)this + 0x88))(this);
LAB_03c52b80:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_03);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Armor::TakeDamage(DamageInfo const&) */

void Armor::TakeDamage(DamageInfo *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  bool bVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  RealObject *this_00;
  BoardEntity *this_01;
  DamageInfo *in_x1;
  DamageInfo *in_x8;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  string asStack_d0 [8];
  RtObject *local_c8;
  float local_c0;
  undefined8 local_b8 [10];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1[0x34] != (DamageInfo)0x0) {
    DamageInfo::DamageInfo(in_x8,in_x1);
    goto LAB_03c53228;
  }
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x20);
  DamageInfo::DamageInfo((DamageInfo *)&local_c8);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  pcVar6 = *(code **)(*plVar3 + 0x360);
  lVar4 = getProps((Armor *)param_1);
  FUN_05475d88(asStack_d0,lVar4 + 0x18);
  (*pcVar6)(aDStack_68,plVar3);
  DamageInfo::operator=((DamageInfo *)&local_c8,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  std::string::~string(asStack_d0);
  uVar5 = local_b8[0];
  bVar1 = TestFlag<DamageTypeFlags>(local_b8[0],8);
  if (bVar1) {
LAB_03c5335c:
    DamageInfo::DamageInfo(in_x8,(DamageInfo *)&local_c8);
  }
  else {
    bVar1 = TestFlag<DamageTypeFlags>(uVar5,0x10);
    if (!bVar1) {
      (**(code **)(*(long *)param_1 + 0x90))(param_1,(DamageInfo *)&local_c8);
      uVar5 = local_b8[0];
      bVar1 = TestFlag<DamageTypeFlags>(local_b8[0],0x10000);
      if ((!bVar1) &&
         ((local_c8 == (RtObject *)0x0 ||
          (bVar1 = Sexy::RtObject::IsA<Zombie>(local_c8), uVar5 = local_b8[0], !bVar1)))) {
        lVar4 = getProps((Armor *)param_1);
        cVar2 = FUN_0547419c(lVar4 + 0x70);
        uVar5 = local_b8[0];
        if (cVar2 == '\0') {
          this_00 = (RealObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          lVar4 = getProps((Armor *)param_1);
          RealObject::PlayPositionalSound(this_00,(string *)(lVar4 + 0x70),0.1);
          this_01 = (BoardEntity *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          BoardEntity::SetHasPlayedImpactSound(this_01,true);
          uVar5 = local_b8[0];
        }
      }
      bVar1 = TestFlag<DamageTypeFlags>(uVar5,2);
      if (bVar1) {
        fVar7 = 0.0;
        *(undefined4 *)(param_1 + 0x28) = 0;
      }
      else {
        fVar7 = *(float *)(param_1 + 0x28);
      }
      fVar8 = *(float *)(in_x1 + 8);
      lVar4 = getProps((Armor *)param_1);
      bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(lVar4 + 0x24),0x80);
      if (!bVar1) {
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) - local_c0;
      }
      DamageInfo::operator=((DamageInfo *)&local_c8,in_x1);
      lVar4 = getProps((Armor *)param_1);
      bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(lVar4 + 0x24),8);
      if (!bVar1) {
        local_c0 = (float)ClampFloat(fVar8 - fVar7,0.0,*(float *)(in_x1 + 8));
      }
      if (*(float *)(param_1 + 0x28) <= 0.0) {
        (**(code **)(*(long *)param_1 + 0x80))(param_1,*(undefined8 *)(in_x1 + 0x10));
        param_1[0x34] = (DamageInfo)0x1;
      }
      (**(code **)(*(long *)param_1 + 0x88))(param_1);
      goto LAB_03c5335c;
    }
    SetFlag<DamageTypeFlags>(local_b8,0x10,0);
    DamageInfo::DamageInfo(in_x8,(DamageInfo *)&local_c8);
  }
  DamageInfo::~DamageInfo((DamageInfo *)&local_c8);
LAB_03c53228:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Armor::GetArmorFlags() const */

int __thiscall Armor::GetArmorFlags(Armor *this)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x38);
  if (iVar2 == 0) {
    lVar1 = getProps(this);
    iVar2 = *(int *)(lVar1 + 0x24);
  }
  return iVar2;
}


/* Armor::GetArmorType() const */

void Armor::GetArmorType(void)

{
  Armor *in_x0;
  
  getProps(in_x0);
  FUN_05475d88();
  return;
}


/* Armor::IsDecorativePassthrough() */

bool __thiscall Armor::IsDecorativePassthrough(Armor *this)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = getProps(this);
  bVar1 = TestFlag<VaseFlags>(*(undefined4 *)(lVar2 + 0x24),8);
  return bVar1;
}

