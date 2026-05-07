// Class: PlantCypripedium


/* PlantCypripedium::PlantCypripedium() */

void __thiscall PlantCypripedium::PlantCypripedium(PlantCypripedium *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06821110;
  return;
}


/* PlantCypripedium::StaticNew() */

PlantCypripedium * PlantCypripedium::StaticNew(void)

{
  PlantCypripedium *this;
  
  this = ::operator_new(0x30);
  PlantCypripedium(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCypripedium::StaticClassInit() */

void PlantCypripedium::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantCypripedium");
    (*pcVar2)(plVar1,asStack_10,FUN_04273000,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantCypripedium::StaticGetClass() */

long * PlantCypripedium::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCypripedium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCypripedium::GetClass() const */

long * PlantCypripedium::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantCypripedium",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantCypripedium::~PlantCypripedium() */

void __thiscall PlantCypripedium::~PlantCypripedium(PlantCypripedium *this)

{
  *(undefined ***)this = &PTR_GetClass_06821110;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantCypripedium::~PlantCypripedium() */

void __thiscall PlantCypripedium::~PlantCypripedium(PlantCypripedium *this)

{
  ~PlantCypripedium(this);
  AK::FreeHook(this);
  return;
}


/* PlantCypripedium::Initialize() */

void __thiscall PlantCypripedium::Initialize(PlantCypripedium *this)

{
  bool bVar1;
  RtObject *this_00;
  PlantAnimRig_Cypripedium *this_01;
  
  *(undefined4 *)(this + 0x28) = 0;
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_Cypripedium>(this_00);
  bVar1 = (bool)FUN_04271bd0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Cypripedium::SetIsLevel5(this_01,bVar1);
  return;
}


/* PlantCypripedium::FindTargetAndFire(PlantWeapon) */

undefined8 PlantCypripedium::FindTargetAndFire(PlantFramework *param_1)

{
  char cVar1;
  int iVar2;
  RtObject *this;
  PlantAnimRig_Cypripedium *this_00;
  long lVar3;
  UIEasyButtonWidget *this_01;
  float fVar4;
  
  cVar1 = Plant::CanFindTarget(*(undefined8 *)(param_1 + 0x10),0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (cVar1 == '\0') {
    return 1;
  }
  this_01 = *(UIEasyButtonWidget **)(param_1 + 0x10);
  cVar1 = FUN_04271bd0(this_01);
  if (cVar1 == '\0') {
    iVar2 = FUN_04271bc8(this_01);
    if (1 < iVar2) {
      if (iVar2 == 2) {
        fVar4 = (float)PlantFramework::Rand(param_1,1.0);
        lVar3 = FUN_042736b8(*(undefined8 *)(param_1 + 0x10));
        this_01 = *(UIEasyButtonWidget **)(param_1 + 0x10);
        if (fVar4 <= *(float *)(lVar3 + 0x2c0)) goto LAB_0427376c;
      }
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 4;
  }
LAB_0427376c:
  this = (RtObject *)UIEasyButtonWidget::GetImageNormal(this_01);
  this_00 = Sexy::RtObject::Cast<PlantAnimRig_Cypripedium>(this);
  PlantAnimRig_HollyKnight::SetNumDamageStates
            ((PlantAnimRig_HollyKnight *)this_00,*(int *)(param_1 + 0x28) + 1);
  (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  return 1;
}


/* PlantCypripedium::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantCypripedium::LaunchProjectileAt
          (PlantCypripedium *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_042736b8(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 700);
  lVar1 = FUN_042736b8(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 700));
  lVar1 = FUN_042736b8(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2b8);
  lVar1 = FUN_042736b8(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2b8));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantCypripedium::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantCypripedium::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantCypripedium *param_4,RtWeakPtrBase *param_5,undefined4 param_6,
               undefined4 param_7)

{
  char cVar1;
  Projectile *pPVar2;
  ResourceInfo *pRVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  RealObject *this;
  Plant *pPVar7;
  code *pcVar8;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 == '\0') {
    pPVar7 = *(Plant **)(param_4 + 0x10);
    *(undefined4 *)(pPVar7 + 0x150) = *(undefined4 *)(param_4 + 0x28);
  }
  else {
    cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
    pPVar7 = *(Plant **)(param_4 + 0x10);
    if (cVar1 == '\0') {
      *(undefined4 *)(pPVar7 + 0x150) = 2;
    }
    else {
      *(undefined4 *)(pPVar7 + 0x150) = 3;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
  pPVar2 = (Projectile *)
           Plant::Fire(pPVar7,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  if (pPVar2 != (Projectile *)0x0) {
    PlantFramework::FindTargetZombie(aRStack_38,param_4,param_7);
    (**(code **)(*(long *)param_4 + 0xf8))
              ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    DVec3::DVec3((DVec3 *)&local_28);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
    if (cVar1 == '\0') {
      if (pRVar3 == (ResourceInfo *)0x0) {
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_28 = *pfVar6 + 600.0;
        local_24 = pfVar6[1];
        local_20 = 0;
      }
      else {
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_28 = (float)local_30;
        local_20 = 0x41c80000;
        local_24 = (float)local_2c;
      }
    }
    else {
      plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pcVar8 = *(code **)(*plVar4 + 0x3b0);
      lVar5 = FUN_042736b8(*(undefined8 *)(param_4 + 0x10));
      local_18 = (*pcVar8)(*(undefined4 *)(lVar5 + 0x2b8),plVar4);
      local_14 = param_2;
      local_10 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
    }
    LaunchProjectileAt(param_4,pPVar2,(SexyVector3 *)&local_28,0.1,0.1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
  }
  this = *(RealObject **)(param_4 + 0x10);
  std::string::string((string *)&local_18,"Play_CabbagePult_Throw");
  RealObject::PlayPositionalSound(this,(string *)&local_18,0.0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar2);
}

