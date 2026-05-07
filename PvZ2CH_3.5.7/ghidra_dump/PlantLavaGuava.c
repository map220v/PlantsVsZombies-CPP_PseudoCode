// Class: PlantLavaGuava


/* PlantLavaGuava::CanTargetZombie(Sexy::RtWeakPtr<Zombie>, PlantWeapon) */

undefined8
PlantLavaGuava::CanTargetZombie(undefined8 param_1,RtWeakPtr<Sexy::ResourceInfo> *param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
  cVar1 = (**(code **)(*plVar2 + 0x330))();
  if (cVar1 == '\0') {
    uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
    cVar1 = Zombie::HasCondition(uVar3,1);
    if (cVar1 == '\0') {
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
      cVar1 = Zombie::HasCondition(uVar3,3);
      if (cVar1 == '\0') {
        uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
        cVar1 = Zombie::HasCondition(uVar3,4);
        if (cVar1 == '\0') {
          plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
          cVar1 = (**(code **)(*plVar2 + 0x2a8))();
          if (cVar1 == '\0') {
            plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
            cVar1 = (**(code **)(*plVar2 + 0x2b8))();
            if (cVar1 == '\0') {
              plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_2);
              cVar1 = (**(code **)(*plVar2 + 0x338))();
              if (cVar1 == '\0') {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


/* PlantLavaGuava::CanBeShoveled() */

bool __thiscall PlantLavaGuava::CanBeShoveled(PlantLavaGuava *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 2 && *(int *)(*(long *)(this + 0x10) + 200) != 5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::StaticClassInit() */

void PlantLavaGuava::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantLavaGuava");
    (*pcVar2)(plVar1,asStack_10,FUN_04126f50,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLavaGuava::StaticGetClass() */

long * PlantLavaGuava::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantLavaGuava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLavaGuava::GetClass() const */

long * PlantLavaGuava::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantLavaGuava",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantLavaGuava::PlantLavaGuava() */

void __thiscall PlantLavaGuava::PlantLavaGuava(PlantLavaGuava *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantLavaGuava)0x0;
  *(undefined ***)this = &PTR_GetClass_067e94c0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  *(undefined4 *)(this + 0x38) = 0xbf800000;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantLavaGuava::StaticNew() */

PlantLavaGuava * PlantLavaGuava::StaticNew(void)

{
  PlantLavaGuava *this;
  
  this = ::operator_new(0x48);
  PlantLavaGuava(this);
  return this;
}


/* PlantLavaGuava::~PlantLavaGuava() */

void __thiscall PlantLavaGuava::~PlantLavaGuava(PlantLavaGuava *this)

{
  *(undefined ***)this = &PTR_GetClass_067e94c0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantLavaGuava::~PlantLavaGuava() */

void __thiscall PlantLavaGuava::~PlantLavaGuava(PlantLavaGuava *this)

{
  ~PlantLavaGuava(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::updatePlantfoodDamageEndtime() */

void __thiscall PlantLavaGuava::updatePlantfoodDamageEndtime(PlantLavaGuava *this)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_041212a0(aRStack_10,*(undefined8 *)(this + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  lVar2 = FUN_041212f4(*(undefined8 *)(lVar2 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar3 = (float)PVZ_T();
  bVar1 = local_8 == ___stack_chk_guard;
  *(float *)(this + 0x38) = fVar3 + *(float *)(lVar2 + 0x28);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLavaGuava::canOpenCrack() */

bool __thiscall PlantLavaGuava::canOpenCrack(PlantLavaGuava *this)

{
  float fVar1;
  
  if (0.0 < *(float *)(this + 0x38)) {
    fVar1 = (float)PVZ_T();
    return *(float *)(this + 0x38) < fVar1;
  }
  return false;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantLavaGuava::TakeSmashAttack(PlantLavaGuava *this,RtWeakPtr *param_2)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  RtObject *this_00;
  long *plVar4;
  PlantAnimRig *pPVar5;
  UIEasyButtonWidget *this_01;
  code *pcVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if ((cVar1 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == 4)) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(param_2);
    if (pRVar3 != (ResourceInfo *)0x0) {
      this_00 = (RtObject *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      bVar2 = Sexy::RtObject::IsA<Zombie>(this_00);
      if (bVar2) {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_58
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        this_01 = *(UIEasyButtonWidget **)(this + 0x10);
        *(undefined4 *)(this_01 + 200) = 2;
        plVar4 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
        pcVar6 = *(code **)(*plVar4 + 0x130);
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        (*pcVar6)(plVar4,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        pPVar5 = (PlantAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        PlantAnimRig::SetState(pPVar5,0xe);
        goto LAB_041237f0;
      }
    }
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_58,(RtWeakPtrBase *)param_2);
    PlantTupistraStalker::TakeSmashAttack(this,(RtWeakPtr<Sexy::SoundResource> *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
  }
LAB_041237f0:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::causeDamage(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&,
   DamageInfo const&) */

void __thiscall
PlantLavaGuava::causeDamage(PlantLavaGuava *this,vector *param_1,DamageInfo *param_2)

{
  bool bVar1;
  Zombie *pZVar2;
  undefined8 *puVar3;
  long *extraout_x0;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_041238e0(*(undefined8 *)param_1);
  local_10 = FUN_04123930(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (((RtObject *)*puVar3 == (RtObject *)0x0) ||
       (pZVar2 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3), pZVar2 == (Zombie *)0x0)) {
      nop();
      (**(code **)(*extraout_x0 + 0x110))();
    }
    else {
      (**(code **)(*(long *)pZVar2 + 0x110))(pZVar2,param_2);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x04124fcc */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantLavaGuava::Initialize() */

void __thiscall PlantLavaGuava::Initialize(PlantLavaGuava *this)

{
  BoardEntity *this_00;
  ComponentWarmingRadius *this_01;
  long lVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantLavaGuava)0x0;
  uVar2 = PVZ_EOT();
  this_00 = *(BoardEntity **)(this + 0x10);
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x38) = 0xbf800000;
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::string::string(asStack_18,"WarmingRadius");
  ComponentRunner::Add<ComponentWarmingRadius>((ComponentRunner *)this_00,aRStack_20,asStack_18);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::~string(asStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  this_01 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  lVar1 = FUN_04124ebc(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_01,(ComponentWarmingRadiusProps *)(lVar1 + 0x2d8));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::UpdateActions() */

void __thiscall PlantLavaGuava::UpdateActions(PlantLavaGuava *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  PlantAnimRig *pPVar4;
  long lVar5;
  UIEasyButtonWidget *this_01;
  code *pcVar6;
  float fVar7;
  float fVar8;
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    PlantFramework::FindTargetZombie(aRStack_58,this,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 != '\0') {
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this_01 + 200) = 2;
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
      pcVar6 = *(code **)(*plVar3 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar6)(plVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar4 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar4,0xe);
      lVar5 = FUN_04124ebc(*(undefined8 *)(this + 0x10));
      fVar7 = (float)PVZ_T();
      *(float *)(this + 0x2c) = fVar7 + *(float *)(lVar5 + 0x2d4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else if (iVar1 == 2) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if ((cVar2 == '\0') || (fVar8 = *(float *)(this + 0x2c), fVar7 = (float)PVZ_T(), fVar8 <= fVar7)
       ) {
      Plant::KillPlant(*(Plant **)(this + 0x10),0,0,1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantLavaGuava::Fire
               (undefined1 param_1 [16],float param_2,undefined8 param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  PlantAction *pPVar5;
  float *pfVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iStack_b0;
  int iStack_ac;
  string asStack_a8 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  float local_90;
  float local_8c;
  undefined4 local_88;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 == '\0') {
    pcVar7 = *(code **)(*(long *)param_4 + 0x300);
    uVar1 = *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150);
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 2;
    (*pcVar7)(asStack_a8,param_4);
    cVar2 = FUN_0547419c(asStack_a8);
    if (cVar2 == '\0') {
      RealObject::PlayPositionalSound(*(RealObject **)(param_4 + 0x10),asStack_a8,0.0);
    }
    uVar8 = 0;
    Plant::GetFireOrigin(*(Plant **)(param_4 + 0x10),&iStack_b0,&iStack_ac);
    lVar3 = FUN_04124ebc(*(undefined8 *)(param_4 + 0x10));
    lVar4 = FUN_041212f4(*(undefined8 *)(lVar3 + 0x70),
                         (long)*(int *)(*(long *)(param_4 + 0x10) + 0x150));
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a0,(RtWeakPtrBase *)(lVar4 + 8));
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_a0);
    if (cVar2 != '\0') {
      pPVar5 = (PlantAction *)
               FUN_041212f4(*(undefined8 *)(lVar3 + 0x70),
                            (long)*(int *)(*(long *)(param_4 + 0x10) + 0x150));
      PlantAction::PlantAction((PlantAction *)aRStack_80,pPVar5);
      fVar10 = (float)(**(code **)(*(long *)param_4 + 0x110))
                                (*(undefined4 *)(*(long *)(param_4 + 0x10) + 0xc4),param_4,
                                 (PlantAction *)aRStack_80);
      local_88 = (undefined4)param_3;
      local_90 = fVar10;
      local_8c = param_2;
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(param_4 + 0x10));
      fVar11 = *pfVar6;
      fVar12 = pfVar6[1];
      uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
      uVar8 = *(undefined8 *)(param_4 + 0x10);
      lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
      uVar8 = Board::AddProjectile
                        ((Board *)(fVar10 + fVar11),param_2 + fVar12,param_3,uVar9,aRStack_98,uVar8,
                         *(undefined4 *)(lVar3 + 0x68));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
      PlantAction::~PlantAction((PlantAction *)aRStack_80);
    }
    *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = uVar1;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a0);
    std::string::~string(asStack_a8);
  }
  else {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,param_5);
    uVar8 = PlantFramework::Fire(param_4,aRStack_80,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::LaunchProjectile(Sexy::SexyVector3) */

void PlantLavaGuava::LaunchProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,PlantFramework *param_4)

{
  bool bVar1;
  Projectile *this;
  long lVar2;
  undefined8 uVar3;
  LavaGuavaProjectile *pLVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pcVar5 = *(code **)(*(long *)param_4 + 0xb0);
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this = (Projectile *)
         (*pcVar5)(param_4,a_Stack_10,*(undefined4 *)(*(long *)(param_4 + 0x10) + 0x110),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if ((this != (Projectile *)0x0) &&
     (lVar2 = FUN_04124ebc(*(undefined8 *)(param_4 + 0x10)), lVar2 != 0)) {
    lVar2 = FUN_04124ebc(*(undefined8 *)(param_4 + 0x10));
    fVar9 = *(float *)(lVar2 + 0x2c4);
    lVar2 = FUN_04124ebc(*(undefined8 *)(param_4 + 0x10));
    fVar6 = (float)PlantFramework::Rand(param_4,*(float *)(lVar2 + 0x2c4) * 0.15);
    lVar2 = FUN_04124ebc(*(undefined8 *)(param_4 + 0x10));
    fVar8 = *(float *)(lVar2 + 0x2c0);
    lVar2 = FUN_04124ebc(*(undefined8 *)(param_4 + 0x10));
    fVar7 = (float)PlantFramework::Rand(param_4,*(float *)(lVar2 + 0x2c0) * 0.1);
    uVar3 = FUN_04121280(*(undefined8 *)(this + 0xe0));
    FUN_04121284(this + 0xe0,uVar3);
    Projectile::LaunchAt(this,(SexyVector3 *)&local_20,fVar6 + fVar9,fVar7 + fVar8);
    bVar1 = Sexy::RtObject::IsA<LavaGuavaProjectile>((RtObject *)this);
    if (bVar1) {
      pLVar4 = Sexy::RtObject::Cast<LavaGuavaProjectile>((RtObject *)this);
      Sexy::SexyVector3::operator=((SexyVector3 *)(pLVar4 + 0x1a8),(SexyVector3 *)&local_20);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLavaGuava::ApplyPlantfood() */

void __thiscall PlantLavaGuava::ApplyPlantfood(PlantLavaGuava *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar1) {
    this_00 = (ComponentWarmingRadius *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    lVar2 = FUN_04124ebc(*(undefined8 *)(this + 0x10));
    ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x3f0));
  }
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantLavaGuava::CancelPlantfood() */

void __thiscall PlantLavaGuava::CancelPlantfood(PlantLavaGuava *this)

{
  bool bVar1;
  ComponentWarmingRadius *this_00;
  long lVar2;
  
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
  *(undefined4 *)(this + 0x38) = 0xbf800000;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (!bVar1) {
    return;
  }
  this_00 = (ComponentWarmingRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  lVar2 = FUN_04124ebc(*(undefined8 *)(this + 0x10));
  ComponentWarmingRadius::SetRadiusProps(this_00,(ComponentWarmingRadiusProps *)(lVar2 + 0x2d8));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::createCrackRect() */

void PlantLavaGuava::createCrackRect(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long in_x0;
  long lVar5;
  int in_w4;
  int *in_x8;
  float fVar6;
  undefined1 auVar7 [16];
  int local_10;
  
  lVar1 = ___stack_chk_guard;
  lVar5 = FUN_04124ebc(*(undefined8 *)(in_x0 + 0x10));
  auVar7 = std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(in_x0 + 0x10));
  BoardTransforms::BoardSpaceToGridUnbounded(auVar7._0_8_,auVar7._8_8_);
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  fVar6 = (float)NEON_fminnm((float)(iVar3 - local_10),*(undefined4 *)(lVar5 + 0x2d0));
  iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  BoardTransforms::GridToBoardSpaceRect
            ((BoardTransforms *)(ulong)*(uint *)(*(long *)(in_x0 + 0x10) + 0x114),
             *(int *)(*(long *)(in_x0 + 0x10) + 0x110),1,1,in_w4);
  bVar2 = lVar1 == ___stack_chk_guard;
  *in_x8 = (int)((float)*in_x8 + (float)iVar4 * 0.5);
  in_x8[2] = (int)(((float)in_x8[2] - (float)iVar4 * 0.5) + (float)(iVar3 * (int)fVar6));
  if (bVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLavaGuava::killGridItems() */

void __thiscall PlantLavaGuava::killGridItems(PlantLavaGuava *this)

{
  GridItemSap *this_00;
  long *plVar1;
  
  this_00 = (GridItemSap *)
            FUN_04126514(*(undefined4 *)(*(long *)(this + 0x10) + 0x114),
                         *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  if (this_00 != (GridItemSap *)0x0) {
    GridItemSap::OnWashedOut(this_00);
  }
  plVar1 = (long *)FUN_041265f8(*(undefined4 *)(*(long *)(this + 0x10) + 0x114),
                                *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::causeCrackDamage(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&)
    */

void __thiscall PlantLavaGuava::causeCrackDamage(PlantLavaGuava *this,vector *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 local_78;
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [16];
  undefined1 auStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_041212a0(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  FUN_041212f4(*(undefined8 *)(lVar4 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
  if (*(code **)(*(long *)this + 0x198) == PlantFramework::GetDamageFlags) {
    uVar5 = PlantFramework::GetDamageFlags();
  }
  else {
    uVar5 = (**(code **)(*(long *)this + 0x198))(this,1);
  }
  operator|=(auStack_58,uVar5);
  uVar5 = operator|(0x2000,0x400);
  uVar5 = operator|(uVar5,0x1000);
  operator|=(auStack_58,uVar5);
  local_78 = FUN_041238e0(*(undefined8 *)param_1);
  local_70 = FUN_04123930(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_78,(__normal_iterator *)&local_70), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_78);
    plVar7 = (long *)*puVar6;
    uVar3 = FUN_04121274(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
    cVar2 = RealObject::IsOnOpposingTeam(plVar7,uVar3);
    if (cVar2 != '\0') {
      (**(code **)(*plVar7 + 0x110))(plVar7,aRStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_78);
  }
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::openCrack() */

void __thiscall PlantLavaGuava::openCrack(PlantLavaGuava *this)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    createCrackRect();
    uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,&local_30,uVar1,uVar1);
    causeCrackDamage(this,(vector *)avStack_20);
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
    iVar4 = BoardTransforms::GridToBoardSpaceX(0);
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar6 = BoardTransforms::GridToBoardSpaceY(0);
    iVar7 = BoardConstants::GRIDSQUARE_HEIGHT();
    lVar10 = *(long *)(this + 0x10);
    fVar12 = *(float *)(lVar10 + 0x1c);
    fVar11 = (float)FUN_041213d8(*(undefined4 *)(lVar10 + 0x18),fVar12,
                                 *(undefined4 *)(lVar10 + 0x20));
    iVar8 = BoardConstants::GRIDSQUARE_HEIGHT();
    iVar9 = BoardConstants::GRIDSQUARE_HEIGHT();
    Sexy::Insets::Insets
              ((Insets *)&local_40,(int)(float)(iVar4 - iVar5 / 2),
               (int)(fVar12 - (float)(iVar8 / 2)),800,iVar9);
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,(Insets *)&local_40,uVar1,uVar1);
    causeCrackDamage(this,(vector *)avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
    Sexy::Insets::Insets
              ((Insets *)&local_30,(int)(fVar11 - (float)(iVar4 / 2)),
               (int)(float)(iVar6 - iVar7 / 2),iVar5,600);
    local_40 = local_30;
    uStack_38 = uStack_28;
    iVar4 = BoardConstants::NUMBER_OF_ROWS();
    EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,(Insets *)&local_40,0,iVar4 + -1);
    causeCrackDamage(this,(vector *)avStack_20);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantLavaGuava::UpdatePlantfood() */

void __thiscall PlantLavaGuava::UpdatePlantfood(PlantLavaGuava *this)

{
  char cVar1;
  
  cVar1 = canOpenCrack(this);
  if (cVar1 == '\0') {
    return;
  }
  updatePlantfoodDamageEndtime(this);
  openCrack(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::playAvatarCrackEffect() */

void __thiscall PlantLavaGuava::playAvatarCrackEffect(PlantLavaGuava *this)

{
  RtObject *this_00;
  PlantAnimRig_LavaGuava *this_01;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_LavaGuava>(this_00);
  PlantAnimRig_LavaGuava::PlayAvatarCrackEffect(this_01,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::playCrackEffect() */

void __thiscall PlantLavaGuava::playCrackEffect(PlantLavaGuava *this)

{
  RtObject *this_00;
  PlantAnimRig_LavaGuava *this_01;
  long lVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  this_01 = Sexy::RtObject::Cast<PlantAnimRig_LavaGuava>(this_00);
  lVar1 = FUN_04124ebc(*(undefined8 *)(this + 0x10));
  PlantAnimRig_LavaGuava::PlayCrackEffect(this_01,(int)*(float *)(lVar1 + 0x2d0),aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::filterTargets(std::vector<BoardEntity*, std::allocator<BoardEntity*> > const&,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >*) */

void __thiscall PlantLavaGuava::filterTargets(PlantLavaGuava *this,vector *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *extraout_x0;
  RtObject *local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_18 = FUN_041238e0(*(undefined8 *)param_1);
  local_10 = FUN_04123930(*(undefined8 *)(param_1 + 8));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar1) {
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    local_20 = (RtObject *)*puVar6;
    if ((local_20 == (RtObject *)0x0) ||
       (pZVar4 = Sexy::RtObject::Cast<Zombie>(local_20), pZVar4 == (Zombie *)0x0)) {
      nop();
      cVar2 = (**(code **)(*extraout_x0 + 0x200))();
      if (cVar2 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                   (BoardEntity **)&local_20);
      }
    }
    else {
      uVar5 = operator|(1,8);
      uVar5 = operator|(uVar5,0x2000);
      uVar3 = operator|(uVar5,4);
      cVar2 = Zombie::MatchesAny(pZVar4,uVar3,*(undefined8 *)(this + 0x10));
      if ((cVar2 == '\0') && (cVar2 = Zombie::HasCondition(pZVar4,0x65), cVar2 == '\0')) {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)param_2,
                   (BoardEntity **)&local_20);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantLavaGuava::OnAnimCommand(std::string const&, std::string const&) */

void PlantLavaGuava::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  GridItemLava *this;
  ulong uVar10;
  code *pcVar11;
  FastCurve *pFVar12;
  code *pcVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  Board *this_01;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_98 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  FastCurve aFStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"use_special");
  if (bVar1) {
    this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                **)(param_1 + 0x10);
    if (*(int *)(this_00 + 200) == 2) {
      param_1[0x28] = (string)0x1;
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_00);
      fVar16 = pfVar7[1];
      fVar15 = *pfVar7;
      lVar9 = FUN_04124ebc(this_00);
      iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar17 = *(float *)(lVar9 + 0x2c8);
      iVar5 = *(int *)(*(long *)(param_1 + 0x10) + 0x110);
      iVar4 = (int)fVar17 / 2;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_98);
      uVar6 = operator|(2,4);
      Sexy::FastCurve::SetOutRange(aFStack_68,fVar15,fVar16 - 30.0);
      EntityFinder::GetEntitiesTouchingCircle2D
                ((float)iVar3 * SQRT(fVar17),avStack_98,uVar6,aFStack_68,iVar5 - iVar4,iVar4 + iVar5
                );
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
      filterTargets((PlantLavaGuava *)param_1,(vector *)avStack_98,(vector *)avStack_80);
      fVar16 = *(float *)(lVar9 + 0x2cc);
      fVar15 = (float)Plant::GetTotalDamageRate(*(Plant **)(param_1 + 0x10));
      uVar8 = operator|(0x400,0x1000);
      uVar14 = *(undefined8 *)(param_1 + 0x10);
      Sexy::Point::Point((Point *)&local_b0,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_a8,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)(fVar15 * fVar16),local_a8,local_a4,aFStack_68,uVar8,uVar14,
                 (Point *)&local_b0,0);
      pFVar12 = aFStack_68;
      causeDamage((PlantLavaGuava *)param_1,(vector *)avStack_80,(DamageInfo *)aFStack_68);
      iVar5 = (int)pFVar12;
      iVar4 = FUN_041212c4(*(undefined8 *)(param_1 + 0x10));
      if (4 < iVar4) {
        uVar10 = PlantFramework::Rand
                           ((PlantFramework *)param_1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
        iVar4 = PlantFramework::Rand
                          ((PlantFramework *)param_1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
        BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(uVar10 & 0xffffffff),iVar4,iVar5);
        EATextSquish::Vec3::Vec3((Vec3 *)&local_a8,(float)local_b0,(float)local_ac,0.0);
        LaunchProjectile(local_a8,local_a4,local_a0,param_1);
      }
      DamageInfo::~DamageInfo((DamageInfo *)aFStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_98);
      cVar2 = '\x01';
      goto LAB_041293a4;
    }
  }
  bVar1 = std::operator==(param_2,"spawn_lava");
  if (bVar1) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (*(int *)(lVar9 + 200) == 2) {
      fVar16 = *(float *)(lVar9 + 0x1c);
      fVar15 = (float)FUN_041213d8(*(undefined4 *)(lVar9 + 0x18),fVar16,
                                   *(undefined4 *)(lVar9 + 0x20));
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      std::string::string((string *)aFStack_68,"lava");
      iVar4 = BoardTransforms::BoardSpaceToGridX(fVar15);
      iVar5 = BoardTransforms::BoardSpaceToGridY(fVar16);
      lVar9 = Board::AddGridItem(this_01,(string *)aFStack_68,iVar4,iVar5,1);
      std::string::~string((string *)aFStack_68);
      nop();
      uVar6 = FUN_04121274(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
      FUN_04121278(lVar9 + 0x24,uVar6);
      nop();
      iVar4 = FUN_04121290(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
      if (1 < iVar4) {
        pcVar11 = *(code **)(*(long *)this + 0x2b8);
        pcVar13 = *(code **)(*(long *)this + 0x2b0);
        if (pcVar11 == GridItemLava::GetLifeTime) {
          fVar15 = (float)GridItemLava::GetLifeTime(this);
        }
        else {
          fVar15 = (float)(*pcVar11)();
        }
        (*pcVar13)(fVar15 + 2.0,this);
        iVar4 = FUN_04121290(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50));
        if (2 < iVar4) {
          FUN_041213cc(this + 0x1c0);
        }
      }
      killGridItems((PlantLavaGuava *)param_1);
      cVar2 = '\x01';
      goto LAB_041293a4;
    }
  }
  bVar1 = std::operator==(param_2,"use_action");
  cVar2 = bVar1;
  if (bVar1) {
    if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
      updatePlantfoodDamageEndtime((PlantLavaGuava *)param_1);
      cVar2 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
      if (cVar2 == '\0') {
        playCrackEffect((PlantLavaGuava *)param_1);
        cVar2 = bVar1;
      }
      else {
        playAvatarCrackEffect((PlantLavaGuava *)param_1);
      }
    }
    else {
      cVar2 = '\0';
    }
  }
LAB_041293a4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}

