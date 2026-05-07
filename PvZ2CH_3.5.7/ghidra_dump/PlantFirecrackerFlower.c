// Class: PlantFirecrackerFlower


/* PlantFirecrackerFlower::GetPlantAttackRect(PlantWeapon) */

long PlantFirecrackerFlower::GetPlantAttackRect(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  PlantFramework::GetPlantAttackRect();
  if (param_3 == 0) {
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar1;
    iVar2 = BoardConstants::NUMBER_OF_COLUMNS();
    iVar1 = *(int *)(*(long *)(param_2 + 0x10) + 0x114);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
    *(int *)(param_1 + 8) = (int)((double)((iVar2 - iVar1) * iVar3) - (double)iVar4 * 0.5);
    iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
    *(int *)(param_1 + 0xc) = iVar1 * 3;
  }
  return param_1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::StaticClassInit() */

void PlantFirecrackerFlower::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantFirecrackerFlower");
    (*pcVar2)(plVar1,asStack_10,FUN_03f47510,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantFirecrackerFlower::StaticGetClass() */

long * PlantFirecrackerFlower::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantFirecrackerFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFirecrackerFlower::GetClass() const */

long * PlantFirecrackerFlower::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantFirecrackerFlower",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantFirecrackerFlower::ApplyPlantfood() */

void __thiscall PlantFirecrackerFlower::ApplyPlantfood(PlantFirecrackerFlower *this)

{
  bool bVar1;
  int iVar2;
  PlantAnimRig_FirecrackerFlower *this_00;
  Plant *this_01;
  
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  this_01 = *(Plant **)(this + 0x10);
  iVar2 = FUN_03f46628(this_01);
  bVar1 = (bool)Plant::GetAvatarEnable(this_01);
  PlantAnimRig_FirecrackerFlower::setAttackState(this_00,iVar2,0,bVar1);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::getTargetInRow(int, PlantWeapon) */

void PlantFirecrackerFlower::getTargetInRow
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
               long *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RtObject *this;
  long *plVar4;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  undefined8 local_30;
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  int local_18;
  int local_14;
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  local_30 = (**(code **)(*param_2 + 0x3f8))(param_2,param_4);
  (**(code **)(*param_2 + 0x2b0))(&local_18,param_2,param_4);
  if (param_3 != 0) {
    iVar3 = param_3 + local_14;
    if ((iVar3 < 0) || (iVar2 = BoardConstants::NUMBER_OF_ROWS(), iVar2 <= iVar3)) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (param_1);
      goto LAB_03f48238;
    }
    local_14 = local_14 + param_3;
    local_18 = local_18 + 1;
  }
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar3 = iVar3 - local_18;
  local_10 = BoardConstants::GRIDSQUARE_WIDTH();
  local_10 = (iVar3 + -2) * local_10;
  (**(code **)(*param_2 + 0xd8))(aRStack_28,param_2,&local_18,param_4,&local_30);
  (**(code **)(*param_2 + 0x100))(aRStack_20,param_2,&local_18,param_4);
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
  if (cVar1 == '\0') {
    if (this != (RtObject *)0x0) {
LAB_03f48318:
      Sexy::RtObject::Cast<BoardEntity>(this);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_38,(RtWeakPtrBase *)aRStack_20);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    }
  }
  else {
    plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
    if (*(code **)(*plVar4 + 0x338) == Zombie::IsSwingingIn) {
      cVar1 = Zombie::IsSwingingIn();
    }
    else {
      cVar1 = (**(code **)(*plVar4 + 0x338))();
    }
    if (cVar1 == '\0') {
      this = (RtObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
      goto LAB_03f48318;
    }
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)param_1,(RtWeakPtrBase *)a_Stack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
LAB_03f48238:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* PlantFirecrackerFlower::PlantFirecrackerFlower() */

void __thiscall PlantFirecrackerFlower::PlantFirecrackerFlower(PlantFirecrackerFlower *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06797e10;
  *(undefined4 *)(this + 0x28) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  return;
}


/* PlantFirecrackerFlower::StaticNew() */

PlantFirecrackerFlower * PlantFirecrackerFlower::StaticNew(void)

{
  PlantFirecrackerFlower *this;
  
  this = ::operator_new(0x48);
  PlantFirecrackerFlower(this);
  return this;
}


/* PlantFirecrackerFlower::~PlantFirecrackerFlower() */

void __thiscall PlantFirecrackerFlower::~PlantFirecrackerFlower(PlantFirecrackerFlower *this)

{
  *(undefined ***)this = &PTR_GetClass_06797e10;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantFirecrackerFlower::~PlantFirecrackerFlower() */

void __thiscall PlantFirecrackerFlower::~PlantFirecrackerFlower(PlantFirecrackerFlower *this)

{
  ~PlantFirecrackerFlower(this);
  AK::FreeHook(this);
  return;
}


/* PlantFirecrackerFlower::Initialize() */

void __thiscall PlantFirecrackerFlower::Initialize(PlantFirecrackerFlower *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_03f46628(uVar3);
  if (1 < iVar1) {
    if (iVar1 != 2) {
      lVar2 = FUN_03f488e8(uVar3);
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 700);
      PlantFramework::Initialize((PlantFramework *)this);
      return;
    }
    lVar2 = FUN_03f488e8(uVar3);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(lVar2 + 0x2b8);
  }
  PlantFramework::Initialize((PlantFramework *)this);
  return;
}


/* PlantFirecrackerFlower::launchProjectileAt(Projectile*, Sexy::SexyVector3 const&, float, float)
    */

void __thiscall
PlantFirecrackerFlower::launchProjectileAt
          (PlantFirecrackerFlower *this,Projectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_03f488e8(*(undefined8 *)(this + 0x10));
  fVar5 = *(float *)(lVar1 + 0x2c4);
  lVar1 = FUN_03f488e8(*(undefined8 *)(this + 0x10));
  fVar2 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar1 + 0x2c4));
  lVar1 = FUN_03f488e8(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x2c0);
  lVar1 = FUN_03f488e8(*(undefined8 *)(this + 0x10));
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar1 + 0x2c0));
  Projectile::LaunchAt(param_1,param_2,fVar2 + fVar5,fVar3 + fVar4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::launchLv5Projectile() */

void PlantFirecrackerFlower::launchLv5Projectile(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PlantFirecrackerFlower *in_x0;
  RtObject *pRVar4;
  Zombie *this;
  long lVar5;
  float *pfVar6;
  undefined8 uVar7;
  FirecrackerFlowerProjectile *this_00;
  long lVar8;
  RealObject *this_01;
  FirecrackerFlowerProjectile *pFVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 in_d1;
  undefined4 uVar12;
  float fVar13;
  ulong in_d2;
  float fVar14;
  float fVar15;
  float fVar16;
  RtMixedPtrBase aRStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  string asStack_50 [8];
  wstring awStack_48 [8];
  int local_40;
  int local_3c;
  int local_38 [4];
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_38[0] = -1;
  local_38[2] = 1;
  lVar8 = 0;
  local_38[1] = 0;
  iVar3 = RandRangeInt(0,2);
  pFVar9 = (FirecrackerFlowerProjectile *)0x0;
  std::swap<int>(local_38,local_38 + iVar3);
  do {
    getTargetInRow(aRStack_60);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_60);
    if (cVar1 != '\0') {
      DVec3::DVec3((DVec3 *)&local_28);
      pRVar4 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60)
      ;
      bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar4);
      uVar12 = (undefined4)in_d2;
      uVar11 = (undefined4)in_d1;
      if (bVar2) {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        this = Sexy::RtObject::Cast<Zombie>(pRVar4);
        pcVar10 = *(code **)(*(long *)this + 0x3b0);
        lVar5 = FUN_03f488e8(*(undefined8 *)(in_x0 + 0x10));
        local_18 = (*pcVar10)(*(undefined4 *)(lVar5 + 0x2c0),this);
        local_14 = uVar11;
        local_10 = uVar12;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
        bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this);
        if (((bVar2) || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), bVar2))
           || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)this), bVar2))
        {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar15 = local_28 - (float)iVar3 * 1.8;
        }
        else {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar15 = local_28 - (float)iVar3 * 0.3;
        }
        local_28 = fVar15;
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(in_x0 + 0x10));
        fVar16 = *pfVar6;
        if (fVar15 < fVar16) {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          local_28 = fVar16 + (float)iVar3 * 0.5;
        }
      }
      else {
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar4);
        if (!bVar2) goto LAB_03f48e58;
        pRVar4 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
        Sexy::RtObject::Cast<GridItem>(pRVar4);
        GridItem::GetGridLocation();
        BoardTransforms::GridToBoardSpace((Point *)&local_18);
        local_28 = (float)local_40;
        local_20 = 0x41c80000;
        local_24 = (float)local_3c;
      }
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_58);
      Plant::GetProps();
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      lVar5 = FUN_03f46710(*(undefined8 *)(lVar5 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
      std::string::string(asStack_50,"FirecrackerFlowerSpecialDefault");
      Sexy::ToWString(asStack_50);
      Sexy::RtName::RtName((RtName *)&local_18,awStack_48);
      PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,uVar7,0xc,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_58,(RtWeakPtrBase *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::RtName::~RtName((RtName *)&local_18);
      FUN_05476c50(awStack_48);
      std::string::~string(asStack_50);
      nop();
      pfVar6 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                        **)(in_x0 + 0x10));
      fVar14 = *pfVar6;
      fVar13 = pfVar6[1];
      fVar15 = *(float *)(lVar5 + 0x68);
      fVar16 = *(float *)(lVar5 + 0x6c);
      in_d2 = (ulong)(uint)pfVar6[2];
      uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)a_Stack_58);
      Board::AddProjectile
                ((Board *)(fVar15 + fVar14),fVar16 + fVar13,uVar7,
                 (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(in_x0 + 0x10),0);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      FUN_03f46604((RtWeakPtr<Sexy::ResourceInfo> *)&local_18,*(undefined8 *)(in_x0 + 0x10));
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      iVar3 = FUN_03f46628(*(undefined8 *)(in_x0 + 0x10));
      pfVar6 = (float *)FUN_03f46654(*(undefined8 *)(lVar5 + 0x208),(long)(iVar3 + -1));
      fVar15 = *pfVar6;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      iVar3 = FUN_03f46628(*(undefined8 *)(in_x0 + 0x10));
      FirecrackerFlowerProjectile::setData
                (this_00,*(float *)(in_x0 + 0x28),iVar3,false,false,fVar15);
      in_d1 = 0x3dcccccd;
      launchProjectileAt(in_x0,(Projectile *)this_00,(SexyVector3 *)&local_28,0.1,0.1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
      pFVar9 = this_00;
    }
LAB_03f48e58:
    lVar8 = lVar8 + 4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    if (lVar8 == 0xc) {
      if (pFVar9 != (FirecrackerFlowerProjectile *)0x0) {
        this_01 = *(RealObject **)(in_x0 + 0x10);
        std::string::string((string *)&local_18,"Play_Pepperpult_Throw");
        RealObject::PlayPositionalSound(this_01,(string *)&local_18,0.0);
        std::string::~string((string *)&local_18);
        nop();
      }
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


/* PlantFirecrackerFlower::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantFirecrackerFlower::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"special_attack_3");
  if (bVar1) {
    launchLv5Projectile();
  }
  return 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::launchSpecialProjectile(Sexy::SexyVector3, Sexy::RtWeakPtr<BoardEntity>,
   Sexy::RtWeakPtr<BoardEntity> const&) */

void PlantFirecrackerFlower::launchSpecialProjectile
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,
               PlantFirecrackerFlower *param_4,RtWeakPtr<Sexy::ResourceInfo> *param_5,
               RtWeakPtr *param_6)

{
  char cVar1;
  int iVar2;
  RtObject *this;
  undefined8 uVar3;
  undefined8 *puVar4;
  FirecrackerFlowerProjectile *this_00;
  long lVar5;
  float *pfVar6;
  char *__s;
  Board *pBVar10;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_38 [8];
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 1;
  local_50 = param_1;
  local_4c = param_2;
  local_48 = param_3;
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(param_5);
  Sexy::RtObject::Cast<Zombie>(this);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_38);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  if (cVar1 == '\0') {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "FirecrackerFlowerPlantfoodDefault";
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    __s = "FirecrackerFlowerAvatarPlantfoodDefault";
  }
  std::string::string(asStack_30,__s);
  Sexy::ToWString(asStack_30);
  Sexy::RtName::RtName(aRStack_18,awStack_28);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,0xc,aRStack_18);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_38,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_28);
  std::string::~string(asStack_30);
  nop();
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(param_4 + 0x10));
                    /* WARNING: Load size is inaccurate */
  pBVar10._0_4_ = *puVar4;
  uVar7 = *(undefined4 *)((long)puVar4 + 4);
  uVar8 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)a_Stack_38);
  Board::AddProjectile(pBVar10._0_4_,uVar7,uVar8,uVar3,aRStack_18,*(undefined8 *)(param_4 + 0x10),0)
  ;
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  FUN_03f46604(aRStack_18,*(undefined8 *)(param_4 + 0x10));
  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  iVar2 = FUN_03f46628(*(undefined8 *)(param_4 + 0x10));
  pfVar6 = (float *)FUN_03f46654(*(undefined8 *)(lVar5 + 0x208),(long)(iVar2 + -1));
  fVar9 = *pfVar6;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_4 + 0x10));
  if (cVar1 == '\0') {
    iVar2 = FUN_03f46628(*(undefined8 *)(param_4 + 0x10));
    FirecrackerFlowerProjectile::setData(this_00,*(float *)(param_4 + 0x28),iVar2,true,false,fVar9);
  }
  else {
    iVar2 = FUN_03f46628(*(undefined8 *)(param_4 + 0x10));
    FirecrackerFlowerProjectile::setData(this_00,*(float *)(param_4 + 0x28),iVar2,true,true,fVar9);
  }
  uVar3 = FUN_03f465e8(*(undefined8 *)(this_00 + 0xe0));
  uVar3 = operator|(uVar3,0x2000);
  FUN_03f465ec(this_00 + 0xe0,uVar3);
  launchProjectileAt(param_4,(Projectile *)this_00,(SexyVector3 *)&local_50,1.0,0.15);
  Projectile::SetTarget((Projectile *)this_00,param_6);
  *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::DoSpecial(int) */

void PlantFirecrackerFlower::DoSpecial(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  RtWeakPtrBase *pRVar5;
  RtObject *pRVar6;
  Zombie *pZVar7;
  long lVar8;
  float *pfVar9;
  long *plVar10;
  code *pcVar11;
  float in_s1;
  undefined4 in_s2;
  float fVar12;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  avStack_20 [24];
  long local_8;
  
  plVar4 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  (**(code **)(*plVar4 + 0xd0))(avStack_20,plVar4,1);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(avStack_20);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(avStack_20);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_58,(__normal_iterator *)&local_50);
    if (!bVar2) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pRVar5 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_58);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_60,pRVar5);
    pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
    pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
    if (pZVar7 == (Zombie *)0x0) {
LAB_03f49924:
      DVec3::DVec3((DVec3 *)&local_40);
      pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
      bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar6);
      if (bVar2) {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        pZVar7 = Sexy::RtObject::Cast<Zombie>(pRVar6);
        pcVar11 = *(code **)(*(long *)pZVar7 + 0x3b0);
        lVar8 = FUN_03f488e8(plVar4[2]);
        local_30 = (*pcVar11)(*(undefined4 *)(lVar8 + 0x2c0),pZVar7);
        local_2c = in_s1;
        local_28 = in_s2;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_40,(SexyVector3 *)&local_30);
        bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)pZVar7);
        if (((bVar2) || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)pZVar7), bVar2))
           || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)pZVar7), bVar2)
           ) {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar12 = local_40 - (float)iVar3 * 1.8;
        }
        else {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar12 = local_40 - (float)iVar3 * 0.7;
        }
        local_40 = fVar12;
        pfVar9 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)plVar4[2]);
        if (fVar12 < *pfVar9) {
          iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
          local_40 = local_40 + (float)iVar3 * 0.7;
        }
      }
      else {
        pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
        bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar6);
        if (bVar2) {
          pRVar6 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_60);
          Sexy::RtObject::Cast<GridItem>(pRVar6);
          GridItem::GetGridLocation();
          BoardTransforms::GridToBoardSpace((Point *)&local_30);
          local_40 = (float)local_48;
          local_3c = (float)local_44;
          local_38 = 0x41c80000;
        }
      }
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)aRStack_60);
      in_s1 = local_3c;
      in_s2 = local_38;
      launchSpecialProjectile
                (local_40,plVar4,(RtWeakPtr<Sexy::SoundResource> *)&local_30,aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    }
    else {
      plVar10 = *(long **)(plVar4[2] + 0xa8);
      pcVar11 = *(code **)(*plVar10 + 0x3e0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_40);
      cVar1 = (*pcVar11)(plVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_30,0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (cVar1 != '\0') goto LAB_03f49924;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_58);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantFirecrackerFlower::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantFirecrackerFlower *param_4,undefined8 param_5,undefined8 param_6,
               undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  RtObject *pRVar6;
  Zombie *this;
  float *pfVar7;
  undefined8 *puVar8;
  FirecrackerFlowerProjectile *this_00;
  RealObject *this_01;
  FirecrackerFlowerProjectile *pFVar9;
  undefined8 uVar10;
  code *pcVar11;
  Board *pBVar16;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  RtMixedPtrBase aRStack_50 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_48 [8];
  string asStack_40 [8];
  wstring awStack_38 [8];
  int local_30;
  int local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar1 == '\0') {
    uVar10 = *(undefined8 *)(param_4 + 0x30);
    lVar4 = FUN_03f46634(uVar10,*(undefined8 *)(param_4 + 0x38));
    pFVar9 = (FirecrackerFlowerProjectile *)0x0;
    if (lVar4 != 0) {
      puVar5 = (undefined4 *)FUN_03f46718(uVar10);
      getTargetInRow(aRStack_50,param_4,*puVar5,param_7);
      cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_50);
      if (cVar1 == '\0') {
        pFVar9 = (FirecrackerFlowerProjectile *)0x0;
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_4 + 0x30));
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<int,std::allocator<int>>::erase
                  ((vector<int,std::allocator<int>> *)(param_4 + 0x30),CONCAT44(uStack_14,local_18))
        ;
      }
      else {
        DVec3::DVec3((DVec3 *)&local_28);
        pRVar6 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
        bVar2 = Sexy::RtObject::IsA<Zombie>(pRVar6);
        if (bVar2) {
          pRVar6 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          this = Sexy::RtObject::Cast<Zombie>(pRVar6);
          pcVar11 = *(code **)(*(long *)this + 0x3b0);
          lVar4 = FUN_03f488e8(*(undefined8 *)(param_4 + 0x10));
          local_18 = (*pcVar11)(*(undefined4 *)(lVar4 + 0x2c0),this);
          uStack_14 = param_2;
          local_10 = param_3;
          Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
          bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this);
          if (((bVar2) || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this), bVar2))
             || (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech_Hydra_Head>((RtObject *)this), bVar2)
             ) {
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            fVar14 = (float)local_28 - (float)iVar3 * 1.8;
            local_28 = CONCAT44(local_28._4_4_,fVar14);
          }
          else {
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            fVar14 = (float)local_28 - (float)iVar3 * 0.7;
            local_28 = CONCAT44(local_28._4_4_,fVar14);
          }
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_4 + 0x10));
          fVar15 = *pfVar7;
          if (fVar14 < fVar15) {
            iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
            local_28 = CONCAT44(local_28._4_4_,fVar15 + (float)iVar3 * 0.5);
          }
        }
        else {
          pRVar6 = (RtObject *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
          bVar2 = Sexy::RtObject::IsA<GridItem>(pRVar6);
          if (bVar2) {
            pRVar6 = (RtObject *)
                     Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
            Sexy::RtObject::Cast<GridItem>(pRVar6);
            GridItem::GetGridLocation();
            BoardTransforms::GridToBoardSpace((Point *)&local_18);
            local_20 = 0x41c80000;
            local_28 = CONCAT44((float)local_2c,(float)local_30);
          }
        }
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  (a_Stack_48);
        uVar10 = Sexy::LazySingleton<PVZDB>::GetInstance();
        std::string::string(asStack_40,"FirecrackerFlowerDefault");
        Sexy::ToWString(asStack_40);
        Sexy::RtName::RtName((RtName *)&local_18,awStack_38);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                  ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30,uVar10,0xc,(RtName *)&local_18);
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)a_Stack_48,(RtWeakPtrBase *)&local_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
        Sexy::RtName::~RtName((RtName *)&local_18);
        FUN_05476c50(awStack_38);
        std::string::~string(asStack_40);
        nop();
        puVar8 = (undefined8 *)
                 std::
                 _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 **)(param_4 + 0x10));
                    /* WARNING: Load size is inaccurate */
        pBVar16._0_4_ = *puVar8;
        uVar12 = *(undefined4 *)((long)puVar8 + 4);
        uVar13 = *(undefined4 *)(puVar8 + 1);
        uVar10 = *(undefined8 *)(gLawnApp + 0x9f0);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_18,(RtWeakPtrBase *)a_Stack_48);
        Board::AddProjectile
                  (pBVar16._0_4_,uVar12,uVar13,uVar10,(RtName *)&local_18,
                   *(undefined8 *)(param_4 + 0x10),0);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        FUN_03f46604((RtName *)&local_18,*(undefined8 *)(param_4 + 0x10));
        lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18)
        ;
        iVar3 = FUN_03f46628(*(undefined8 *)(param_4 + 0x10));
        pfVar7 = (float *)FUN_03f46654(*(undefined8 *)(lVar4 + 0x208),(long)(iVar3 + -1));
        fVar14 = *pfVar7;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
        iVar3 = FUN_03f46628(*(undefined8 *)(param_4 + 0x10));
        FirecrackerFlowerProjectile::setData
                  (this_00,*(float *)(param_4 + 0x28),iVar3,false,false,fVar14);
        launchProjectileAt(param_4,(Projectile *)this_00,(SexyVector3 *)&local_28,0.1,0.1);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_48)
        ;
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)(param_4 + 0x30));
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_18,(__normal_iterator *)&local_28);
        std::vector<int,std::allocator<int>>::erase
                  ((vector<int,std::allocator<int>> *)(param_4 + 0x30),CONCAT44(uStack_14,local_18))
        ;
        pFVar9 = this_00;
        if (this_00 != (FirecrackerFlowerProjectile *)0x0) {
          this_01 = *(RealObject **)(param_4 + 0x10);
          std::string::string((string *)&local_18,"Play_Pepperpult_Throw");
          RealObject::PlayPositionalSound(this_01,(string *)&local_18,0.0);
          std::string::~string((string *)&local_18);
          nop();
        }
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
    }
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pFVar9 = (FirecrackerFlowerProjectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pFVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantFirecrackerFlower::FindTargetAndFire(PlantWeapon) */

void __thiscall
PlantFirecrackerFlower::FindTargetAndFire(PlantFirecrackerFlower *this,undefined4 param_2)

{
  vector<int,std::allocator<int>> *this_00;
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  PlantAnimRig_FirecrackerFlower *this_01;
  Plant *this_02;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_18 [8];
  undefined4 local_10 [2];
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x30);
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear(this_00);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_18);
  getTargetInRow((RtWeakPtr<Sexy::ResourceInfo> *)local_10,this,0,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  if (cVar2 != '\0') {
    local_10[0] = 0;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
  getTargetInRow((RtWeakPtr<Sexy::ResourceInfo> *)local_10,this,0xffffffff,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  if (cVar3 != '\0') {
    local_10[0] = 0xffffffff;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
  getTargetInRow((RtWeakPtr<Sexy::ResourceInfo> *)local_10,this,1,param_2);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)a_Stack_18,(RtWeakPtr *)local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  cVar4 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)a_Stack_18);
  if (cVar4 != '\0') {
    local_10[0] = 1;
    std::vector<int,std::allocator<int>>::push_back(this_00,(int *)local_10);
  }
  if ((cVar2 != '\0' || cVar1 != '\0') || cVar3 != '\0') {
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    this_02 = *(Plant **)(this + 0x10);
    iVar6 = FUN_03f46628(this_02);
    iVar7 = FUN_03f46634(*(undefined8 *)(this + 0x30),*(undefined8 *)(this + 0x38));
    bVar5 = (bool)Plant::GetAvatarEnable(this_02);
    PlantAnimRig_FirecrackerFlower::setAttackState(this_01,iVar6,iVar7,bVar5);
    (**(code **)(*(long *)this + 0x1a0))(this);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}

