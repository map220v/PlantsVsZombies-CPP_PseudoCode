// Class: PlantBearberry


/* PlantBearberry::Initialize() */

void __thiscall PlantBearberry::Initialize(PlantBearberry *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* PlantBearberry::FindTargetAndFire(PlantWeapon) */

bool PlantBearberry::FindTargetAndFire(long *param_1)

{
  char cVar1;
  
  cVar1 = Plant::CanFindTarget(param_1[2]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x1a0))(param_1);
  }
  return cVar1 != '\0';
}


/* PlantBearberry::ApplyPlantfood() */

void __thiscall PlantBearberry::ApplyPlantfood(PlantBearberry *this)

{
  char cVar1;
  
  *(undefined4 *)(this + 0x28) = 4;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    *(undefined4 *)(this + 0x28) = 5;
  }
  *(undefined4 *)(this + 0x30) = 0;
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantBearberry::PlantBearberry() */

void __thiscall PlantBearberry::PlantBearberry(PlantBearberry *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06819600;
  return;
}


/* PlantBearberry::StaticNew() */

PlantBearberry * PlantBearberry::StaticNew(void)

{
  PlantBearberry *this;
  
  this = ::operator_new(0x38);
  PlantBearberry(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBearberry::StaticClassInit() */

void PlantBearberry::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBearberry");
    (*pcVar2)(plVar1,asStack_10,FUN_042549d4,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBearberry::StaticGetClass() */

long * PlantBearberry::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBearberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBearberry::GetClass() const */

long * PlantBearberry::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBearberry",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBearberry::~PlantBearberry() */

void __thiscall PlantBearberry::~PlantBearberry(PlantBearberry *this)

{
  *(undefined ***)this = &PTR_GetClass_06819600;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBearberry::~PlantBearberry() */

void __thiscall PlantBearberry::~PlantBearberry(PlantBearberry *this)

{
  ~PlantBearberry(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBearberry::PlayAttackAnimation() */

void __thiscall PlantBearberry::PlayAttackAnimation(PlantBearberry *this)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  PopAnimRig *pPVar3;
  PlantAnimRig *pPVar4;
  long extraout_x0_00;
  RtWeakPtr<Sexy::ResourceInfo> *__n;
  UIEasyButtonWidget *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __n = aRStack_40;
  std::string::string(asStack_48,"attack1");
  nop();
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this + 0x28) = 1;
  cVar1 = FUN_042543f4(this_00);
  if (cVar1 == '\0') {
    iVar2 = FUN_042543ec(this_00);
    if (1 < iVar2) {
      fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
      Plant::GetProps();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      if (fVar5 < *(float *)(extraout_x0 + 0x2b8)) {
        std::string::append(asStack_48,"attack2",(size_t)__n);
        *(undefined4 *)(this + 0x2c) = 0;
        *(undefined4 *)(this + 0x28) = 2;
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      }
      else {
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      }
    }
  }
  else {
    fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    fVar6 = *(float *)(extraout_x0_00 + 700);
    if (fVar5 < fVar6) {
      std::string::append(asStack_48,"attack5",(size_t)__n);
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this + 0x28) = 3;
    }
    else {
      this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      fVar7 = *(float *)(extraout_x0_00 + 0x2b8);
      iVar2 = FUN_042543ec(this_00);
      if (iVar2 < 3) {
        fVar7 = fVar7 * 1.0;
      }
      else {
        fVar7 = fVar7 * 2.0;
      }
      if (fVar5 < fVar6 + fVar7) {
        std::string::append(asStack_48,"attack2",(size_t)__n);
        *(undefined4 *)(this + 0x2c) = 0;
        *(undefined4 *)(this + 0x28) = 2;
        this_00 = *(UIEasyButtonWidget **)(this + 0x10);
      }
    }
  }
  pPVar3 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(this_00);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_48,0,aDStack_38);
  if (iVar2 == -1) {
    std::string::~string(asStack_48);
  }
  else {
    pPVar4 = (PlantAnimRig *)
             UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    PlantAnimRig::SetState(pPVar4,2);
    std::string::~string(asStack_48);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBearberry::LaunchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float) */

void __thiscall
PlantBearberry::LaunchProjectileAt
          (PlantBearberry *this,Projectile *param_1,SexyVector3 *param_2,float param_3,float param_4
          )

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_042557e8(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2c0);
  lVar1 = FUN_042557e8(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2c0));
  lVar1 = FUN_042557e8(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2c4);
  lVar1 = FUN_042557e8(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2c4));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBearberry::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantBearberry::Fire
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantBearberry *param_4,
               undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  PopAnimRig *pPVar5;
  SexyVector3 *pSVar6;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  BoardEntity *this_00;
  long *plVar7;
  long lVar8;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  code *pcVar9;
  Plant *pPVar10;
  RealObject *pRVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  RtMixedPtrBase aRStack_60 [8];
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  DummyInit aDStack_38 [48];
  long local_8;
  
  iVar2 = *(int *)(param_4 + 0x28);
  local_8 = ___stack_chk_guard;
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      if (*(int *)(param_4 + 0x2c) == 0) {
        pPVar10 = *(Plant **)(param_4 + 0x10);
        uVar12 = *(undefined4 *)(pPVar10 + 0x150);
        *(undefined4 *)(pPVar10 + 0x150) = 2;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                          *)&local_48,param_6,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = uVar12;
        PlantFramework::FindTargetZombie(aRStack_60,param_4,0);
        DVec3::DVec3((DVec3 *)&local_58);
        cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
        if (cVar1 == '\0') {
LAB_04255a14:
          pfVar4 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_4 + 0x10));
          local_58 = *pfVar4 + 130.0;
          local_54 = pfVar4[1];
          local_50 = 0;
        }
        else {
          this_00 = (BoardEntity *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          iVar2 = BoardEntity::CalcColumnPosition(this_00);
          iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_4 + 0x10));
          if (iVar3 + 2 < iVar2) goto LAB_04255a14;
          plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                     ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
          pcVar9 = *(code **)(*plVar7 + 0x3b0);
          lVar8 = FUN_042557e8(*(undefined8 *)(param_4 + 0x10));
          local_48 = (*pcVar9)(*(undefined4 *)(lVar8 + 0x2c4),plVar7);
          local_44 = param_2;
          local_40 = param_3;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,(SexyVector3 *)&local_48);
        }
        LaunchProjectileAt(param_4,(Projectile *)this_01,(SexyVector3 *)&local_58,0.1,0.1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
        ;
        pRVar11 = *(RealObject **)(param_4 + 0x10);
      }
      else {
        pPVar10 = *(Plant **)(param_4 + 0x10);
        uVar12 = *(undefined4 *)(pPVar10 + 0x150);
        *(undefined4 *)(pPVar10 + 0x150) = 1;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                          *)&local_48,param_6,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        pRVar11 = *(RealObject **)(param_4 + 0x10);
        *(undefined4 *)(pRVar11 + 0x150) = uVar12;
      }
      *(int *)(param_4 + 0x2c) = *(int *)(param_4 + 0x2c) + 1;
      std::string::string((string *)&local_48,"Play_Plant_Bearberry_LV2_Attack");
      RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
      std::string::~string((string *)&local_48);
      nop();
      goto LAB_04255960;
    }
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        if (2 < *(int *)(param_4 + 0x30)) {
          this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)0x0;
          goto LAB_04255960;
        }
        pPVar10 = *(Plant **)(param_4 + 0x10);
        uVar12 = *(undefined4 *)(pPVar10 + 0x150);
        *(undefined4 *)(pPVar10 + 0x150) = 4;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                          *)&local_48,param_6,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        pRVar11 = *(RealObject **)(param_4 + 0x10);
        iVar3 = *(int *)(param_4 + 0x30);
        *(undefined4 *)(pRVar11 + 0x150) = uVar12;
        if (iVar3 == 0) goto LAB_04255d60;
        if (iVar3 == 1) {
          std::string::string((string *)&local_48,"Play_Plant_Bearberry_Plantfood_01");
          RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
          std::string::~string((string *)&local_48);
          nop();
          DVec3::DVec3((DVec3 *)&local_58);
          pSVar6 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_01);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,pSVar6);
          local_54 = local_54 - 45.0;
          (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_58);
          DVec3::DVec3((DVec3 *)&local_48);
          local_48 = 0x43480000;
          local_40 = 0;
          local_44 = -53.58984;
          Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)&local_48);
          Sexy::SexyMath::DegToRad(15.0);
          FUN_04254398(this_01 + 0xc4);
          iVar3 = *(int *)(param_4 + 0x30);
        }
        else if (iVar3 == 2) {
          std::string::string((string *)&local_48,"Play_Plant_Bearberry_Plantfood_02");
          RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
          std::string::~string((string *)&local_48);
          nop();
          DVec3::DVec3((DVec3 *)&local_58);
          pSVar6 = (SexyVector3 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_01);
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,pSVar6);
          local_54 = local_54 + 45.0;
          (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_58);
          DVec3::DVec3((DVec3 *)&local_48);
          local_48 = 0x43480000;
          local_40 = 0;
          local_44 = 53.58984;
          Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)&local_48);
          Sexy::SexyMath::DegToRad(-15.0);
          FUN_04254398(this_01 + 0xc4);
          iVar3 = *(int *)(param_4 + 0x30);
        }
      }
      else {
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)0x0;
        if ((iVar2 != 5) || (2 < *(int *)(param_4 + 0x30))) goto LAB_04255960;
        pPVar10 = *(Plant **)(param_4 + 0x10);
        uVar12 = *(undefined4 *)(pPVar10 + 0x150);
        *(undefined4 *)(pPVar10 + 0x150) = 5;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
        this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Plant::Fire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                                          *)&local_48,param_6,0);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
        pRVar11 = *(RealObject **)(param_4 + 0x10);
        iVar3 = *(int *)(param_4 + 0x30);
        *(undefined4 *)(pRVar11 + 0x150) = uVar12;
        if (iVar3 == 0) {
LAB_04255d60:
          std::string::string((string *)&local_48,"Play_Plant_Bearberry_Plantfood");
          RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
          std::string::~string((string *)&local_48);
          nop();
          fVar13 = (float)PlantFramework::Rand((PlantFramework *)param_4,1.0);
          fVar14 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_4 + 0x10));
          if (fVar13 < fVar14) {
            pPVar10 = *(Plant **)(param_4 + 0x10);
            *(int *)(pPVar10 + 0x150) = iVar2;
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
            this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    *)Plant::Fire(pPVar10,(string *)&local_48,param_6,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
            *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = uVar12;
            fVar13 = (float)PlantFramework::Rand((PlantFramework *)param_4,1.0);
            DVec3::DVec3((DVec3 *)&local_58);
            pSVar6 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this);
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,pSVar6);
            local_54 = local_54 + -45.0 + fVar13 * 90.0;
            (**(code **)(*(long *)this + 0x78))(this,(DVec3 *)&local_58);
            DVec3::DVec3((DVec3 *)&local_48);
            local_48 = 0x43480000;
            local_40 = 0;
            local_44 = (fVar13 * 400.0 + -200.0) * 0.2679492;
            Projectile::SetVelocity((Projectile *)this,(SexyVector3 *)&local_48);
            iVar3 = *(int *)(param_4 + 0x30);
            goto LAB_04255b4c;
          }
        }
        else {
          if (iVar3 == 1) {
            std::string::string((string *)&local_48,"Play_Plant_Bearberry_Plantfood_01");
            RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
            std::string::~string((string *)&local_48);
            nop();
            DVec3::DVec3((DVec3 *)&local_58);
            pSVar6 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_01);
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,pSVar6);
            local_54 = local_54 - 45.0;
            (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_58);
            DVec3::DVec3((DVec3 *)&local_48);
            local_44 = -53.58984;
          }
          else {
            if (iVar3 != 2) goto LAB_04255b4c;
            std::string::string((string *)&local_48,"Play_Plant_Bearberry_Plantfood_02");
            RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
            std::string::~string((string *)&local_48);
            nop();
            DVec3::DVec3((DVec3 *)&local_58);
            pSVar6 = (SexyVector3 *)
                     std::
                     _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     ::_M_leftmost(this_01);
            Sexy::SexyVector3::operator=((SexyVector3 *)&local_58,pSVar6);
            local_54 = local_54 + 45.0;
            (**(code **)(*(long *)this_01 + 0x78))(this_01,(DVec3 *)&local_58);
            DVec3::DVec3((DVec3 *)&local_48);
            local_44 = 53.58984;
          }
          local_48 = 0x43480000;
          local_40 = 0;
          Projectile::SetVelocity((Projectile *)this_01,(SexyVector3 *)&local_48);
        }
        iVar3 = *(int *)(param_4 + 0x30);
      }
LAB_04255b4c:
      *(int *)(param_4 + 0x30) = iVar3 + 1;
      if (2 < iVar3 + 1) {
        pPVar5 = (PopAnimRig *)
                 UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(param_4 + 0x10));
        std::string::string((string *)&local_48,"idle");
        Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
        PopAnimRig::PlayAndContinue(pPVar5,(string *)&local_48,0,aDStack_38);
        std::string::~string((string *)&local_48);
        nop();
      }
      goto LAB_04255960;
    }
  }
  pPVar10 = *(Plant **)(param_4 + 0x10);
  uVar12 = *(undefined4 *)(pPVar10 + 0x150);
  *(int *)(pPVar10 + 0x150) = iVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)&local_48);
  this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Plant::Fire(pPVar10,(_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )&local_48,param_6,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  pRVar11 = *(RealObject **)(param_4 + 0x10);
  *(undefined4 *)(pRVar11 + 0x150) = uVar12;
  std::string::string((string *)&local_48,"Play_Plant_Bearberry_Attack");
  RealObject::PlayPositionalSound(pRVar11,(string *)&local_48,0.0);
  std::string::~string((string *)&local_48);
  nop();
LAB_04255960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_01);
}

