// Class: IceShroomGreatShotProjectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceShroomGreatShotProjectile::StaticClassInit() */

void IceShroomGreatShotProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"IceShroomGreatShotProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04216b64,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* IceShroomGreatShotProjectile::StaticGetClass() */

long * IceShroomGreatShotProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"IceShroomGreatShotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceShroomGreatShotProjectile::GetClass() const */

long * IceShroomGreatShotProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"IceShroomGreatShotProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* IceShroomGreatShotProjectile::IceShroomGreatShotProjectile() */

void __thiscall
IceShroomGreatShotProjectile::IceShroomGreatShotProjectile(IceShroomGreatShotProjectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0680ccc0;
  *(undefined ***)(this + 0x10) = &PTR__IceShroomGreatShotProjectile_0680ceb0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  return;
}


/* IceShroomGreatShotProjectile::StaticNew() */

IceShroomGreatShotProjectile * IceShroomGreatShotProjectile::StaticNew(void)

{
  IceShroomGreatShotProjectile *this;
  
  this = ::operator_new(0x1b8);
  IceShroomGreatShotProjectile(this);
  return this;
}


/* IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile() */

void __thiscall
IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile(IceShroomGreatShotProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0680ccc0;
  *(undefined ***)(this + 0x10) = &PTR__IceShroomGreatShotProjectile_0680ceb0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile() */

void __thiscall
IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile(IceShroomGreatShotProjectile *this)

{
  ~IceShroomGreatShotProjectile(this + -0x10);
  return;
}


/* IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile() */

void __thiscall
IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile(IceShroomGreatShotProjectile *this)

{
  ~IceShroomGreatShotProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile() */

void __thiscall
IceShroomGreatShotProjectile::~IceShroomGreatShotProjectile(IceShroomGreatShotProjectile *this)

{
  ~IceShroomGreatShotProjectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceShroomGreatShotProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
IceShroomGreatShotProjectile::OnCollideEntity
          (IceShroomGreatShotProjectile *this,BoardEntity *param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  RtObject *this_00;
  RealObject *pRVar9;
  float *pfVar10;
  PlantIceShroom *this_01;
  GridItem *this_02;
  RealObject *pRVar11;
  undefined8 *puVar12;
  long extraout_x0;
  undefined8 uVar13;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  undefined8 uVar14;
  Board *pBVar18;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 local_50;
  undefined8 local_48;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  FastCurve aFStack_30 [8];
  float afStack_28 [2];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  cVar1 = Sexy::RtWeakPtrBase::operator==
                    ((RtWeakPtrBase *)(this + 0x1b0),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  uVar2 = 0;
  if (cVar1 != '\0') goto LAB_04215ecc;
  if ((*(int *)(this + 0x1ac) != 2) &&
     (lVar8 = Projectile::GetInstigator((Projectile *)this), lVar8 != 0)) {
    Projectile::GetInstigator((Projectile *)this);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20);
    if (cVar1 != '\0') {
      this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
      bVar3 = Sexy::RtObject::IsA<Plant>(this_00);
      if (bVar3) {
        pRVar9 = (RealObject *)Projectile::GetInstigator((Projectile *)this);
        cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,pRVar9);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
        if (cVar1 != '\0') {
          std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aRStack_20);
          pfVar10 = (float *)std::
                             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            *)param_1);
          fVar17 = *pfVar10;
          iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
          fVar15 = pfVar10[1];
          iVar6 = BoardTransforms::BoardSpaceToGridY((int)(fVar15 - 30.0));
          uVar7 = operator|(2,4);
          Sexy::FastCurve::SetOutRange
                    (aFStack_30,(float)(int)((float)(iVar5 / 2) + fVar17),
                     (float)(int)(fVar15 - 30.0));
          iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
          EntityFinder::GetEntitiesTouchingCircle2D
                    ((float)iVar5 * 1.44,aRStack_20,uVar7,aFStack_30,iVar6 + -1,iVar6 + 1);
          Projectile::GetInstigator((Projectile *)this);
          nop();
          nop();
          local_50 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)aRStack_20);
          local_48 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)aRStack_20);
          while (bVar3 = __gnu_cxx::operator!=
                                   ((__normal_iterator *)&local_50,(__normal_iterator *)&local_48),
                bVar3) {
            puVar12 = (undefined8 *)
                      std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
            pRVar9 = (RealObject *)*puVar12;
            bVar3 = Sexy::RtObject::IsA<GridItem>((RtObject *)pRVar9);
            if (bVar3) {
              nop();
              if (*(code **)(*(long *)this_02 + 0x1d8) == GridItem::GetHitpoints) {
                fVar15 = (float)GridItem::GetHitpoints(this_02);
              }
              else {
                fVar15 = (float)(**(code **)(*(long *)this_02 + 0x1d8))();
              }
LAB_04216050:
              bVar3 = 0.0 < fVar15;
            }
            else {
              bVar4 = Sexy::RtObject::IsA<Zombie>((RtObject *)pRVar9);
              bVar3 = false;
              if (bVar4) {
                nop();
                fVar15 = (float)FUN_04213418(*(undefined4 *)(extraout_x0 + 0x280));
                goto LAB_04216050;
              }
            }
            lVar8 = Projectile::GetInstigator((Projectile *)this);
            if ((lVar8 != 0) && (iVar5 = FUN_04213290(*(undefined4 *)(pRVar9 + 0x24)), iVar5 != 3))
            {
              pRVar11 = (RealObject *)Projectile::GetInstigator((Projectile *)this);
              cVar1 = RealObject::IsOnOpposingTeam(pRVar9,pRVar11);
              if ((cVar1 != '\0') &&
                 (((*(int *)(this + 0x1a8) < 2 && (bVar3)) &&
                  (this_01 != (PlantIceShroom *)0x0 && pRVar9 != (RealObject *)param_1)))) {
                *(int *)(this + 0x1a8) = *(int *)(this + 0x1a8) + 1;
                std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                _Hash_node(a_Stack_40);
                if (*(int *)(this + 0x1ac) == 0) {
                  iVar5 = FUN_0421332c(*(undefined4 *)(this + 0x70));
                  if (iVar5 == 5) {
                    lVar8 = PlantIceShroom::GetIceShroomProps(this_01);
                    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,
                               (RtWeakPtr *)(lVar8 + 0x300));
                  }
                  else {
                    lVar8 = PlantIceShroom::GetIceShroomProps(this_01);
                    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,
                               (RtWeakPtr *)(lVar8 + 0x2f0));
                  }
                }
                else {
                  iVar5 = FUN_0421332c(*(undefined4 *)(this + 0x70));
                  if (iVar5 == 5) {
                    lVar8 = PlantIceShroom::GetIceShroomProps(this_01);
                    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,
                               (RtWeakPtr *)(lVar8 + 0x308));
                  }
                  else {
                    lVar8 = PlantIceShroom::GetIceShroomProps(this_01);
                    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                              ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,
                               (RtWeakPtr *)(lVar8 + 0x2f8));
                  }
                }
                uVar14 = *(undefined8 *)(gLawnApp + 0x9f0);
                puVar12 = (undefined8 *)
                          std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                         *)this);
                    /* WARNING: Load size is inaccurate */
                pBVar18._0_4_ = *puVar12;
                uVar7 = *(undefined4 *)((long)puVar12 + 4);
                uVar16 = *(undefined4 *)(puVar12 + 1);
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aFStack_30,(RtWeakPtrBase *)a_Stack_40)
                ;
                uVar13 = Projectile::GetInstigator((Projectile *)this);
                this_03 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)Board::AddProjectile
                                       (pBVar18._0_4_,uVar7,uVar16,uVar14,aFStack_30,uVar13,0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_30);
                pfVar10 = (float *)std::
                                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                                  *)pRVar9);
                fVar15 = *pfVar10;
                iVar5 = BoardConstants::GRIDSQUARE_WIDTH();
                EATextSquish::Vec3::Vec3
                          ((Vec3 *)aFStack_30,fVar15 + -40.0 + (float)(iVar5 / 2),pfVar10[1],0.0);
                lVar8 = std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_03);
                pfVar10 = eastl::max_alt<float>((float *)(lVar8 + 8),afStack_28);
                Projectile::LaunchAt((Projectile *)this_03,(SexyVector3 *)aFStack_30,*pfVar10,0.5);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                          ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this_03 + 0x1b0),
                           (RtWeakPtrBase *)aRStack_38);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
                *(int *)(this_03 + 0x1ac) = *(int *)(this + 0x1ac) + 1;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
              }
            }
            eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                      ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
          }
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aRStack_20);
        }
        goto LAB_04215ebc;
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  }
LAB_04215ebc:
  uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_04215ecc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IceShroomGreatShotProjectile::fillDamageInfo(DamageInfo&, BoardEntity*) */

void __thiscall
IceShroomGreatShotProjectile::fillDamageInfo
          (IceShroomGreatShotProjectile *this,DamageInfo *param_1,BoardEntity *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  RtObject *this_00;
  Plant *pPVar5;
  PlantIceShroom *this_01;
  float fVar6;
  float fVar7;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = Projectile::GetInstigator((Projectile *)this);
  if (lVar4 != 0) {
    Projectile::GetInstigator((Projectile *)this);
    ToolPacketData::GetProps();
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 != '\0') {
      if (((param_2 != (BoardEntity *)0x0) &&
          (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_2), bVar2)) &&
         (*(int *)(this + 0x1ac) < 1)) {
        this_00 = (RtObject *)Projectile::GetInstigator((Projectile *)this);
        pPVar5 = Sexy::RtObject::Cast<Plant>(this_00);
        if (((pPVar5 != (Plant *)0x0) && (nop(), this_01 != (PlantIceShroom *)0x0)) &&
           (lVar4 = PlantIceShroom::GetIceShroomProps(this_01), lVar4 != 0)) {
          iVar3 = PlantIceShroom::GetCurLevel(this_01);
          lVar4 = FUN_042136d0(*(undefined8 *)(lVar4 + 0x2d0),(long)(iVar3 + -1));
          fVar7 = *(float *)(lVar4 + 4);
          fVar6 = (float)Sexy::Rand(1.0);
          if (fVar6 < fVar7) {
            DamageInfo::AddCondition((DamageInfo *)0x40a00000,param_1,1);
          }
        }
      }
      Projectile::fillDamageInfo((DamageInfo *)this,(BoardEntity *)param_1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

