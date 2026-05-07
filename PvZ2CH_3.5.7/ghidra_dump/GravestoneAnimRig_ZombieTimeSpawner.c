// Class: GravestoneAnimRig_ZombieTimeSpawner


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::StaticClassInit() */

void GravestoneAnimRig_ZombieTimeSpawner::StaticClassInit(void)

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
    std::string::string(asStack_10,"GravestoneAnimRig_ZombieTimeSpawner");
    (*pcVar2)(plVar1,asStack_10,FUN_03d63d48,0x228,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GravestoneAnimRig_ZombieTimeSpawner::StaticGetClass() */

long * GravestoneAnimRig_ZombieTimeSpawner::StaticGetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GravestoneAnimRig_ZombieTimeSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GravestoneAnimRig_ZombieTimeSpawner::GetClass() const */

long * GravestoneAnimRig_ZombieTimeSpawner::GetClass(void)

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
  uVar2 = GravestoneAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"GravestoneAnimRig_ZombieTimeSpawner",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner() */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner
          (GravestoneAnimRig_ZombieTimeSpawner *this)

{
  *(undefined ***)this = &PTR_GetClass_0676d290;
  *(undefined ***)(this + 0x10) = &PTR__GravestoneAnimRig_ZombieTimeSpawner_0676d3b8;
  GravestoneAnimRig::~GravestoneAnimRig((GravestoneAnimRig *)this);
  return;
}


/* non-virtual thunk to GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner()
    */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner
          (GravestoneAnimRig_ZombieTimeSpawner *this)

{
  ~GravestoneAnimRig_ZombieTimeSpawner(this + -0x10);
  return;
}


/* GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner() */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner
          (GravestoneAnimRig_ZombieTimeSpawner *this)

{
  ~GravestoneAnimRig_ZombieTimeSpawner(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner()
    */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::~GravestoneAnimRig_ZombieTimeSpawner
          (GravestoneAnimRig_ZombieTimeSpawner *this)

{
  ~GravestoneAnimRig_ZombieTimeSpawner(this + -0x10);
  return;
}


/* GravestoneAnimRig_ZombieTimeSpawner::GravestoneAnimRig_ZombieTimeSpawner() */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::GravestoneAnimRig_ZombieTimeSpawner
          (GravestoneAnimRig_ZombieTimeSpawner *this)

{
  GravestoneAnimRig::GravestoneAnimRig((GravestoneAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0xffffffff;
  *(undefined ***)this = &PTR_GetClass_0676d290;
  *(undefined ***)(this + 0x10) = &PTR__GravestoneAnimRig_ZombieTimeSpawner_0676d3b8;
  this[0x220] = (GravestoneAnimRig_ZombieTimeSpawner)0x0;
  *(undefined4 *)(this + 0x214) = 10;
  this[0x221] = (GravestoneAnimRig_ZombieTimeSpawner)0x0;
  *(undefined4 *)(this + 0x218) = 0xbf800000;
  *(undefined4 *)(this + 0x21c) = 0xbf800000;
  return;
}


/* GravestoneAnimRig_ZombieTimeSpawner::StaticNew() */

GravestoneAnimRig_ZombieTimeSpawner * GravestoneAnimRig_ZombieTimeSpawner::StaticNew(void)

{
  GravestoneAnimRig_ZombieTimeSpawner *this;
  
  this = ::operator_new(0x228);
  GravestoneAnimRig_ZombieTimeSpawner(this);
  return this;
}


/* GravestoneAnimRig_ZombieTimeSpawner::SetZombieHelmType(HelmType) */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::SetZombieHelmType
          (GravestoneAnimRig_ZombieTimeSpawner *this,uint param_2)

{
  if ((param_2 != 0) && ((param_2 < 3 || (param_2 == 10)))) {
    *(uint *)(this + 0x214) = param_2;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::PlayDeathAnim(RtReflectionDelegate<Sexy::Delegate1<std::string
   const&> >) */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::PlayDeathAnim
          (GravestoneAnimRig_ZombieTimeSpawner *this,RtReflectionDelegate *param_2)

{
  undefined4 uVar1;
  char *__s;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this[0x221] = (GravestoneAnimRig_ZombieTimeSpawner)0x1;
  local_8 = ___stack_chk_guard;
  if (this[0x220] == (GravestoneAnimRig_ZombieTimeSpawner)0x0) {
    __s = "closed_die";
  }
  else {
    __s = "open_die";
  }
  std::string::string(asStack_58,__s);
  nop();
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  uVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,0,aRStack_50);
  *(undefined4 *)(this + 0x210) = uVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GravestoneAnimRig_ZombieTimeSpawner::updateLayerVisibility(bool, int, std::vector<std::string,
   std::allocator<std::string > > const&) */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::updateLayerVisibility
          (GravestoneAnimRig_ZombieTimeSpawner *this,bool param_1,int param_2,vector *param_3)

{
  int iVar1;
  int iVar2;
  string *psVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *(undefined8 *)param_3;
  lVar5 = 0;
  iVar2 = FUN_03d629ec(uVar6,*(undefined8 *)(param_3 + 8));
  iVar1 = iVar2 + -1;
  if (param_2 < iVar2) {
    iVar1 = param_2;
  }
  if (0 < iVar2) {
    while( true ) {
      psVar3 = (string *)FUN_03d629f8(uVar6,lVar5);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 1;
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,param_1 && iVar1 == iVar4);
      if (iVar2 <= (int)lVar5) break;
      uVar6 = *(undefined8 *)param_3;
    }
  }
  return;
}


/* GravestoneAnimRig_ZombieTimeSpawner::getNextRattleTime() */

float __thiscall
GravestoneAnimRig_ZombieTimeSpawner::getNextRattleTime(GravestoneAnimRig_ZombieTimeSpawner *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(this + 0x21c);
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_T();
  fVar3 = (float)RandRangeFloat(-0.5,0.5);
  return fVar3 + fVar2 + (fVar4 - fVar1) * 0.5;
}


/* GravestoneAnimRig_ZombieTimeSpawner::SetOpenTime(float) */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::SetOpenTime
          (GravestoneAnimRig_ZombieTimeSpawner *this,float param_1)

{
  undefined4 uVar1;
  
  *(float *)(this + 0x21c) = param_1;
  uVar1 = getNextRattleTime(this);
  *(undefined4 *)(this + 0x218) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::onUpdate() */

void __thiscall
GravestoneAnimRig_ZombieTimeSpawner::onUpdate(GravestoneAnimRig_ZombieTimeSpawner *this)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  float fVar4;
  DummyInit *local_78;
  string asStack_50 [8];
  string asStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = PopAnimRig::IsAnimFinished(this,*(undefined4 *)(this + 0x210));
  if ((cVar1 != '\0') && (this[0x221] == (GravestoneAnimRig_ZombieTimeSpawner)0x0)) {
    if (this[0x220] == (GravestoneAnimRig_ZombieTimeSpawner)0x0) {
      if ((*(float *)(this + 0x21c) <= 0.0) ||
         (fVar4 = (float)PVZ_T(), fVar4 <= *(float *)(this + 0x21c))) {
        if ((*(float *)(this + 0x218) <= 0.0) ||
           (fVar4 = (float)PVZ_T(), fVar4 <= *(float *)(this + 0x218))) {
          std::string::string(asStack_40,"idle");
          cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_40);
          std::string::~string(asStack_40);
          nop();
          if (cVar1 == '\0') {
            std::string::string(asStack_40,"idle");
            Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
            uVar3 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
            *(undefined4 *)(this + 0x210) = uVar3;
            std::string::~string(asStack_40);
            nop();
          }
        }
        else {
          std::string::string(asStack_40,"rattle");
          Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
          uVar3 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,aDStack_38);
          *(undefined4 *)(this + 0x210) = uVar3;
          std::string::~string(asStack_40);
          nop();
          uVar3 = getNextRattleTime(this);
          *(undefined4 *)(this + 0x218) = uVar3;
        }
      }
      else {
        this[0x220] = (GravestoneAnimRig_ZombieTimeSpawner)0x1;
      }
    }
    else {
      std::string::string(asStack_50,"idle");
      cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_50);
      if (cVar1 == '\0') {
        std::string::string(asStack_48,"rattle");
        cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_48);
        bVar2 = 0;
        if (cVar1 != '\0') {
          std::string::string(asStack_40,"opening");
          bVar2 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_40);
          bVar2 = bVar2 ^ 1;
          std::string::~string(asStack_40);
          nop();
        }
        std::string::~string(asStack_48);
        nop();
      }
      else {
        std::string::string(asStack_40,"opening");
        bVar2 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_40);
        bVar2 = bVar2 ^ 1;
        std::string::~string(asStack_40);
        nop();
      }
      std::string::~string(asStack_50);
      nop();
      if (bVar2 == 0) {
        std::string::string(asStack_40,"open");
        cVar1 = PopAnimRig::IsAnimStringActive((PopAnimRig *)this,asStack_40);
        std::string::~string(asStack_40);
        nop();
        if (cVar1 != '\0') goto LAB_03d63644;
        std::string::string(asStack_40,"open");
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      }
      else {
        std::string::string(asStack_40,"opening");
        Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
      }
      local_78 = aDStack_38;
      uVar3 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_40,0,local_78);
      *(undefined4 *)(this + 0x210) = uVar3;
      std::string::~string(asStack_40);
      nop();
    }
  }
LAB_03d63644:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::getConeLayerNames() */

void GravestoneAnimRig_ZombieTimeSpawner::getConeLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ad8010 & 1;
  if (((DAT_06ad8010 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad8010), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ad8040,"tomb_spawner_cone_norm");
    nop();
    std::string::string((string *)&DAT_06ad8048,"tomb_spawner_cone_damage2");
    nop();
    std::string::string((string *)&DAT_06ad8050,"tomb_spawner_cone_damage3");
    nop();
    std::string::string((string *)&DAT_06ad8058,"tomb_spawner_cone_damage4");
    nop();
    __cxa_guard_release(&DAT_06ad8010);
    __cxa_atexit(FUN_03d62818,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ad7fe8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad7fe8), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad7fb0,(string *)&DAT_06ad8040,(allocator *)&DAT_06ad8060);
    __cxa_guard_release(&DAT_06ad7fe8);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad7fb0,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ad7fb0);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::getBucketLayerNames() */

void GravestoneAnimRig_ZombieTimeSpawner::getBucketLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ad8060 & 1;
  if (((DAT_06ad8060 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad8060), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ad7f68,"tomb_spawner_bucket_norm");
    nop();
    std::string::string((string *)&DAT_06ad7f70,"tomb_spawner_bucket_damage2");
    nop();
    std::string::string((string *)&DAT_06ad7f78,"tomb_spawner_bucket_damage3");
    nop();
    std::string::string((string *)&DAT_06ad7f80,"tomb_spawner_bucket_damage4");
    nop();
    __cxa_guard_release(&DAT_06ad8060);
    __cxa_atexit(FUN_03d62854,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ad7f48 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad7f48), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad7f50,(string *)&DAT_06ad7f68,(allocator *)&DAT_06ad7f88);
    __cxa_guard_release(&DAT_06ad7f48);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad7f50,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ad7f50);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::getCrownLayerNames() */

void GravestoneAnimRig_ZombieTimeSpawner::getCrownLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06ad8068 & 1;
  if (((DAT_06ad8068 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad8068), iVar2 != 0)) {
    std::string::string((string *)&DAT_06ad8018,"tomb_spawner_crown_norm");
    nop();
    std::string::string((string *)&DAT_06ad8020,"tomb_spawner_crown_damage2");
    nop();
    std::string::string((string *)&DAT_06ad8028,"tomb_spawner_crown_damage3");
    nop();
    std::string::string((string *)&DAT_06ad8030,"tomb_spawner_crown_damage4");
    nop();
    __cxa_guard_release(&DAT_06ad8068);
    __cxa_atexit(FUN_03d62890,uVar3,&DAT_06a88000);
  }
  if (((DAT_06ad7f88 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06ad7f88), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06ad7ff8,(string *)&DAT_06ad8018,(allocator *)&DAT_06ad8038);
    __cxa_guard_release(&DAT_06ad7f88);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06ad7ff8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06ad7ff8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GravestoneAnimRig_ZombieTimeSpawner::SetDamageState(int, bool) */

void GravestoneAnimRig_ZombieTimeSpawner::SetDamageState(int param_1,bool param_2)

{
  int iVar1;
  GravestoneAnimRig_ZombieTimeSpawner *this;
  vector *pvVar2;
  string asStack_10 [8];
  long local_8;
  
  this = (GravestoneAnimRig_ZombieTimeSpawner *)(ulong)(uint)param_1;
  iVar1 = *(int *)(this + 0x214);
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)getConeLayerNames();
  updateLayerVisibility(this,iVar1 == 1,(uint)param_2,pvVar2);
  pvVar2 = (vector *)getBucketLayerNames();
  updateLayerVisibility(this,iVar1 == 2,(uint)param_2,pvVar2);
  pvVar2 = (vector *)getCrownLayerNames();
  updateLayerVisibility(this,iVar1 == 10,(uint)param_2,pvVar2);
  std::string::string(asStack_10,"tomb_spawner_cone");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,iVar1 == 1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"tomb_spawner_bucket");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,iVar1 == 2);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"tomb_spawner_crown");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,iVar1 == 10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

