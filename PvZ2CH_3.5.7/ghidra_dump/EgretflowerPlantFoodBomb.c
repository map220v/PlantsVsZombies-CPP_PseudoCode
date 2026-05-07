// Class: EgretflowerPlantFoodBomb


/* EgretflowerPlantFoodBomb::SetDamageRate(float) */

void __thiscall
EgretflowerPlantFoodBomb::SetDamageRate(EgretflowerPlantFoodBomb *this,float param_1)

{
  *(float *)(this + 0x1a8) = param_1;
  return;
}


/* EgretflowerPlantFoodBomb::SetGridPosition(int, int) */

void __thiscall
EgretflowerPlantFoodBomb::SetGridPosition(EgretflowerPlantFoodBomb *this,int param_1,int param_2)

{
  *(int *)(this + 0x1ac) = param_1;
  *(int *)(this + 0x1b0) = param_2;
  return;
}


/* EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb() */

void __thiscall EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb(EgretflowerPlantFoodBomb *this)

{
  *(undefined ***)this = &PTR_GetClass_0681e190;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerPlantFoodBomb_0681e380;
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb() */

void __thiscall EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb(EgretflowerPlantFoodBomb *this)

{
  ~EgretflowerPlantFoodBomb(this + -0x10);
  return;
}


/* EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb() */

void __thiscall EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb(EgretflowerPlantFoodBomb *this)

{
  ~EgretflowerPlantFoodBomb(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb() */

void __thiscall EgretflowerPlantFoodBomb::~EgretflowerPlantFoodBomb(EgretflowerPlantFoodBomb *this)

{
  ~EgretflowerPlantFoodBomb(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerPlantFoodBomb::StaticClassInit() */

void EgretflowerPlantFoodBomb::StaticClassInit(void)

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
    std::string::string(asStack_10,"EgretflowerPlantFoodBomb");
    (*pcVar2)(plVar1,asStack_10,FUN_042645a8,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EgretflowerPlantFoodBomb::StaticGetClass() */

long * EgretflowerPlantFoodBomb::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerPlantFoodBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerPlantFoodBomb::GetClass() const */

long * EgretflowerPlantFoodBomb::GetClass(void)

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
  (*pcVar3)(plVar1,"EgretflowerPlantFoodBomb",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EgretflowerPlantFoodBomb::EgretflowerPlantFoodBomb() */

void __thiscall EgretflowerPlantFoodBomb::EgretflowerPlantFoodBomb(EgretflowerPlantFoodBomb *this)

{
  Projectile::Projectile((Projectile *)this);
  this[0x1a5] = (EgretflowerPlantFoodBomb)0x0;
  *(undefined ***)this = &PTR_GetClass_0681e190;
  *(undefined ***)(this + 0x10) = &PTR__EgretflowerPlantFoodBomb_0681e380;
  *(undefined4 *)(this + 0x1a8) = 0x3f800000;
  Sexy::Point::Point((Point *)(this + 0x1ac));
  return;
}


/* EgretflowerPlantFoodBomb::StaticNew() */

EgretflowerPlantFoodBomb * EgretflowerPlantFoodBomb::StaticNew(void)

{
  EgretflowerPlantFoodBomb *this;
  
  this = ::operator_new(0x1b8);
  EgretflowerPlantFoodBomb(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EgretflowerPlantFoodBomb::handleImpact(BoardEntity*) */

void __thiscall
EgretflowerPlantFoodBomb::handleImpact(EgretflowerPlantFoodBomb *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  GridItem *pGVar5;
  EgretflowerPlantFoodFire *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  Zombie *pZVar9;
  int iVar10;
  Board *this_01;
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  Insets aIStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [8];
  float local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::ShakeBoard(*(Board **)(gLawnApp + 0x9f0),3,-4,0.25);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  Sexy::Insets::Insets(aIStack_90,*(int *)(this + 0x1ac) + -1,*(int *)(this + 0x1b0) + -1,3,3);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesInGridSquares(avStack_80,uVar3,aIStack_90);
  local_a0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_98 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98);
    if (!bVar1) {
      DamageInfo::DamageInfo(aDStack_68);
      local_60 = *(float *)(this + 0x1a8) * 50.0;
      local_58 = operator|(0x1000,0x400);
      iVar6 = *(int *)(this + 0x1ac);
      iVar10 = iVar6 + -1;
      if (iVar10 <= iVar6 + 1) {
        iVar7 = *(int *)(this + 0x1b0);
        do {
          iVar8 = iVar7 + -1;
          if (iVar8 <= iVar7 + 1) {
            do {
              while( true ) {
                Sexy::Point::Point((Point *)&local_98,iVar10,iVar8);
                cVar2 = FUN_04265250((Point *)&local_98);
                if (cVar2 == '\0') break;
                this_01 = *(Board **)(gLawnApp + 0x9f0);
                std::string::string((string *)&local_a0,"egretflower_fire");
                Board::AddGridItem(this_01,(string *)&local_a0,iVar10,iVar8,1);
                nop();
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          (aRStack_a8,(RtWeakPtrBase *)&local_98);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
                std::string::~string((string *)&local_a0);
                nop();
                bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_a8);
                if (bVar1) {
                  this_00 = (EgretflowerPlantFoodFire *)
                            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
                  EgretflowerPlantFoodFire::InitFire(this_00,aDStack_68);
                }
                iVar8 = iVar8 + 1;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
                iVar7 = *(int *)(this + 0x1b0);
                if (iVar7 + 1 < iVar8) goto LAB_0426774c;
              }
              iVar7 = *(int *)(this + 0x1b0);
              iVar8 = iVar8 + 1;
            } while (iVar8 <= iVar7 + 1);
LAB_0426774c:
            iVar6 = *(int *)(this + 0x1ac);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 <= iVar6 + 1);
      }
      uVar3 = Projectile::handleImpact((Projectile *)this,param_1);
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(uVar3);
      }
      return;
    }
    puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0);
    bVar1 = Sexy::RtObject::IsA<GridItem>((RtObject *)*puVar4);
    if (bVar1) {
      pZVar9 = (Zombie *)0x0;
      pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar4);
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
      if (bVar1) {
LAB_042675f4:
        pZVar9 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      }
      if ((pGVar5 != (GridItem *)0x0) &&
         (cVar2 = (**(code **)(*(long *)pGVar5 + 0x200))(pGVar5), cVar2 != '\0')) {
        DamageInfo::DamageInfo(aDStack_68);
        local_60 = (float)FUN_04261b08(*(undefined4 *)(this + 0xd8));
        local_60 = local_60 * *(float *)(this + 0x1a8);
        local_58 = FUN_04261b04(*(undefined8 *)(this + 0xe0));
        (**(code **)(*(long *)pGVar5 + 0x110))(pGVar5,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
      if ((((pZVar9 != (Zombie *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pZVar9 + 0x328))(pZVar9), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*(long *)pZVar9 + 0x330))(pZVar9), cVar2 == '\0')) &&
         (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this,(RealObject *)pZVar9),
         cVar2 != '\0')) {
        if (this[0x1a5] != (EgretflowerPlantFoodBomb)0x0) {
          Zombie::ApplyCondition((Zombie *)0x40000000,0,pZVar9,0x18,1);
        }
        DamageInfo::DamageInfo(aDStack_68);
        local_60 = (float)FUN_04261b08(*(undefined4 *)(this + 0xd8));
        local_60 = local_60 * *(float *)(this + 0x1a8);
        local_58 = FUN_04261b04(*(undefined8 *)(this + 0xe0));
        (**(code **)(*(long *)pZVar9 + 0x110))(pZVar9,aDStack_68);
        DamageInfo::~DamageInfo(aDStack_68);
      }
    }
    else {
      bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar4);
      if (bVar1) {
        pGVar5 = (GridItem *)0x0;
        goto LAB_042675f4;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
  } while( true );
}

