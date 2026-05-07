// Class: CoconutCannonSpecialProjectile


/* CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile() */

void __thiscall
CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile
          (CoconutCannonSpecialProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_067b9a60;
  *(undefined ***)(this + 0x10) = &PTR__CoconutCannonSpecialProjectile_067b9c50;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile() */

void __thiscall
CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile
          (CoconutCannonSpecialProjectile *this)

{
  ~CoconutCannonSpecialProjectile(this + -0x10);
  return;
}


/* CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile() */

void __thiscall
CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile
          (CoconutCannonSpecialProjectile *this)

{
  ~CoconutCannonSpecialProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile() */

void __thiscall
CoconutCannonSpecialProjectile::~CoconutCannonSpecialProjectile
          (CoconutCannonSpecialProjectile *this)

{
  ~CoconutCannonSpecialProjectile(this + -0x10);
  return;
}


/* CoconutCannonSpecialProjectile::CoconutCannonSpecialProjectile() */

void __thiscall
CoconutCannonSpecialProjectile::CoconutCannonSpecialProjectile(CoconutCannonSpecialProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067b9a60;
  *(undefined ***)(this + 0x10) = &PTR__CoconutCannonSpecialProjectile_067b9c50;
  return;
}


/* CoconutCannonSpecialProjectile::StaticNew() */

CoconutCannonSpecialProjectile * CoconutCannonSpecialProjectile::StaticNew(void)

{
  CoconutCannonSpecialProjectile *this;
  
  this = ::operator_new(0x1a8);
  CoconutCannonSpecialProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoconutCannonSpecialProjectile::StaticClassInit() */

void CoconutCannonSpecialProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"CoconutCannonSpecialProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0402d9f8,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CoconutCannonSpecialProjectile::StaticGetClass() */

long * CoconutCannonSpecialProjectile::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"CoconutCannonSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CoconutCannonSpecialProjectile::GetClass() const */

long * CoconutCannonSpecialProjectile::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"CoconutCannonSpecialProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CoconutCannonSpecialProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
CoconutCannonSpecialProjectile::OnCollideEntity
          (CoconutCannonSpecialProjectile *this,BoardEntity *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  Zombie *this_00;
  Projectile *this_01;
  SexyVector3 *pSVar9;
  string *this_02;
  int iVar10;
  Board *pBVar13;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_80;
  RtMixedPtrBase aRStack_78 [8];
  RtWeakPtrBase aRStack_70 [8];
  Insets aIStack_68 [16];
  undefined8 local_58 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_48 [24];
  string asStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  iVar10 = 0;
  std::string::string(asStack_30,"CannonballPulp1");
  nop();
  std::string::string(asStack_28,"CannonballPulp2");
  nop();
  std::string::string(asStack_20,"CannonballPulp3");
  nop();
  std::string::string(asStack_18,"CannonballPulp4");
  nop();
  std::string::string(asStack_10,"CannonballPulp5");
  nop();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_48);
  iVar4 = BoardEntity::CalcColumnPosition(param_1);
  iVar5 = SharkMinion::getRow((SharkMinion *)param_1);
  Sexy::Insets::Insets(aIStack_68,iVar4 + -1,iVar5 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_48,2,aIStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_48);
  do {
    local_58[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)avStack_48);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)local_58);
    if (!bVar2) {
LAB_040313bc:
      this_02 = (string *)&local_8;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_48);
      do {
        this_02 = this_02 + -8;
        std::string::~string(this_02);
      } while (this_02 != asStack_30);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar1);
    }
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
    if (*plVar6 != 0) {
      ToolPacketData::GetProps();
      ToolPacketData::GetProps();
      cVar3 = Sexy::RtWeakPtrBase::operator==(aRStack_70,(RtWeakPtrBase *)local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      if (cVar3 == '\0') {
        uVar7 = Sexy::LazySingleton<PVZDB>::GetInstance();
        Sexy::ToWString(asStack_30 + (long)iVar10 * 8);
        Sexy::RtName::RtName((RtName *)local_58,(wstring *)aRStack_70);
        PVZDB::FindObjectByAlias<DragonBabyBruitProps>
                  (aRStack_78,uVar7,0xc,(RtWeakPtr<Sexy::ResourceInfo> *)local_58);
        Sexy::RtName::~RtName((RtName *)local_58);
        FUN_05476c50(aRStack_70);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
        if (cVar3 != '\0') {
          puVar8 = (undefined8 *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_80);
          this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar8);
          if (this_00 != (Zombie *)0x0) {
            cVar3 = (**(code **)(*(long *)this_00 + 0x328))();
            if (cVar3 == '\0') {
              iVar10 = iVar10 + 1;
              uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
              puVar8 = (undefined8 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this);
                    /* WARNING: Load size is inaccurate */
              pBVar13._0_4_ = *puVar8;
              uVar11 = *(undefined4 *)((long)puVar8 + 4);
              uVar12 = *(undefined4 *)(puVar8 + 1);
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)local_58,(RtWeakPtrBase *)aRStack_78);
              this_01 = (Projectile *)
                        Board::AddProjectile
                                  (pBVar13._0_4_,uVar11,uVar12,uVar7,
                                   (RtWeakPtr<Sexy::ResourceInfo> *)local_58,0,0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)local_58,aRStack_70);
              Projectile::SetTarget(this_01,(RtWeakPtr *)local_58);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_58);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
              FUN_0402cffc(this_01 + 0x24);
              pSVar9 = (SexyVector3 *)
                       std::
                       _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                      *)this_00);
              Projectile::LaunchAt(this_01,pSVar9,150.0,1.2);
              if (4 < iVar10) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
                goto LAB_040313bc;
              }
            }
          }
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
      }
    }
    FUN_0402de38((__normal_iterator *)&local_80);
  } while( true );
}

