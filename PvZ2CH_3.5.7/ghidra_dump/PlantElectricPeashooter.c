// Class: PlantElectricPeashooter


/* PlantElectricPeashooter::PlantElectricPeashooter() */

void __thiscall PlantElectricPeashooter::PlantElectricPeashooter(PlantElectricPeashooter *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06748090;
  return;
}


/* PlantElectricPeashooter::StaticNew() */

PlantElectricPeashooter * PlantElectricPeashooter::StaticNew(void)

{
  PlantElectricPeashooter *this;
  
  this = ::operator_new(0x28);
  PlantElectricPeashooter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeashooter::StaticClassInit() */

void PlantElectricPeashooter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantElectricPeashooter");
    (*pcVar2)(plVar1,asStack_10,FUN_03c11a64,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricPeashooter::StaticGetClass() */

long * PlantElectricPeashooter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricPeashooter::GetClass() const */

long * PlantElectricPeashooter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricPeashooter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricPeashooter::~PlantElectricPeashooter() */

void __thiscall PlantElectricPeashooter::~PlantElectricPeashooter(PlantElectricPeashooter *this)

{
  *(undefined ***)this = &PTR_GetClass_06748090;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantElectricPeashooter::~PlantElectricPeashooter() */

void __thiscall PlantElectricPeashooter::~PlantElectricPeashooter(PlantElectricPeashooter *this)

{
  ~PlantElectricPeashooter(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeashooter::launchElectricBall() */

void __thiscall PlantElectricPeashooter::launchElectricBall(PlantElectricPeashooter *this)

{
  undefined8 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 3;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  uVar1 = PlantFramework::Fire
                    ((PlantFramework *)this,a_Stack_10,
                     *(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeashooter::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantElectricPeashooter::Fire
          (PlantElectricPeashooter *this,RtWeakPtrBase *param_2,undefined4 param_3,
          undefined4 param_4)

{
  char cVar1;
  int iVar2;
  long extraout_x0;
  RtObject *pRVar3;
  ElectricPeaProjectile *this_00;
  ElectricPeashooterProps *pEVar4;
  long extraout_x0_00;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 != '\0') {
    (**(code **)(*(long *)this + 0xa8))(this,0);
    this_00 = (ElectricPeaProjectile *)0x0;
    goto LAB_03c17194;
  }
  lVar5 = *(long *)(this + 0x10);
  cVar1 = FUN_03c0fdb0(lVar5);
  if (cVar1 != '\0') {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if ((extraout_x0_00 != 0) &&
       (fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0),
       fVar6 < *(float *)(extraout_x0_00 + 0x2d0))) {
      this_00 = (ElectricPeaProjectile *)launchElectricBall(this);
      goto LAB_03c17194;
    }
    lVar5 = *(long *)(this + 0x10);
  }
  iVar2 = FUN_03c0fda8(lVar5);
  if (iVar2 < 2) {
LAB_03c17100:
    *(undefined4 *)(lVar5 + 0x150) = 0;
  }
  else {
    Plant::GetProps();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (extraout_x0 == 0) {
      lVar5 = *(long *)(this + 0x10);
      goto LAB_03c17100;
    }
    fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    lVar5 = *(long *)(this + 0x10);
    fVar7 = *(float *)(extraout_x0 + 0x2d8);
    iVar2 = FUN_03c0fda8(lVar5);
    if (2 < iVar2) {
      fVar7 = *(float *)(extraout_x0 + 0x2dc) * fVar7 + fVar7;
    }
    if (fVar7 <= fVar6) goto LAB_03c17100;
    *(undefined4 *)(lVar5 + 0x150) = 5;
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,param_2);
  pRVar3 = (RtObject *)PlantFramework::Fire((PlantFramework *)this,aRStack_10,param_3,param_4);
  this_00 = Sexy::RtObject::Cast<ElectricPeaProjectile>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  FUN_03c0fd84(aRStack_10,*(undefined8 *)(this + 0x10));
  pRVar3 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  pEVar4 = Sexy::RtObject::Cast<ElectricPeashooterProps_const>(pRVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  fVar8 = *(float *)(pEVar4 + 0x2c4);
  iVar2 = *(int *)(pEVar4 + 700);
  fVar9 = *(float *)(pEVar4 + 0x2b8);
  fVar7 = *(float *)(pEVar4 + 0x2c0);
  fVar6 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  ElectricPeaProjectile::SetProjectileData(this_00,fVar9,iVar2,fVar7,fVar6 * fVar8);
LAB_03c17194:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricPeashooter::DoSpecial(int) */

void PlantElectricPeashooter::DoSpecial(int param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  long *plVar5;
  BoardEntity **ppBVar6;
  Zombie *pZVar7;
  long lVar8;
  PlantAction *pPVar9;
  long lVar10;
  RtObject *this;
  ElectricPeaPlantfoodProjectile *this_00;
  undefined8 *puVar11;
  SexyVector3 *this_01;
  ulong uVar12;
  RtWeakPtr<Sexy::ResourceInfo> *this_02;
  int iVar13;
  int iVar14;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  int iVar15;
  float fVar16;
  float fVar17;
  undefined4 in_s2;
  float fVar18;
  double dVar19;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_d8 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_c8 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_b0 [24];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  RtWeakPtrBase aRStack_78 [36];
  int local_54;
  ElectricPeaPlantfoodProjectile *local_50;
  long local_8;
  
  plVar5 = (long *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_c8);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_b0);
  uVar4 = operator|(2,4);
  (**(code **)(*plVar5 + 0x2b0))
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,plVar5,1);
  EntityFinder::GetEntitiesInGridSquares
            (avStack_c8,uVar4,(vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_c8);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_c8);
  do {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,(__normal_iterator *)&local_80);
    if (!bVar2) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,(vector *)avStack_b0
                );
      PlantUtils::GetEntityClusterTargets
                ((PlantUtils *)&local_98,0x40000000,
                 (vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80,uVar4);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      lVar8 = FUN_03c140a4(plVar5[2]);
      pPVar9 = (PlantAction *)FUN_03c0ff3c(*(undefined8 *)(lVar8 + 0x70));
      PlantAction::PlantAction((PlantAction *)&local_80,pPVar9);
      iVar15 = *(int *)(lVar8 + 0x2c8);
      cVar3 = Plant::GetAvatarEnable((Plant *)plVar5[2]);
      if (cVar3 != '\0') {
        iVar15 = iVar15 + *(int *)(lVar8 + 0x2d4);
      }
      if (0 < iVar15) {
        iVar13 = 0;
        iVar14 = 0;
        do {
          uVar1 = local_98;
          this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)0x0;
          lVar10 = FUN_03c0fddc(local_98,local_90);
          if (lVar10 != 0) {
            this_02 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_03c0fe18(uVar1,(long)iVar14);
            this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                       *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_02);
          }
          if ((iVar13 < iVar15 - *(int *)(lVar8 + 0x2d4)) || (cVar3 == '\0')) {
            *(undefined4 *)(plVar5[2] + 0x150) = 1;
          }
          else {
            *(undefined4 *)(plVar5[2] + 0x150) = 4;
          }
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    (a_Stack_d8);
          this = (RtObject *)
                 Plant::Fire((Plant *)plVar5[2],a_Stack_d8,
                             *(undefined4 *)((Plant *)plVar5[2] + 0x110),1);
          this_00 = Sexy::RtObject::Cast<ElectricPeaPlantfoodProjectile>(this);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d8);
          if (this_00 != (ElectricPeaPlantfoodProjectile *)0x0) {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_d8,aRStack_78);
            fVar17 = (float)local_54;
            ElectricPeaPlantfoodProjectile::SetProjectileData
                      (local_50._0_4_,this_00,a_Stack_d8,*(undefined4 *)(lVar8 + 0x2cc));
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_d8);
            if (this_03 !=
                (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                 *)0x0) {
              puVar11 = (undefined8 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)this_00);
              local_108 = *puVar11;
              local_100 = *(undefined4 *)(puVar11 + 1);
              puVar11 = (undefined8 *)Projectile::GetVelocity((Projectile *)this_00);
              local_f8 = *puVar11;
              local_f0 = *(undefined4 *)(puVar11 + 1);
              this_01 = (SexyVector3 *)
                        std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_03);
              local_e8 = (float)Sexy::SexyVector3::operator-(this_01,(SexyVector3 *)&local_108);
              local_e4 = fVar17;
              local_e0 = in_s2;
              if (0.001 <= ABS(local_e8)) {
                fVar17 = atan2f(-fVar17,local_e8);
                if (ABS(fVar17) <= 3.1415927) {
                  fVar18 = cosf(fVar17);
                  fVar16 = sinf(fVar17);
                  fVar16 = -fVar16;
                }
                else {
                  dVar19 = 6.2831854820251465;
                  if ((long)(double)fVar17 < 0) {
                    dVar19 = -6.2831854820251465;
                  }
                  fVar18 = cosf(fVar17);
                  fVar16 = sinf(fVar17);
                  fVar16 = -fVar16;
                  fVar17 = (float)((double)fVar17 - dVar19);
                }
              }
              else {
                if (fVar17 < 0.0) {
                  fVar17 = -1.5707964;
                  fVar16 = 1.0;
                }
                else {
                  fVar17 = 1.5707964;
                  fVar16 = -1.0;
                }
                fVar18 = -4.371139e-08;
              }
              FUN_03c0fd68(fVar17,this_00 + 0xc4);
              fVar17 = (float)DVec3::getLength((DVec3 *)&local_f8);
              in_s2 = 0;
              EATextSquish::Vec3::Vec3((Vec3 *)a_Stack_d8,fVar17 * fVar18,fVar17 * fVar16,0.0);
              Projectile::SetVelocity((Projectile *)this_00,(SexyVector3 *)a_Stack_d8);
            }
            iVar14 = iVar14 + 1;
            uVar12 = FUN_03c0fddc(local_98,local_90);
            if (uVar12 <= (ulong)(long)iVar14) {
              iVar14 = 0;
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 != iVar15);
      }
      PlantAction::~PlantAction((PlantAction *)&local_80);
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      ~vector((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              &local_98);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_c8);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    ppBVar6 = (BoardEntity **)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_98);
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)*ppBVar6);
    if ((bVar2) &&
       (pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)*ppBVar6), pZVar7 != (Zombie *)0x0)) {
      cVar3 = (**(code **)(*(long *)pZVar7 + 0x328))();
      if ((cVar3 == '\0') && (cVar3 = (**(code **)(*(long *)pZVar7 + 0x330))(pZVar7), cVar3 == '\0')
         ) {
        cVar3 = RealObject::IsOnTeam(*ppBVar6,2);
        goto joined_r0x03c17324;
      }
    }
    else {
      cVar3 = RealObject::IsOnTeam(*ppBVar6,2);
joined_r0x03c17324:
      if (cVar3 != '\0') {
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_b0,ppBVar6);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_98);
  } while( true );
}

