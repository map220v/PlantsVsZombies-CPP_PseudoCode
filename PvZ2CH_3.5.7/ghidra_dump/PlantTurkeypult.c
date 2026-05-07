// Class: PlantTurkeypult


/* PlantTurkeypult::PlantTurkeypult() */

void __thiscall PlantTurkeypult::PlantTurkeypult(PlantTurkeypult *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067290f0;
  return;
}


/* PlantTurkeypult::StaticNew() */

PlantTurkeypult * PlantTurkeypult::StaticNew(void)

{
  PlantTurkeypult *this;
  
  this = ::operator_new(0x28);
  PlantTurkeypult(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurkeypult::StaticClassInit() */

void PlantTurkeypult::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTurkeypult");
    (*pcVar2)(plVar1,asStack_10,FUN_03b03684,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTurkeypult::StaticGetClass() */

long * PlantTurkeypult::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTurkeypult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTurkeypult::GetClass() const */

long * PlantTurkeypult::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTurkeypult",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTurkeypult::~PlantTurkeypult() */

void __thiscall PlantTurkeypult::~PlantTurkeypult(PlantTurkeypult *this)

{
  *(undefined ***)this = &PTR_GetClass_067290f0;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantTurkeypult::~PlantTurkeypult() */

void __thiscall PlantTurkeypult::~PlantTurkeypult(PlantTurkeypult *this)

{
  ~PlantTurkeypult(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurkeypult::Initialize() */

void __thiscall PlantTurkeypult::Initialize(PlantTurkeypult *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_03b0493c(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar2 + 0x2ec);
  lVar2 = FUN_03b0493c(*(undefined8 *)(this + 0x10));
  lVar3 = *(long *)(this + 0x10);
  fVar8 = *(float *)(lVar2 + 0x2f0);
  iVar1 = FUN_03b03200(lVar3);
  fVar4 = (float)FUN_03b031f8(*(undefined4 *)(lVar3 + 0x3cc));
  if (1 < iVar1) {
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
    fVar5 = *(float *)(lVar2 + 0x20);
    fVar7 = (float)(int)fVar6;
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(lVar3 + 0xb4),fVar4 * (fVar5 - fVar7),
               fVar4 * (*(float *)(lVar2 + 0x28) - fVar7));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    lVar3 = *(long *)(this + 0x10);
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
    lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
    fVar6 = *(float *)(lVar2 + 0x24);
    Plant::GetProps();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)(lVar3 + 0xbc),fVar4 * (fVar6 - fVar7),
               fVar4 * (*(float *)(lVar2 + 0x28) - fVar7));
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    if (iVar1 != 2) {
      lVar3 = *(long *)(this + 0x10);
      Plant::GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
      fVar6 = *(float *)(lVar2 + 0x20);
      fVar8 = (float)(int)fVar8;
      Plant::GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(lVar3 + 0xb4),fVar4 * ((fVar6 - fVar7) - fVar8),
                 fVar4 * ((*(float *)(lVar2 + 0x28) - fVar7) - fVar8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      lVar3 = *(long *)(this + 0x10);
      Plant::GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
      lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
      fVar6 = *(float *)(lVar2 + 0x24);
      Plant::GetProps();
      lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      lVar2 = FUN_03b032d4(*(undefined8 *)(lVar2 + 0x70));
      Sexy::FastCurve::SetOutRange
                ((FastCurve *)(lVar3 + 0xbc),fVar4 * ((fVar6 - fVar7) - fVar8),
                 fVar4 * ((*(float *)(lVar2 + 0x28) - fVar7) - fVar8));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurkeypult::DoSpecial(int) */

void PlantTurkeypult::DoSpecial(int param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  TurkeypultProjectile *extraout_x0;
  long lVar10;
  RtWeakPtrBase *pRVar11;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this;
  undefined8 *puVar12;
  RtObject *this_00;
  Projectile *this_01;
  Plant *this_02;
  long lVar13;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  plVar5 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar5 + 0xd0))
            ((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)&local_20,plVar5,1);
  lVar6 = FUN_03b0493c(plVar5[2]);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  std::
  random_shuffle<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<GridItemVase>*,std::vector<Sexy::RtWeakPtr<GridItemVase>,std::allocator<Sexy::RtWeakPtr<GridItemVase>>>>>
            (uVar7,uVar8);
  uVar4 = FUN_03b03214(local_20,local_18);
  local_30 = CONCAT44(local_30._4_4_,uVar4);
  cVar2 = Plant::GetAvatarEnable((Plant *)plVar5[2]);
  piVar9 = (int *)(lVar6 + 0x2e0);
  if (cVar2 == '\0') {
    piVar9 = (int *)(lVar6 + 0x2dc);
  }
  piVar9 = eastl::min_alt<int>((int *)&local_30,piVar9);
  iVar1 = *piVar9;
  if (0 < iVar1) {
    lVar13 = 0;
    do {
      pRVar11 = (RtWeakPtrBase *)FUN_03b03220(local_20,lVar13);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar11);
      this = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
      puVar12 = (undefined8 *)
                std::
                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                ::_M_leftmost(this);
      local_30 = *puVar12;
      this_02 = (Plant *)plVar5[2];
      local_28 = *(undefined4 *)(puVar12 + 1);
      *(undefined4 *)(this_02 + 0x150) = 1;
      cVar2 = Plant::GetAvatarEnable(this_02);
      if (cVar2 != '\0') {
        *(undefined4 *)(plVar5[2] + 0x150) = 2;
      }
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_48);
      if (bVar3) {
        this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        bVar3 = Sexy::RtObject::IsA<Zombie>(this_00);
        if (!bVar3) goto LAB_03b04e78;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
        nop();
        local_28 = 0x42480000;
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_38,(RtWeakPtrBase *)aRStack_40);
        this_01 = (Projectile *)
                  Plant::Fire((Plant *)plVar5[2],a_Stack_38,
                              *(undefined4 *)((Plant *)plVar5[2] + 0x110),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
      }
      else {
LAB_03b04e78:
        local_28 = 0x41c80000;
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_38);
        this_01 = (Projectile *)
                  Plant::Fire((Plant *)plVar5[2],a_Stack_38,
                              *(undefined4 *)((Plant *)plVar5[2] + 0x110),1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38)
        ;
      }
      lVar13 = lVar13 + 1;
      nop();
      cVar2 = Plant::GetAvatarEnable((Plant *)plVar5[2]);
      lVar10 = lVar6 + 0x2c8;
      if (cVar2 == '\0') {
        lVar10 = lVar6 + 0x2c0;
      }
      FUN_05475d88(a_Stack_38,lVar10);
      uVar4 = FUN_03b03200(plVar5[2]);
      TurkeypultProjectile::InitializeProjectileValues(extraout_x0,a_Stack_38,uVar4);
      std::string::~string((string *)a_Stack_38);
      lVar10 = FUN_03b0493c(plVar5[2]);
      Projectile::LaunchAtFromProps
                (this_01,(SexyVector3 *)&local_30,(PultProjectileProps *)(lVar10 + 800));
      Projectile::SetTarget(this_01,(RtWeakPtr *)aRStack_48);
      *(undefined4 *)(plVar5[2] + 0x150) = 0xffffffff;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
    } while ((int)lVar13 < iVar1);
  }
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             &local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTurkeypult::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantTurkeypult::Fire
               (undefined1 param_1 [16],float param_2,undefined4 param_3,PlantFramework *param_4,
               RtWeakPtrBase *param_5,undefined8 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  Projectile *this;
  TurkeypultProjectile *extraout_x0;
  float *pfVar5;
  long *plVar6;
  Plant *pPVar7;
  RealObject *this_00;
  float fVar8;
  float fVar9;
  string asStack_68 [8];
  RtMixedPtrBase aRStack_60 [8];
  RtMixedPtrBase aRStack_58 [8];
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [16];
  undefined4 local_20;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 == '\0') {
    lVar4 = FUN_03b0493c(*(undefined8 *)(param_4 + 0x10));
    pPVar7 = *(Plant **)(param_4 + 0x10);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,param_5);
    this = (Projectile *)Plant::Fire(pPVar7,aRStack_30,param_6,param_7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    FUN_05475d88(asStack_68,lVar4 + 0x2b8);
    PultProjectileProps::PultProjectileProps
              ((PultProjectileProps *)aRStack_30,(PultProjectileProps *)(lVar4 + 0x2f8));
    iVar2 = FUN_03b03200(*(undefined8 *)(param_4 + 0x10));
    if (4 < iVar2) {
      fVar8 = (float)PlantFramework::Rand(param_4,1.0);
      param_2 = *(float *)(lVar4 + 0x2f4);
      if (fVar8 < param_2) {
        thunk_FUN_05475e00(asStack_68,lVar4 + 0x2d0);
      }
    }
    cVar1 = std::operator==(asStack_68,(string *)(lVar4 + 0x2d0));
    uVar3 = 1;
    if (cVar1 == '\0') {
      uVar3 = FUN_03b03200(*(undefined8 *)(param_4 + 0x10));
    }
    nop();
    FUN_05475d88((string *)&local_40,asStack_68);
    TurkeypultProjectile::InitializeProjectileValues(extraout_x0,(string *)&local_40,uVar3);
    std::string::~string((string *)&local_40);
    PlantFramework::FindTargetZombie(aRStack_60,param_4,param_7);
    (**(code **)(*(long *)param_4 + 0xf8))(aRStack_58,param_4,param_7);
    DVec3::DVec3((DVec3 *)&local_50);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar1 == '\0') {
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
      if (cVar1 == '\0') {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        local_4c = pfVar5[1];
        local_50 = *pfVar5 + 600.0;
        local_48 = 0;
      }
      else {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
        local_40 = (**(code **)(*plVar6 + 0x238))(local_20);
        local_3c = param_2;
        local_38 = param_3;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
      }
    }
    else {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      local_40 = (**(code **)(*plVar6 + 0x3b0))(local_20);
      local_3c = param_2;
      local_38 = param_3;
      Sexy::SexyVector3::operator=((SexyVector3 *)&local_50,(SexyVector3 *)&local_40);
      fVar8 = local_50;
      if (*(char *)(lVar4 + 0x318) != '\0') {
        pfVar5 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        fVar9 = *pfVar5;
        if (fVar8 < fVar9) {
          iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
          local_50 = fVar9 + (float)iVar2 * 0.5;
        }
      }
    }
    Projectile::LaunchAtFromProps(this,(SexyVector3 *)&local_50,(PultProjectileProps *)aRStack_30);
    this_00 = *(RealObject **)(param_4 + 0x10);
    std::string::string((string *)&local_40,"Play_CabbagePult_Throw");
    RealObject::PlayPositionalSound(this_00,(string *)&local_40,0.0);
    std::string::~string((string *)&local_40);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    PultProjectileProps::~PultProjectileProps((PultProjectileProps *)aRStack_30);
    std::string::~string(asStack_68);
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    this = (Projectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}

