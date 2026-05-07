// Class: ZombieAnimRig_Basic


/* ZombieAnimRig_Basic::~ZombieAnimRig_Basic() */

void __thiscall ZombieAnimRig_Basic::~ZombieAnimRig_Basic(ZombieAnimRig_Basic *this)

{
  *(undefined ***)this = &PTR_GetClass_0686cf00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Basic_0686d218;
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Basic::~ZombieAnimRig_Basic() */

void __thiscall ZombieAnimRig_Basic::~ZombieAnimRig_Basic(ZombieAnimRig_Basic *this)

{
  ~ZombieAnimRig_Basic(this + -0x10);
  return;
}


/* ZombieAnimRig_Basic::~ZombieAnimRig_Basic() */

void __thiscall ZombieAnimRig_Basic::~ZombieAnimRig_Basic(ZombieAnimRig_Basic *this)

{
  ~ZombieAnimRig_Basic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Basic::~ZombieAnimRig_Basic() */

void __thiscall ZombieAnimRig_Basic::~ZombieAnimRig_Basic(ZombieAnimRig_Basic *this)

{
  ~ZombieAnimRig_Basic(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::getEmptyLayerNames() */

void ZombieAnimRig_Basic::getEmptyLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = getEmptyLayerNames()::k_layerArray_values & 1;
  if (((getEmptyLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getEmptyLayerNames()::k_layerArray_values), iVar2 != 0)) {
    __cxa_guard_release(&getEmptyLayerNames()::k_layerArray_values);
    __cxa_atexit(FUN_03418c88,uVar3,&DAT_06a88000);
  }
  if (((getEmptyLayerNames()::k_layerArray_values & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&getEmptyLayerNames()::k_layerArray_values), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)getEmptyLayerNames()::k_layerArray,
               (string *)&getEmptyLayerNames()::k_layerArray_values,
               (allocator *)&getEmptyLayerNames()::k_layerArray_values);
    __cxa_guard_release(&getEmptyLayerNames()::k_layerArray_values);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,
                 getEmptyLayerNames()::k_layerArray,&DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(getEmptyLayerNames()::k_layerArray);
}


/* ZombieAnimRig_Basic::SetHasHelm(HelmType) */

void __thiscall ZombieAnimRig_Basic::SetHasHelm(ZombieAnimRig_Basic *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x244) = param_2;
  return;
}


/* ZombieAnimRig_Basic::SetHelmDamageIndex(int) */

void __thiscall ZombieAnimRig_Basic::SetHelmDamageIndex(ZombieAnimRig_Basic *this,int param_1)

{
  *(int *)(this + 0x248) = param_1;
  return;
}


/* ZombieAnimRig_Basic::hasHelm(HelmType) */

bool __thiscall ZombieAnimRig_Basic::hasHelm(ZombieAnimRig_Basic *this,int param_2)

{
  return *(int *)(this + 0x244) == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::DropHelm(HelmType, Zombie*) */

void __thiscall
ZombieAnimRig_Basic::DropHelm(ZombieAnimRig_Basic *this,undefined4 param_2,Zombie *param_3)

{
  vector *pvVar1;
  undefined8 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar1 = (vector *)(**(code **)(*(long *)this + 0x2f0))();
  (**(code **)(*(long *)this + 0x280))(asStack_10,this,param_2);
  uVar2 = SpawnZombieParticle(param_3,pvVar1,asStack_10,0.75);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* ZombieAnimRig_Basic::updateHelmLayerVisibility(HelmType) */

void __thiscall
ZombieAnimRig_Basic::updateHelmLayerVisibility(ZombieAnimRig_Basic *this,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  string *psVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined8 *)(**(code **)(*(long *)this + 0x2f0))();
  cVar1 = (**(code **)(*(long *)this + 0x300))(this,param_2);
  uVar7 = *puVar3;
  iVar2 = FUN_045f517c(uVar7,puVar3[1]);
  if (0 < iVar2) {
    if (cVar1 != '\0') {
      lVar6 = 0;
      while( true ) {
        psVar4 = (string *)FUN_045f5188(uVar7,lVar6);
        iVar5 = (int)lVar6;
        lVar6 = lVar6 + 1;
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,*(int *)(this + 0x248) == iVar5);
        if (iVar2 <= (int)lVar6) break;
        uVar7 = *puVar3;
      }
      return;
    }
    lVar6 = 0;
    while( true ) {
      psVar4 = (string *)FUN_045f5188(uVar7,lVar6);
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar4,false);
      if (iVar2 <= (int)(lVar6 + 1)) break;
      uVar7 = *puVar3;
      lVar6 = lVar6 + 1;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::SetLayerVisibilityForCurrentState() */

void __thiscall ZombieAnimRig_Basic::SetLayerVisibilityForCurrentState(ZombieAnimRig_Basic *this)

{
  int iVar1;
  undefined8 *puVar2;
  string *psVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  string asStack_10 [8];
  long local_8;
  
  lVar6 = 0;
  bVar8 = false;
  local_8 = ___stack_chk_guard;
  puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x2b8))();
  uVar7 = *puVar2;
  iVar1 = FUN_045f517c(uVar7,puVar2[1]);
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(this + 0x248);
      if (iVar1 == (int)lVar6) {
        if (*(int *)(this + 0x244) != 3) {
          psVar3 = (string *)FUN_045f5188(uVar7,(long)iVar1);
          goto LAB_045f5300;
        }
        bVar8 = true;
        psVar3 = (string *)FUN_045f5188(uVar7,(long)iVar1);
        bVar5 = true;
      }
      else {
        psVar3 = (string *)FUN_045f5188(uVar7,lVar6);
LAB_045f5300:
        bVar5 = false;
      }
      lVar6 = lVar6 + 1;
      PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,bVar5);
      uVar7 = *puVar2;
      iVar1 = FUN_045f517c(uVar7,puVar2[1]);
    } while ((int)lVar6 < iVar1);
  }
  std::string::string(asStack_10,"zombie_egypt_armor4_norm");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,bVar8);
  std::string::~string(asStack_10);
  nop();
  (**(code **)(*(long *)this + 0x2f8))(this,2);
  (**(code **)(*(long *)this + 0x2f8))(this,1);
  (**(code **)(*(long *)this + 0x2f8))(this,0x14);
  if (*(int *)(this + 0x244) != 3) {
    (**(code **)(*(long *)this + 0x2f8))(this,10);
  }
  (**(code **)(*(long *)this + 0x2f8))(this,0xd);
  puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x290))(this);
  puVar4 = (undefined8 *)(**(code **)(*(long *)this + 0x298))(this);
  lVar6 = 0;
  while( true ) {
    uVar7 = *puVar2;
    iVar1 = FUN_045f517c(uVar7,puVar2[1]);
    if (iVar1 <= (int)lVar6) break;
    psVar3 = (string *)FUN_045f5188(uVar7,lVar6);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,(bool)this[0x240]);
    lVar6 = lVar6 + 1;
  }
  lVar6 = 0;
  while( true ) {
    uVar7 = *puVar4;
    iVar1 = FUN_045f517c(uVar7,puVar4[1]);
    if (iVar1 <= (int)lVar6) break;
    psVar3 = (string *)FUN_045f5188(uVar7,lVar6);
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,psVar3,(bool)((byte)this[0x240] ^ 1));
    lVar6 = lVar6 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::StaticClassInit() */

void ZombieAnimRig_Basic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Basic");
    (*pcVar2)(plVar1,asStack_10,FUN_045f58a0,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Basic::StaticGetClass() */

long * ZombieAnimRig_Basic::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Basic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Basic::GetClass() const */

long * ZombieAnimRig_Basic::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Basic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Basic::ZombieAnimRig_Basic() */

void __thiscall ZombieAnimRig_Basic::ZombieAnimRig_Basic(ZombieAnimRig_Basic *this)

{
  undefined4 uVar1;
  
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  this[0x240] = (ZombieAnimRig_Basic)0x0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined ***)this = &PTR_GetClass_0686cf00;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Basic_0686d218;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = uVar1;
  return;
}


/* ZombieAnimRig_Basic::StaticNew() */

ZombieAnimRig_Basic * ZombieAnimRig_Basic::StaticNew(void)

{
  ZombieAnimRig_Basic *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Basic(this);
  return this;
}


/* ZombieAnimRig_Basic::HasFlag() */

ZombieAnimRig_Basic __thiscall ZombieAnimRig_Basic::HasFlag(ZombieAnimRig_Basic *this)

{
  return this[0x240];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::SetHasTanHao(bool) */

void __thiscall ZombieAnimRig_Basic::SetHasTanHao(ZombieAnimRig_Basic *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"zombie_exclamatorypoint");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Basic::GetHelm() */

undefined4 __thiscall ZombieAnimRig_Basic::GetHelm(ZombieAnimRig_Basic *this)

{
  return *(undefined4 *)(this + 0x244);
}


/* ZombieAnimRig_Basic::FlashHelm() */

void __thiscall ZombieAnimRig_Basic::FlashHelm(ZombieAnimRig_Basic *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x24c) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::onPostDraw(Sexy::Graphics*) */

void __thiscall ZombieAnimRig_Basic::onPostDraw(ZombieAnimRig_Basic *this,Graphics *param_1)

{
  PASpriteInst *pPVar1;
  long lVar2;
  float fVar3;
  string asStack_30 [8];
  undefined4 local_28 [3];
  int local_1c;
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x244) != 0) && (fVar3 = (float)PVZ_EOT(), *(float *)(this + 0x24c) < fVar3))
  {
    fVar3 = (float)PVZ_T();
    local_28[0] = 0x3f800000;
    local_18[0] = 0;
    fVar3 = CurveLerp<float>(0,0x3fc00000,fVar3 - *(float *)(this + 0x24c),(Color *)local_28,
                             (Insets *)local_18,2);
    if (0.0 < fVar3) {
      Sexy::Color::Color((Color *)local_28,1);
      local_1c = (int)(fVar3 * 255.0);
      PopAnimRig::SetShaderOverrideColor((PopAnimRig *)this,(Color *)local_28);
      (**(code **)(*(long *)this + 0x280))(asStack_30,this,*(undefined4 *)(this + 0x244));
      Sexy::Insets::Insets((Insets *)local_18);
      pPVar1 = (PASpriteInst *)
               PopAnimRig::CalcSymbolRect((PopAnimRig *)this,asStack_30,(TRect *)local_18);
      lVar2 = FUN_045f5164(*(undefined8 *)(this + 0x20));
      PopAnimRig::DrawSprite((PopAnimRig *)this,param_1,pPVar1,(SexyTransform2D *)(lVar2 + 0x6c));
      PopAnimRig::ClearShaderOverrideColor((PopAnimRig *)this);
      std::string::~string(asStack_30);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::SetAlmanacArmor(std::vector<Sexy::RtWeakPtr<ArmorPropertySheet>,
   std::allocator<Sexy::RtWeakPtr<ArmorPropertySheet> > >) */

void __thiscall
ZombieAnimRig_Basic::SetAlmanacArmor
          (ZombieAnimRig_Basic *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  bool bVar1;
  bool bVar2;
  RtWeakPtrBase *pRVar3;
  long lVar4;
  undefined8 uVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
  if (bVar1) {
    do {
      pRVar3 = (RtWeakPtrBase *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,pRVar3);
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      local_18 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)(lVar4 + 0x28));
      local_10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(lVar4 + 0x28));
      bVar1 = true;
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10),
            bVar2) {
        uVar5 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
        FUN_05475d88(asStack_20,uVar5);
        PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_20,bVar1);
        std::string::~string(asStack_20);
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
        bVar1 = false;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
    } while (bVar1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Basic::GetHelmSymbolName(HelmType) */

void __thiscall ZombieAnimRig_Basic::GetHelmSymbolName(undefined8 param_1,ZombieAnimRig_Basic *this)

{
  int iVar1;
  vector *pvVar2;
  undefined8 uVar3;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)(**(code **)(*(long *)this + 0x2f0))();
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)local_20,pvVar2);
  iVar1 = (**(code **)(*(long *)this + 0x278))(this);
  uVar3 = FUN_045f5174(local_20[0],(long)iVar1);
  FUN_05475d88(param_1,uVar3);
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* ZombieAnimRig_Basic::getHelmLayerNames(HelmType) */

void __thiscall ZombieAnimRig_Basic::getHelmLayerNames(ZombieAnimRig_Basic *this,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    (**(code **)(*(long *)this + 0x2a0))();
    break;
  case 2:
    (**(code **)(*(long *)this + 0x2a8))();
    break;
  case 3:
    (**(code **)(*(long *)this + 0x2b8))();
    break;
  default:
    getEmptyLayerNames();
    return;
  case 10:
    (**(code **)(*(long *)this + 0x2b0))();
    break;
  case 0xd:
    (**(code **)(*(long *)this + 0x2c0))();
    break;
  case 0xf:
    (**(code **)(*(long *)this + 0x2c8))();
    break;
  case 0x11:
    (**(code **)(*(long *)this + 0x2d0))();
    break;
  case 0x13:
    (**(code **)(*(long *)this + 0x2d8))();
    break;
  case 0x14:
    (**(code **)(*(long *)this + 0x2e0))();
    break;
  case 0x15:
    (**(code **)(*(long *)this + 0x2e8))();
  }
  return;
}

